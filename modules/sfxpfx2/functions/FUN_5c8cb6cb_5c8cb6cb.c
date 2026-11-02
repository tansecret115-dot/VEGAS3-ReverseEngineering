/* Module: sfxpfx2.dll
   Function: FUN_5c8cb6cb
   Address: 5c8cb6cb
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8cb6cb(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)FUN_5c892940(0xe8);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5c8cbb24(pvVar1,0,(int)this,&local_8,L"Input");
    }
    *(undefined4 **)((int)this + 0x8c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_5c8cb75d;
  }
  if (*(int *)((int)this + 0x90) == 0) {
    pvVar1 = (void *)FUN_5c892940(0xb0);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5c8cbd1f(pvVar1,0,(int)this,&local_8,L"Output");
    }
    *(undefined4 **)((int)this + 0x90) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
LAB_5c8cb75d:
  if (param_1 == 0) {
    uVar3 = *(undefined4 *)((int)this + 0x8c);
  }
  else if (param_1 == 1) {
    uVar3 = *(undefined4 *)((int)this + 0x90);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


