/* Module: wmfplug2.dll
   Function: FUN_0043e820
   Address: 0043e820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e820(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    if (*(int *)(param_1 + 0x24c) != 0) {
      uVar1 = FUN_004200a0(DAT_00489e30);
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_0043e860(param_1);
    }
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  return;
}


