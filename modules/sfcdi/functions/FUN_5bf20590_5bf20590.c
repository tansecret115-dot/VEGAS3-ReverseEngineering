/* Module: sfcdi.dll
   Function: FUN_5bf20590
   Address: 5bf20590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf20590(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_5bf3d430(*(int **)(param_1 + 0x18),1,0);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
    FUN_5bf204c0((undefined4 *)(param_1 + 0x1c),param_1);
    *(undefined4 *)(param_1 + 0x1d98) = 0;
    *(undefined4 *)(param_1 + 0x1d9c) = 0;
    *(undefined4 *)(param_1 + 0x1da0) = 0;
    *(undefined1 *)(param_1 + 0x1da4) = 0;
  }
  return;
}


