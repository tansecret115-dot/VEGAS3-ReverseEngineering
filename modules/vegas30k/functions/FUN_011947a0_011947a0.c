/* Module: vegas30k.dll
   Function: FUN_011947a0
   Address: 011947a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011947a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x718) = param_2;
  *(undefined4 *)(param_1 + 0x71c) = param_3;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 0x720) = uVar1;
  *(undefined4 *)(param_1 + 0x724) = 0;
  return 0;
}


