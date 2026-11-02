/* Module: sfcdi.dll
   Function: FUN_5bf20cc0
   Address: 5bf20cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf20cc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_5bf2b110((int *)(param_1 + 0xc),4,-1,-1,2);
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0x8007000e;
  }
  *(undefined4 *)(param_1 + 0x1da4) = *param_2;
  *(undefined4 *)(param_1 + 0x1da8) = param_2[1];
  *(undefined4 *)(param_1 + 0x1dac) = param_2[2];
  *(undefined4 *)(param_1 + 0x1db0) = param_2[3];
  return uVar1;
}


