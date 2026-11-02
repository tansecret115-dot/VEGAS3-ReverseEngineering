/* Module: vidcap30.exe
   Function: FUN_00581590
   Address: 00581590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581590(int param_1,int *param_2)

{
  int *piVar1;
  
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x98) = param_2;
  return;
}


