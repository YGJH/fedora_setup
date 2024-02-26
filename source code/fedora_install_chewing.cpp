#include <bits/stdc++.h>

int main() {
    char chewing1[] = "dnf search fcitx5";
    char chewing2[] = "sudo dnf install -y fcitx5 fcitx5-chewing fcitx5-configtool fcitx5-gtk2 fcitx5-gtk3 fcitx5-gtk4 fcitx5-qt fcitx5-qt6";
    char chewing3[] = "imsettings-list";
    char chewing4[] = "sudo imsettings-switch fcitx5";
    system(chewing1);
    system(chewing2);
    system(chewing3);
    system(chewing4);
    printf("Finish!!");
    return 0;
}

