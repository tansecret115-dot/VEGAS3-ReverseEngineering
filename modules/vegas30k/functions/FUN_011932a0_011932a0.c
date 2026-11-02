/* Module: vegas30k.dll
   Function: FUN_011932a0
   Address: 011932a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011932a0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = (int *)param_1[400]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    if ((int *)*piVar1 != param_1) {
      (**(code **)(*(int *)*piVar1 + 0x17c))(param_2);
    }
  }
  return;
}


