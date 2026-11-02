/* Module: vegas30k.dll
   Function: FUN_011c0690
   Address: 011c0690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011c0690(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xc) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 0;
}


