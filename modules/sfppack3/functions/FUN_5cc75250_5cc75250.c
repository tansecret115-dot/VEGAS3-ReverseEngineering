/* Module: sfppack3.dll
   Function: FUN_5cc75250
   Address: 5cc75250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc75250(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)FUN_5cc31fc0(0xe0);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5cc75769(pvVar1,0,(int)this,&local_8,L"XForm In");
    }
    *(undefined4 **)((int)this + 0x8c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pvVar1 = (void *)FUN_5cc31fc0(0xa8);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5cc75a32(pvVar1,0,(int)this,&local_8,L"XForm Out");
    }
    *(undefined4 **)((int)this + 0x90) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
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


