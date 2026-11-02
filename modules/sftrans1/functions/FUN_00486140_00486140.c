/* Module: sftrans1.dll
   Function: FUN_00486140
   Address: 00486140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar1 = **(int **)(param_1 + 0x28);
    if (param_2 < iVar1) {
      iVar2 = *(int *)(param_1 + 0x2c);
      if (param_2 == iVar2) {
        return 1;
      }
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        SetWindowPos(*(HWND *)(*(int *)((*(int **)(param_1 + 0x28))[2] + iVar2 * 4) + 4),(HWND)0x0,0
                     ,0,0,0,0x87);
      }
      SetWindowPos(*(HWND *)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + param_2 * 4) + 4),
                   (HWND)0x0,0,0,0,0,0x47);
      *(int *)(param_1 + 0x2c) = param_2;
      return 1;
    }
  }
  return 0;
}


