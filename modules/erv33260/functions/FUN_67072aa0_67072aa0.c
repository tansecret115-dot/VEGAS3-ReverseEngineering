/* Module: erv33260.dll
   Function: FUN_67072aa0
   Address: 67072aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67072aa0(void *this,int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))(param_2);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      return 10;
    }
    *param_3 = *(uint *)((int)this + 8);
    param_3[1] = *(uint *)(param_2 + 4);
    param_3[2] = *(uint *)(param_2 + 8);
    FUN_67072210(param_3);
  }
  return iVar1;
}


