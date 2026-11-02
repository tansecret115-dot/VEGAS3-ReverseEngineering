/* Module: gifplug.dll
   Function: FUN_5f6c2f90
   Address: 5f6c2f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f6c2f90(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  *param_1 = iVar1;
  param_1[1] = iVar1 >> 0x1f;
  return 0;
}


