/* Module: g2plug.dll
   Function: FUN_5f8354d0
   Address: 5f8354d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8354d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    if (*(int *)(param_1 + 0x24c) != 0) {
      uVar1 = FUN_5f8178e0(DAT_5f877520);
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_5f835510(param_1);
    }
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  return;
}


