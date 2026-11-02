/* Module: wavplug.dll
   Function: FUN_5f388100
   Address: 5f388100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f388100(void *param_1,undefined4 param_2)

{
  void *this;
  HGLOBAL pvVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  this = param_1;
  if (*(int *)(*(int *)((int)param_1 + 0xac) + 0x214) != -1) {
    (**(code **)(*(int *)((int)param_1 + 0xa8) + 0x28))((int)param_1 + 0xa8);
  }
  iVar2 = *(int *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xbc) = param_2;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar2 + 0x238);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar2 + 0x23c);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(iVar2 + 0x238);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(iVar2 + 0x23c);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar2 + 0x248);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar2 + 0x24c);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar2 + 0x240);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar2 + 0x244);
  FUN_5f387710(iVar2,&param_1);
  uVar4 = ftol();
  *(undefined8 *)((int)this + 200) = uVar4;
  *(undefined4 *)((int)this + 0xd0) = 0;
  if (*(LPCVOID *)((int)this + 0xd4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0xd4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0xd4));
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  FUN_5f388520((int)this);
  (**(code **)(*(int *)((int)this + 0xa8) + 0x34))((int)this + 0xa8,0,0);
  iVar2 = FUN_5f388420((int)this);
  if (iVar2 != 0) {
    uVar3 = FUN_5f3953f0(this,*(uint *)((int)this + 0xd0),*(int *)((int)this + 0xd8));
    return uVar3;
  }
  return 0;
}


