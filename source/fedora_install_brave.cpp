#include <bits/stdc++.h>

using namespace std;
int main() {
    
    char brave1[] = "sudo dnf install -y dnf-plugins-core";

    char brave2[] = "sudo dnf -y config-manager --add-repo https://brave-browser-rpm-release.s3.brave.com/brave-browser.repo";

    char brave3[] = "sudo rpm -y --import https://brave-browser-rpm-release.s3.brave.com/brave-core.asc";

    char brave4[] = "sudo dnf install -y brave-browser";
    system(brave1);
    system(brave2);
    system(brave3);
    system(brave4);
    printf("Finish");
    return 0;
}
