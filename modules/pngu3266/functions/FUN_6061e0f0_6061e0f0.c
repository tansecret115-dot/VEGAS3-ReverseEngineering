/* Module: pngu3266.dll
   Function: FUN_6061e0f0
   Address: 6061e0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061e0f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  return;
}


