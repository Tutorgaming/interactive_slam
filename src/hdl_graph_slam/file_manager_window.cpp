#include <hdl_graph_slam/file_manager_window.hpp>
#include <sstream>

namespace hdl_graph_slam {
    // Constructor
    FileManagerWindow::FileManagerWindow() : show_window(false) {
        std::cout << "Initializing" << std::endl;
    }
    // Destructor
    FileManagerWindow::~FileManagerWindow(){
        // Nothing
    }

    void FileManagerWindow::draw_ui(){
        if(!show_window){
            return;
        }
        ImGui::Begin("File Manager Windows", &show_window, ImGuiWindowFlags_None);
        ImGui::Text("Current Selected File Path : ");
        ImGui::Text(file_path.c_str());
        ImGui::Text("");
        ImGui::Text("Input Absolute path to Dump folder here : ");
        static char str0[256] = "";
        ImGui::InputText("", str0, IM_ARRAYSIZE(str0));
        bool clicked = ImGui::Button("Set Loading Path");
        if(clicked){
            set_file_path(str0);
        }
        ImGui::End();
    }

    void FileManagerWindow::set_file_path(char *inputstring){
        file_path = inputstring;
        std::cout << "Setting Loading Path to : " << file_path << std::endl;
    }
    void FileManagerWindow::clear_file_path(){
        file_path = "";
    }
    std::string FileManagerWindow::get_file_path()
    {
        // Getters for file path
        if(file_path.empty()){
            return "";
        }

        return file_path;
    }


} // end namespace hdl_graph_slam