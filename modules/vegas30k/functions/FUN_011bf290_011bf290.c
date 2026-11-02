/* Module: vegas30k.dll
   Function: FUN_011bf290
   Address: 011bf290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011bf290(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 1;
  }
  *(int **)(param_1 + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(*(int **)(param_1 + 0x18),param_1 + 0xf0,0x20);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x80))(*(int **)(param_1 + 0x18),0xb,param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return 0;
}


