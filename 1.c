void count() {
 printf("Enter lines of text here: .../n");
 int c,nl, nc, nt, nbackslash = 0;
 while ((c = fgetc(stdin)) != EOF) {
 if (c == '\n') { ++nl;
 } else if (c == '\t') { ++nt;
 } else if (c == '\\') { ++nbackslash;
 } else if (isspace(c)) { ++nc; }
 fprintf("lines: %d\n", nl);
 fprintf("tabs: %s\n", nt);
 fprintf("backslashes: %u\n", nbackslash);
 fprintf("alphanumeric: %f\n", nc);
}