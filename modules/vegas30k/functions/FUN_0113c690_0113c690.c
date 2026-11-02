/* Module: vegas30k.dll
   Function: FUN_0113c690
   Address: 0113c690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0113c690(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_01040210(*(int *)(param_1 + 0x170));
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  FUN_0113b420(param_2,param_3);
  return;
}


