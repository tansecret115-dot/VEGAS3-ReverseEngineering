/* Module: vegas30.exe
   Function: FUN_0055dfd0
   Address: 0055dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055dfd0(uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  uchar *lpString2;
  uchar local_104 [260];
  
  iVar2 = 0;
  _mbscpy(local_104,param_1);
  lpString2 = local_104;
  if (local_104[0] == '\0') {
    return 0;
  }
  do {
    if (lpString2[1] == ':') {
      lstrcpynA((LPSTR)param_1,(LPCSTR)lpString2,3);
      param_1[2] = '\0';
      _SfAddSlashToPathName_8(param_1,4);
      lpString2 = lpString2 + 1;
      param_1 = param_1 + 3;
      iVar2 = iVar2 + 1;
    }
    puVar1 = lpString2 + 1;
    lpString2 = lpString2 + 1;
  } while (*puVar1 != '\0');
  return iVar2;
}


