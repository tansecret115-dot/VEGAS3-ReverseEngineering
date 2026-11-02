/* Module: vegas30k.dll
   Function: FUN_0113bc70
   Address: 0113bc70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0113bc70(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x160);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x15c) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return;
}


