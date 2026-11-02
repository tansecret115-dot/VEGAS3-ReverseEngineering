/* Module: vegas30k.dll
   Function: FUN_011be440
   Address: 011be440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011be440(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return;
  }
  *(int **)(param_1 + 0x638) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x1c))
            (*(int **)(param_1 + 0x638),param_1 + 0x1f0,0x104);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),0xb,param_1 + 0x8c);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  return;
}


