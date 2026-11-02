/* Module: vidpcore.dll
   Function: FUN_5df059a0
   Address: 5df059a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df059a0(int param_1)

{
  int iVar1;
  
  FUN_5ded6070(*(undefined4 *)(param_1 + 0x308));
  *(undefined4 *)(param_1 + 0x308) = 0;
  iVar1 = FUN_5ded6140((undefined4 *)(param_1 + 0x308),0x158,0xffffffff,0xffffffff,0x40000004,0,0,0)
  ;
  if (-1 < iVar1) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    if (0 < *(int *)(param_1 + 0x300)) {
      do {
        FUN_5df04340(param_1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x300));
    }
    FUN_5df05810(param_1);
  }
  return 0;
}


