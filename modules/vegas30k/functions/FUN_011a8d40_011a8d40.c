/* Module: vegas30k.dll
   Function: FUN_011a8d40
   Address: 011a8d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_011a8d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x7fc);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0xb4))(piVar1,param_2,param_3,param_4,param_5,param_6);
  return;
}


