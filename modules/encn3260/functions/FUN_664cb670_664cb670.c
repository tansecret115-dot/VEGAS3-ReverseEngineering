/* Module: encn3260.dll
   Function: FUN_664cb670
   Address: 664cb670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cb670(void *this,int *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this != (void *)0x0) && (param_1 != (int *)0x0)) {
    iVar1 = FUN_664c3eb0(*(void **)((int)this + 0x14),(uint)param_1,&local_8);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x1c))();
      FUN_664c3e40(*(void **)((int)this + 0x14),(uint)param_1,(int)param_1);
      *(short *)((int)this + 0x18) = *(short *)((int)this + 0x18) + 1;
      return 0;
    }
  }
  return 0x80004005;
}


