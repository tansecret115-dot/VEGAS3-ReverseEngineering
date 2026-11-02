/* Module: enlv3260.dll
   Function: FUN_661d3630
   Address: 661d3630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d3630(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_661d34f0(this,param_2);
    return;
  }
  iVar1 = (**(code **)(*(int *)this + 0x1c))(*(undefined4 *)(param_1 + 4),param_1);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  *(int *)((int)this + 4) = iVar1;
  *(int *)(param_1 + 4) = iVar1;
  return;
}


