/* Module: vegas30k.dll
   Function: FUN_011d7600
   Address: 011d7600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011d7600(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}


