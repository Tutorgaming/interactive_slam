#ifndef HDL_GRAPH_SLAM_FILE_MANAGER_WINDOW_HPP
#define HDL_GRAPH_SLAM_FILE_MANAGER_WINDOW_HPP

#include <memory>

#include <imgui.h>
#include <guik/gl_canvas.hpp>
#include <hdl_graph_slam/view/interactive_graph_view.hpp>

namespace hdl_graph_slam{
    class FileManagerWindow{
        public:
            FileManagerWindow();
            ~FileManagerWindow();
            void show() {
                show_window = true;
            }
            void draw_ui();
            std::string get_file_path();
            void set_file_path(char *inputstring);
            void clear_file_path();
            bool is_showing(){
                return show_window;
            }
        private:
            bool show_window;
            std::string file_path;

    };
}
#endif // !HDL_GRAPH_SLAM_FILE_MANAGER_WINDOW_HPP