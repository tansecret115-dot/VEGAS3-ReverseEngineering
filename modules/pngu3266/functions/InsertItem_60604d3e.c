/* Module: pngu3266.dll
   Function: InsertItem
   Address: 60604d3e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::InsertItem(unsigned long,unsigned
   long,char const *,int) */

ulong __thiscall
CPNTreeControl::InsertItem
          (CPNTreeControl *this,ulong param_1,ulong param_2,char *param_3,int param_4)

{
  CPNTreeControl *this_00;
  int iVar1;
  ulong uVar2;
  TreeViewItem *pTVar3;
  size_t sVar4;
  char *_Dest;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_44;
  ulong local_40;
  undefined4 local_3c;
  char *local_2c;
  int local_24;
  int local_20;
  CPNTreeControl *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
                    /* 0x14d3e  1477  ?InsertItem@CPNTreeControl@@UAEKKKPBDH@Z */
  if (*(void **)(this + 0xc0) == (void *)0x0) {
LAB_60604dc6:
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    local_c = 0;
    local_14 = this;
    if (param_1 == 0xffffffff) {
      param_1 = 0xffff0002;
    }
    else if (param_1 == 0) {
      param_1 = 0xffff0003;
    }
    else {
      iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
      if ((iVar1 == 0) || (local_8 == 0)) goto LAB_60604dc6;
      param_1 = **(ulong **)(local_8 + 0x10);
    }
    if (param_2 == 0) {
      local_10 = 0xffff0000;
    }
    else {
      iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_2,&local_c);
      if ((iVar1 == 0) || (local_c == 0)) goto LAB_60604dc6;
      local_10 = **(undefined4 **)(local_c + 0x10);
    }
    pTVar3 = operator_new(0x18);
    sVar4 = strlen(param_3);
    _Dest = operator_new(sVar4 + 1);
    *(char **)(pTVar3 + 4) = _Dest;
    *(undefined4 *)(pTVar3 + 8) = 0;
    *(undefined4 *)(pTVar3 + 0xc) = 0;
    strcpy(_Dest,param_3);
    puVar5 = operator_new(4);
    this_00 = local_14;
    local_44 = local_10;
    local_40 = param_1;
    local_3c = 1;
    local_2c = param_3;
    if (param_4 != -1) {
      local_3c = 0x23;
      local_20 = param_4;
      local_24 = param_4;
    }
    uVar6 = SendMessageA(*(HWND *)(local_14 + 0xc),0x1100,0,(LPARAM)&local_44);
    *puVar5 = uVar6;
    *(undefined4 *)(pTVar3 + 0x14) = 0;
    *(uint **)(pTVar3 + 0x10) = puVar5;
    XPNTreeControl::AddItem((XPNTreeControl *)this_00,pTVar3,param_2);
    puVar7 = FUN_60619ba0(*(void **)(this_00 + 200),*puVar5);
    *puVar7 = pTVar3;
    uVar2 = *(ulong *)pTVar3;
  }
  return uVar2;
}


