/* Module: sfmarket2.dll
   Function: FUN_00457fd0
   Address: 00457fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457fd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16ad) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16ac);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined2 *)(param_1 + 0x16ab) = 0;
    *(undefined4 *)(param_1 + 0x16ad) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16ad)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16ab) = (ushort)*(byte *)(param_1 + 0x16ac);
    *(int *)(param_1 + 0x16ad) = *(int *)(param_1 + 0x16ad) + -8;
  }
  return;
}


