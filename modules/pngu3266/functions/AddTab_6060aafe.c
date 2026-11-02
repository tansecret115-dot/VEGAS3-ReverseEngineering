/* Module: pngu3266.dll
   Function: AddTab
   Address: 6060aafe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::AddTab(unsigned long,char const *,int) */

void __thiscall XPNTabControl::AddTab(XPNTabControl *this,ulong param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  
                    /* 0x1aafe  780  ?AddTab@XPNTabControl@@UAEXKPBDH@Z */
  puVar2 = operator_new(0x24);
  this_00 = operator_new(0xc);
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_60618d40(this_00,param_2);
  }
  *puVar2 = puVar3;
  puVar2[1] = param_1;
  puVar2[8] = param_3;
  *(ulong *)(this + 0xc0) = param_1;
  FUN_6061a1f0(*(void **)(this + 0xd0),puVar2);
  iVar1 = *(int *)(this + 0xd0);
  *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x10);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(this + 0xc4) = 0;
  }
  else {
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4);
  }
  SetDimensions(this);
  return;
}


