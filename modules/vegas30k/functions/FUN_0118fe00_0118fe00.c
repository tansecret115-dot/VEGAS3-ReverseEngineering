/* Module: vegas30k.dll
   Function: FUN_0118fe00
   Address: 0118fe00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0118fe00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(int *)(param_1 + 0x3c) == 0;
}


