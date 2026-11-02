/* Module: sfcdi.dll
   Function: SfOpenFile_GetPathName
   Address: 5bf1cb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfOpenFile_GetPathName(char const *,unsigned int,char *,unsigned int) */

uint SfOpenFile_GetPathName(char *param_1,uint param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  LPSTR pCVar2;
  LPCSTR lpsz;
  uint uVar3;
  
                    /* 0x1cb70  93  ?SfOpenFile_GetPathName@@YGIPBDIPADI@Z */
  if (param_3 != (char *)0x0) {
    if (param_2 - 1 <= param_4) {
      param_4 = param_2 - 1;
    }
    pCVar2 = FUN_5bf1cb10(param_3,param_1,param_4);
    *pCVar2 = '\0';
  }
  lpsz = (LPCSTR)FUN_5bf1cb40((int)param_1,param_2);
  uVar3 = 0;
  do {
    for (; *lpsz != '\0'; lpsz = CharNextA(lpsz)) {
    }
    pcVar1 = lpsz + 1;
    uVar3 = uVar3 + 1;
    lpsz = lpsz + 1;
  } while (*pcVar1 != '\0');
  return uVar3;
}


