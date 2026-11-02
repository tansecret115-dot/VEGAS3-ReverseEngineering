/* Module: vidcap30.exe
   Function: FUN_0045b320
   Address: 0045b320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045b320(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_c [12];
  
  builtin_strncpy(local_c,"\\/:*|\"?<>\n",10);
  iVar1 = lstrlenA(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = 0;
      do {
        if (local_c[iVar2] == param_1[iVar3]) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}


