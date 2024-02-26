#include <bits/stdc++.h>

int main() {
    char vscode1[] = "sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc";
    char vscode2[] = "sudo sh -c 'echo -e \"[code]\\nname=Visual Studio Code\\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\\nenabled=1\\ngpgcheck=1\\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc\" > /etc/yum.repos.d/vscode.repo'";
    char vscode3[] = "dnf check-update";
    char vscode4[] = "sudo dnf install -y code";
    system(vscode1);
    system(vscode2);
    system(vscode3);
    system(vscode4);
    printf("Finish!!");
    return 0;
    
}