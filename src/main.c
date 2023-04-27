#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define COLOR_RESET "\033[0m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_ORANGE "\033[0;33m"
#define COLOR_CYAN "\033[0;36m"
#define COLOR_BLUE "\033[0;34m"

void run_command(char *input) {

    char* ascii_art ="\n  ____                              _                           ____ ___ _____ ___ \n"
    " |  _ \\  ___    _   _  ___  _   _  | | ___ __   _____      __  / ___|_ _|_   _|__ \\ \n"
    " | | | |/ _ \\  | | | |/ _ \\| | | | | |/ / '_ \\ / _ \\ \\ /\\ / / | |  _ | |  | |   / / \n"
    " | |_| | (_) | | |_| | (_) | |_| | |   <| | | | (_) \\ V  V /  | |_| || |  | |  |_| \n"
    " |____/ \\___/   \\__, |\\___/ \\__,_| |_|\\_\\_| |_|\\___/ \\_/\\_/    \\____|___| |_|  (_) \n"
    "                |___/                                                               \n";

    // help 명령어

    if (strcmp(input, "help") == 0) {
        printf("%1000s", "");
    }

    // git help 명령어

    else if (strcmp(input, "git help") == 0) {
        printf("%1000s", ascii_art);
        printf(
            "\n"
            "두유노깃? 깃에 대해 알게 해드릴게요!\n"
            "\n"
            "%sgit %s[-v | --version]%s - 사용자의 PC에 설치된 git의 버전을 확인할 수 있는 명령어입니다. 자세히 알아보려면, 'whatis git -v' 명령어를 입력하세요.\n"
            "%sgit init%s - 로컬 컴퓨터에 새 Git 저장소를 생성하는 명령어입니다. 자세히 알아보려면, 'whatis git init' 명령어를 입력하세요.\n"
            "%sgit clone %s[원격 저장소 URL] [로컬 컴퓨터 디렉토리 (선택사항)]%s - 원격 Git 저장소를 복제하여 지정한 로컬 컴퓨터 디렉토리에 모든 파일과 버전 기록을 저장합니다. 자세히 알아보려면, 'whatis git clone' 명령어를 입력하세요.\n", COLOR_BLUE, COLOR_CYAN, COLOR_RESET, COLOR_BLUE, COLOR_RESET, COLOR_BLUE, COLOR_CYAN, COLOR_RESET
        );
    }

    // exit 명령어

    else if (strcmp(input, "exit") == 0) {
        printf("Use 'logout' instead.\n");
    }

    // logout 명령어

    else if (strcmp(input, "logout") == 0) {
        printf("Bye!\n");
        exit(0);
    }

    // 잘못된 명령어 메시지 출력

    else {
        printf("DYKG: Command Not Found\n");
    }
}

int main() {
    char input[100];

    // printf("\33c\e[3J");
    printf(
        "%sWelcome to Do you know GIT 0.1.1 Alpha%s\n"
        "\n"
        "  * Documentation: %shttps://github.com/zzunipark/Do-You-Know-GIT/main/.github/documentation.md%s\n"
        "  * Report Issues : %shttps://github.com/zzunipark/Do-You-Know-GIT/issues%s\n"
        "  * Do you know GIT 0.1.1 Alpha version is an experimental version, and not all features may work perfectly.\n"
        "  * By using this software, you are considered to have agreed to the MIT License.\n"
        "\n"
        "Type 'help' for Command List\n"
        "\n", COLOR_GREEN, COLOR_RESET, COLOR_ORANGE, COLOR_RESET, COLOR_ORANGE, COLOR_RESET
    );
    while (1) {
        printf("%sroot@doyouknowgit : %s", COLOR_GREEN, COLOR_RESET);
        fgets(input, 100, stdin);
        input[strlen(input)-1] = '\0';

        run_command(input);
    }
    return 0;
}