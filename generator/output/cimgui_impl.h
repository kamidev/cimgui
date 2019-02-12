typedef struct SDL_Window SDL_Window;
typedef struct GLFWwindow GLFWwindow;

struct GLFWwindow;

struct SDL_Window;
typedef union SDL_Event SDL_Event;CIMGUI_API bool ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window,bool install_callbacks);
CIMGUI_API bool ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window,bool install_callbacks);
CIMGUI_API void ImGui_ImplGlfw_Shutdown();
CIMGUI_API void ImGui_ImplGlfw_NewFrame();
CIMGUI_API void ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window,int button,int action,int mods);
CIMGUI_API void ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window,double xoffset,double yoffset);
CIMGUI_API void ImGui_ImplGlfw_KeyCallback(GLFWwindow* window,int key,int scancode,int action,int mods);
CIMGUI_API void ImGui_ImplGlfw_CharCallback(GLFWwindow* window,unsigned int c);
CIMGUI_API bool ImGui_ImplOpenGL3_Init(const char* glsl_version);
CIMGUI_API void ImGui_ImplOpenGL3_Shutdown();
CIMGUI_API void ImGui_ImplOpenGL3_NewFrame();
CIMGUI_API void ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API bool ImGui_ImplOpenGL3_CreateFontsTexture();
CIMGUI_API void ImGui_ImplOpenGL3_DestroyFontsTexture();
CIMGUI_API bool ImGui_ImplOpenGL3_CreateDeviceObjects();
CIMGUI_API void ImGui_ImplOpenGL3_DestroyDeviceObjects();
CIMGUI_API bool ImGui_ImplOpenGL2_Init();
CIMGUI_API void ImGui_ImplOpenGL2_Shutdown();
CIMGUI_API void ImGui_ImplOpenGL2_NewFrame();
CIMGUI_API void ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API bool ImGui_ImplOpenGL2_CreateFontsTexture();
CIMGUI_API void ImGui_ImplOpenGL2_DestroyFontsTexture();
CIMGUI_API bool ImGui_ImplOpenGL2_CreateDeviceObjects();
CIMGUI_API void ImGui_ImplOpenGL2_DestroyDeviceObjects();
CIMGUI_API bool ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window,void* sdl_gl_context);
CIMGUI_API bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window);
CIMGUI_API void ImGui_ImplSDL2_Shutdown();
CIMGUI_API void ImGui_ImplSDL2_NewFrame(SDL_Window* window);
CIMGUI_API bool ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);
