/* Module: sfppack1.dll
   Function: FUN_5cdff8c0
   Address: 5cdff8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cdff8c0(void *this,int param_1)

{
  void *pvVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)FUN_5cdb2130(0xe0);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = FUN_5cdffdd9(pvVar1,0,(int)this,&local_8,L"XForm In");
    }
    *(void **)((int)this + 0x8c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    pvVar1 = (void *)FUN_5cdb2130(0xa8);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = FUN_5ce000a2(pvVar1,0,(int)this,&local_8,L"XForm Out");
    }
    *(void **)((int)this + 0x90) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
  if (param_1 == 0) {
    return *(undefined4 *)((int)this + 0x8c);
  }
  if (param_1 != 1) {
    return 0;
  }
  return *(undefined4 *)((int)this + 0x90);
}


