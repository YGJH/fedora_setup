#include <bits/stdc++.h>

int main(){
    char discord1[] = "sudo dnf install -y https://download1.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-$(rpm -E %fedora).noarch.rpm";
    char disocrd2[] = "sudo dnf update";
    char discord3[] = "sudo dnf install -y discord";
    system(discord1);
    system(disocrd2);
    system(discord3);
    printf("Finish!!");
    return 0;
}