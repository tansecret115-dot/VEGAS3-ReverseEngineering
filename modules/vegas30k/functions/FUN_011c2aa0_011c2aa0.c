/* Module: vegas30k.dll
   Function: FUN_011c2aa0
   Address: 011c2aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_011c2aa0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(int **)(param_1 + 0x20) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  FUN_011c2b80();
  if ((*(int *)(param_1 + 8) == 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return *(int *)(param_1 + 8) == 0;
}


