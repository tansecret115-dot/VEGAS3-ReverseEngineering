/* Module: sfppack1.dll
   Function: FUN_5ce0221c
   Address: 5ce0221c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ce0221c(void *this,int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)FUN_5cdb2130(0xe8);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = FUN_5ce02675(pvVar1,0,(int)this,&local_8,L"Input");
    }
    *(void **)((int)this + 0x8c) = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_5ce022ae;
  }
  if (*(int *)((int)this + 0x90) == 0) {
    pvVar1 = (void *)FUN_5cdb2130(0xb0);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = FUN_5ce02870(pvVar1,0,(int)this,&local_8,L"Output");
    }
    *(void **)((int)this + 0x90) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
LAB_5ce022ae:
  if (param_1 == 0) {
    uVar2 = *(undefined4 *)((int)this + 0x8c);
  }
  else if (param_1 == 1) {
    uVar2 = *(undefined4 *)((int)this + 0x90);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


