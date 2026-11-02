/* Module: sftrans1.dll
   Function: FUN_0052aef0
   Address: 0052aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052aef0(int param_1)

{
  int iVar1;
  
  FUN_004dd670(*(undefined4 *)(param_1 + 0x308));
  *(undefined4 *)(param_1 + 0x308) = 0;
  iVar1 = FUN_004dd740((undefined4 *)(param_1 + 0x308),0x158,0xffffffff,0xffffffff,0x40000004,0,0,0)
  ;
  if (-1 < iVar1) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    if (0 < *(int *)(param_1 + 0x300)) {
      do {
        FUN_00529890(param_1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x300));
    }
    FUN_0052ad60(param_1);
  }
  return 0;
}


