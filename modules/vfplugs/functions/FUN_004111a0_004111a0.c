/* Module: vfplugs.dll
   Function: FUN_004111a0
   Address: 004111a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004111a0(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 200) != param_1) || (*(int *)((int)this + 0xc4) != param_2)) {
    *(int *)((int)this + 200) = param_1;
    *(int *)((int)this + 0xc4) = param_2;
    *(int *)((int)this + 100) = *(int *)((int)this + 100) + 1;
    FUN_00410ec0((int)this + -4);
  }
  return 0;
}


