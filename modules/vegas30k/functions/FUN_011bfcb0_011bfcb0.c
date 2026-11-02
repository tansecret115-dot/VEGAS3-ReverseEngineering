/* Module: vegas30k.dll
   Function: FUN_011bfcb0
   Address: 011bfcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bfcb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x120) = param_2;
  *(undefined4 *)(param_1 + 0x124) = param_3;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return 0;
}


