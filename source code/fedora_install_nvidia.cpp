#include <bits/stdc++.h>
using namespace std;

int main() {
    char nvidia1[] = "sudo dnf update --refresh";
    char nvidia2[] = "sudo dnf install kernel-devel kernel-headers gcc make dkms acpid libglvnd-glx libglvnd-opengl libglvnd-devel pkgconfig";
    char nvidia3[] = "sudo dnf install https://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-$(rpm -E %fedora).noarch.rpm";
    char nvidia4[] = "sudo dnf install https://download1.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-$(rpm -E %fedora).noarch.rpm";
    char nvidia5[] = "sudo dnf makecache";
    char nvidia6[] = "sudo dnf install akmod-nvidia xorg-x11-drv-nvidia-cuda";
    system(nvidia1);
    system(nvidia2);
    system(nvidia3);
    system(nvidia4);
    system(nvidia5);
    system(nvidia6);
    printf("Finish!!");
    return 0;
}