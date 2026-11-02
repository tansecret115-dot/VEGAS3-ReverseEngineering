/* Module: pngu3266.dll
   Function: InsertTab
   Address: 6060ab88
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::InsertTab(unsigned long,unsigned long,char const
   *,int) */

void __thiscall
XPNTabControl::InsertTab(XPNTabControl *this,ulong param_1,ulong param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
                    /* 0x1ab88  1490  ?InsertTab@XPNTabControl@@UAEXKKPBDH@Z */
  if (*(int *)(this + 0xd0) == 0) {
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_6061a0c0(puVar2);
    }
    *(undefined4 *)(this + 0xd0) = uVar3;
  }
  puVar2 = operator_new(0x24);
  pvVar4 = operator_new(0xc);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_60618d40(pvVar4,param_3);
  }
  *puVar2 = puVar5;
  puVar2[8] = param_4;
  puVar2[1] = param_2;
  pvVar4 = *(void **)(this + 0xd0);
  *(ulong *)(this + 0xc0) = param_2;
  if (pvVar4 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)((int)pvVar4 + 0x10);
  }
  if (param_1 < uVar7) {
    if (param_1 == 0) {
      FUN_6061a1f0(pvVar4,puVar2);
    }
    else {
      puVar5 = FUN_6061a410(pvVar4,param_1 - 1);
      (**(code **)(**(int **)(this + 0xd0) + 0x14))(puVar5,puVar2);
    }
  }
  else {
    FUN_6061a230(pvVar4,puVar2);
  }
  iVar1 = *(int *)(this + 0xd0);
  *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar1 + 0x10);
  }
  if (iVar6 == 0) {
    *(undefined4 *)(this + 0xc4) = 0;
  }
  else {
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4);
  }
  SetDimensions(this);
  return;
}


