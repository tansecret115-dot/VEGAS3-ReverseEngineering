/* Module: vfplugs.dll
   Function: FUN_00470d30
   Address: 00470d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00470d30(void *this,int param_1,int *param_2)

{
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) && (param_2[1] != 0)) {
    *(int *)((int)this + 0x54) = param_1;
    *(int *)((int)this + 0x60) = *param_2;
    *(int *)((int)this + 100) = param_2[1];
    FUN_00470d90((int)this);
    return 1;
  }
  return 0;
}


