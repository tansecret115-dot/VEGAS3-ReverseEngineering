/* Module: sdpp3260.dll
   Function: FUN_100028d0
   Address: 100028d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100028d0(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10002770(this,param_2);
    return;
  }
  iVar1 = (**(code **)(*(int *)this + 0x1c))(param_1,*param_1);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = iVar1;
    *param_1 = iVar1;
    return;
  }
  *(int *)((int)this + 8) = iVar1;
  *param_1 = iVar1;
  return;
}


