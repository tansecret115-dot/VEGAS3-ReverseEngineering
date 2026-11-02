/* Module: vegas30k.dll
   Function: FUN_011baa00
   Address: 011baa00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011baa00(int param_1,LPSTR param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      return 1;
    }
    iVar1 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0xc) + 4));
    if (iVar1 + 1U < param_3) {
      iVar1 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0xc) + 4));
      param_3 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0x10) + 4));
    if (iVar1 + 1U < param_3) {
      iVar1 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0x10) + 4));
      param_3 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  lstrcpynA(param_2,(LPCSTR)(iVar1 + 4),param_3);
  param_2[param_3 - 1] = '\0';
  return 0;
}


