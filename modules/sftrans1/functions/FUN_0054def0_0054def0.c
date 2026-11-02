/* Module: sftrans1.dll
   Function: FUN_0054def0
   Address: 0054def0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054def0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  if (0 < iVar1) {
    iVar3 = param_2;
    if (param_3 < param_2) {
      iVar3 = param_3;
      param_3 = param_2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined1 *)
         (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8)
                   + -4 + iVar2 * 4) + 0x10) = 0;
      } while (iVar2 < iVar3);
    }
    while (iVar3 <= param_3) {
      iVar3 = iVar3 + 1;
      *(undefined1 *)
       (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
                 -4 + iVar3 * 4) + 0x10) = 1;
    }
    param_3 = param_3 + 1;
    while (param_3 < iVar1) {
      param_3 = param_3 + 1;
      *(undefined1 *)
       (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
                 -4 + param_3 * 4) + 0x10) = 0;
    }
  }
  return;
}


