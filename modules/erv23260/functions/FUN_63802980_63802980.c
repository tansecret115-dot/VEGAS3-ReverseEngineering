/* Module: erv23260.dll
   Function: FUN_63802980
   Address: 63802980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63802980(void *this,int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))(param_1);
  if (iVar1 == 0) {
    if (*param_2 != *(int *)((int)this + 8)) {
      return 8;
    }
    if ((*(int *)(param_1 + 4) == param_2[1]) && (*(int *)(param_1 + 8) == param_2[2])) {
      return 0;
    }
    iVar1 = 7;
  }
  return iVar1;
}


