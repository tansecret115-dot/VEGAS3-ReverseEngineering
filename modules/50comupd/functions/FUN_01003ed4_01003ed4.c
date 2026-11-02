/* Module: 50comupd.exe
   Function: FUN_01003ed4
   Address: 01003ed4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01003ed4(LPSTR param_1,int param_2,LPCSTR param_3,LPCSTR param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = lstrlenA(param_3);
  iVar2 = lstrlenA(param_4);
  if (iVar1 + 1 + iVar2 < param_2) {
    lstrcpyA(param_1,param_3);
    iVar1 = lstrlenA(param_1);
    if (param_1[iVar1 + -1] != '\\') {
      iVar1 = lstrlenA(param_1);
      if (param_1[iVar1 + -1] != '/') {
        iVar1 = lstrlenA(param_1);
        param_1[iVar1] = '\\';
        iVar1 = lstrlenA(param_1);
        param_1[iVar1 + 1] = '\0';
      }
    }
    lstrcatA(param_1,param_4);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


