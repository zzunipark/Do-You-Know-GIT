#include <stdio.h>
#include <string.h>

void git_help(char *input) {

    char* ascii_art ="\n  ____                              _                           ____ ___ _____ ___ \n"
    " |  _ \\  ___    _   _  ___  _   _  | | ___ __   _____      __  / ___|_ _|_   _|__ \\ \n"
    " | | | |/ _ \\  | | | |/ _ \\| | | | | |/ / '_ \\ / _ \\ \\ /\\ / / | |  _ | |  | |   / / \n"
    " | |_| | (_) | | |_| | (_) | |_| | |   <| | | | (_) \\ V  V /  | |_| || |  | |  |_| \n"
    " |____/ \\___/   \\__, |\\___/ \\__,_| |_|\\_\\_| |_|\\___/ \\_/\\_/    \\____|___| |_|  (_) \n"
    "                |___/                                                               \n";

    if (strcmp(input, "git help") == 0) {
        printf("%1000s", ascii_art);
        printf("\n두유노깃? 깃에 대해 알게 해드릴게요!\n\ngit [-v | --version] - 사용자의 PC에 설치된 git의 버전을 확인할 수 있는 명령어입니다. 더 자세히 알아보고 싶으시다면, whatis -v 명령어를 입력해주세요.\ngit [\n\n");
    } else {
        printf("잘못된 명령어입니다.\n");
    }
}

int main() {
    char input[100];
    while (1) {
        printf("두유노깃? | root@doyouknowgit : ");
        fgets(input, 100, stdin);
        input[strlen(input)-1] = '\0';

        git_help(input);
    }
    return 0;
}