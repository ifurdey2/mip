//
//  main.c
//  MIP GIT
//
//  Created by Ilia Furdey on 12/4/19.
//  Copyright © 2019 Ilia Furdey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
        FILE *f2;
    char str[128], stu[128];
        int i = 0, len = 0, j =0, len2= 0;
        fp = fopen("text.txt", "r");
        f2 = fopen("cisla.txt", "a");
    if (fp ==NULL) {
    printf("Cannot open file.\n");
    exit (1);
    }
    return 0;
}
