#include <wayland-client.h>
#include <wayland-egl.h>
#include <EGL/egl.h>

static struct wl_display *display;
static EGLDisplay egl_display;

int main(int argc, char **argv)
{


    display = wl_display_connect(NULL);
    egl_display = eglGetDisplay(display);
    eglInitialize(egl_display, NULL, NULL);
    
}
