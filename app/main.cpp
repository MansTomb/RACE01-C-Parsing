#include <nanogui/nanogui.h>
#include <iostream>

using namespace nanogui;

enum test_enum {
    Item1 = 0,
    Item2,
    Item3
};

bool bvar = true;
int ivar = 12345678;
double dvar = 3.1415926;
float fvar = (float)dvar;
std::string strval = "A string";
test_enum enumval = Item2;
Color colval(0.5f, 0.5f, 0.7f, 1.f);


int main(int /* argc */, char ** /* argv */) {
    nanogui::init();

    Screen *screen = nullptr;
    screen = new Screen(Vector2i(600, 500), "RACE01-C-Parsing", false);
    Widget *panel = new Widget(screen);
    panel->setLayout(new BoxLayout(Orientation::Vertical, Alignment::Middle, 10, 5));
    panel->setPosition({90, 30});
    TextBox *text = new TextBox(panel, "");
    text->setFixedWidth(400);
//    text->value();
    text->setEditable(true);

    Button *parse_button = new Button(panel, "Parse");
    parse_button->setFixedWidth(100);
    parse_button->setCallback([text](){
       std::cout << text->value() << std::endl;
        text->setValue("");
    });

    Button *pause_button = new Button(panel, "Pause");
    pause_button->setFixedWidth(100);
    pause_button->setCallback([text](){
        std::cout << "pause" << std::endl;
    });
//    Window* res_wind = new Window(panel, "Result");
//    res_wind->setFocused(false);
//    res_wind->setEnabled(false);
//    res_wind->mouseEnterEvent({0,0}, false);
//    res_wind->setFixedSize({400, 300});
//
//    VScrollPanel* vscroll = new VScrollPanel(res_wind);
//    vscroll->setEnabled(false);
//    vscroll->setFixedSize({400, 300});
//
//    Widget* buf = new Widget(vscroll);

    Label *res_text = new Label(panel, "geajgeoshgpoesuhgpoeuhgrpoeashrgoubeoiu rgbesoiubfrgseoibdrgoaeurghpoaeuihrgoaeugrpeioubge gpeorhgpeoru hgpeoirhgoeuhrg ouehpog herapoirghepoaihr[");
    res_text->setPosition({10, 30});
    res_text->setFixedWidth(390);
//    MessageDialog *mess = new MessageDialog(screen, nanogui::MessageDialog::Type::Information, "");

//    Label *res_text = new Label(panel, "geajgeoshgpoesuhgpoeuhgrpoeashrgoubeoiu rgbesoiubfrgseoibdrgoaeurghpoaeuihrgoaeugrpeioubge gpeorhgpeoru hgpeoirhgoeuhrg ouehpog herapoirghepoaihr[");
////    TextBox *res_text = new TextBox(panel, "geajgeoshgpoesuhgpoeuhgrpoeashrgoubeoiu rgbesoiubfrgseoibdrgoaeurghpoaeuihrgoaeugrpeioubge gpeorhgpeoru hgpeoirhgoeuhrg ouehpog herapoirghepoaihr[");
//    res_text->setFixedWidth(400);
//    res_text->setFixedSize({400, 10});
//    VScrollPanel scroll = new VScrollPanel(res_text);

    screen->setVisible(true);
    screen->performLayout();
    nanogui::mainloop();

    nanogui::shutdown();
    return 0;
}
