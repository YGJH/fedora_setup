#include <bits/stdc++.h>
using namespace std;
int main() {
    char edge1[] = "sudo dnf upgrade --refresh\n";
    char edge2[] = "sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc\n";
    char edge3[] = "sudo dnf config-manager --add-repo https://packages.microsoft.com/yumrepos/edge\n";
    char edge4[] = "Adding repo from: https://packages.microsoft.com/yumrepos/edge\n";
    char edge5[] = "sudo dnf install -y microsoft-edge-stable\n";
    system(edge1);
    system(edge2);
    system(edge3);
    system(edge4);
    system(edge5);
    printf("Finish");
    return 0;
}
