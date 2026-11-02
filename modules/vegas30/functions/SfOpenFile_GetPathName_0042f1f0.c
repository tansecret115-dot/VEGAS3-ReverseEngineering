/* Module: vegas30.exe
   Function: SfOpenFile_GetPathName
   Address: 0042f1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfOpenFile_GetPathName(char const *,unsigned int,char *,unsigned int) */

uint SfOpenFile_GetPathName(char *param_1,uint param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  LPCSTR lpsz;
  uint uVar2;
  
                    /* 0x2f1f0  35  ?SfOpenFile_GetPathName@@YGIPBDIPADI@Z */
  uVar2 = 0;
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  lstrcpynA(param_3,param_1,param_4);
  lpsz = param_1 + param_4;
  param_3[param_4 - 1] = '\0';
  do {
    for (; *lpsz != '\0'; lpsz = CharNextA(lpsz)) {
    }
    pcVar1 = lpsz + 1;
    uVar2 = uVar2 + 1;
    lpsz = lpsz + 1;
  } while (*pcVar1 != '\0');
  return uVar2;
}


