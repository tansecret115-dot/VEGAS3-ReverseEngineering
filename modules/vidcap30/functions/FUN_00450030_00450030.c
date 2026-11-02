/* Module: vidcap30.exe
   Function: FUN_00450030
   Address: 00450030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00450030(LPCSTR param_1,uint param_2,LPSTR param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  lstrcpynA(param_3,param_1,param_4);
  param_1 = param_1 + param_4;
  param_3[param_4 - 1] = '\0';
  do {
    for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
    }
    pcVar1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return iVar2;
}


