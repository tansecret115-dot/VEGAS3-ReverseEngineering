/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60604069
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCheckedListbox::OnEvent(class CPNEvent &) */

int __thiscall CPNCheckedListbox::OnEvent(CPNCheckedListbox *this,CPNEvent *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CPNEvent local_48 [24];
  undefined4 local_30;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
                    /* 0x14069  1602  ?OnEvent@CPNCheckedListbox@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0x24) == 0x2b) {
    OnDrawItem(this,*(uint *)(param_1 + 0x18),*(tagDRAWITEMSTRUCT **)(param_1 + 0x20));
    iVar3 = 1;
  }
  else {
    if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0xc) == 0x65)) {
      uVar1 = *(ushort *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(int *)(param_1 + 0x20) >> 0x10);
      uVar2 = SendMessageA(*(HWND *)(this + 0xc),0x1a9,0,
                           (*(int *)(param_1 + 0x20) >> 0x10) << 0x10 | (uint)uVar1);
      if ((short)(uVar2 >> 0x10) == 0) {
        uVar2 = uVar2 & 0xffff;
        iVar3 = RcCheckFromId(this,uVar2,(CPNxRect *)&local_1c);
        if ((((iVar3 != 0) && (local_1c <= (short)uVar1)) && ((short)uVar1 <= local_14)) &&
           ((local_18 <= local_8 && (local_8 <= local_10)))) {
          iVar3 = *(int *)this;
          iVar4 = (**(code **)(iVar3 + 0x170))(uVar2);
          (**(code **)(iVar3 + 0x16c))(uVar2,iVar4 == 0);
          (**(code **)(*(int *)this + 0x13c))(uVar2);
          (**(code **)(*(int *)this + 0x78))(&local_1c,1);
          CPNEvent::CPNEvent(local_48,0x80000000,1,(CPNRouter *)this,0,0,0,0);
          local_30 = (**(code **)(*(int *)this + 0x124))();
          (**(code **)(*(int *)this + 4))(local_48);
          CPNEvent::~CPNEvent(local_48);
        }
      }
    }
    if (((*(int *)(param_1 + 8) == 4) && (*(int *)(param_1 + 0xc) == 0x82)) &&
       (*(int *)(param_1 + 0x1c) == 0x20)) {
      uVar2 = (**(code **)(*(int *)this + 0x138))();
      if (uVar2 != 0xffffffff) {
        iVar3 = RcCheckFromId(this,uVar2,(CPNxRect *)&local_1c);
        if (iVar3 != 0) {
          iVar3 = *(int *)this;
          iVar4 = (**(code **)(iVar3 + 0x170))(uVar2);
          (**(code **)(iVar3 + 0x16c))(uVar2,iVar4 == 0);
          (**(code **)(*(int *)this + 0x78))(&local_1c,1);
          CPNEvent::CPNEvent(local_48,0x80000000,1,(CPNRouter *)this,0,0,0,0);
          (**(code **)(*(int *)this + 4))(local_48);
          CPNEvent::~CPNEvent(local_48);
        }
      }
    }
    iVar3 = CPNWindow::OnEvent((CPNWindow *)this,param_1);
  }
  return iVar3;
}


