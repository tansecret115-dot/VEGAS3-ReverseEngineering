/* Module: pngu3266.dll
   Function: OnMoveSizeMouseMove
   Address: 605f9898
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNWindow::OnMoveSizeMouseMove(unsigned long,unsigned int,long) */

int __thiscall
CPNWindow::OnMoveSizeMouseMove(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  XPNDC *this_00;
  int iVar1;
  int iVar2;
  CPNBrush local_88 [56];
  CPNColor local_50 [36];
  long local_2c;
  CPNPen *local_24;
  CPNBrush *local_1c;
  XPNDC *local_18;
  undefined4 local_14;
  XPNDC *local_10;
  int local_c;
  int local_8;
  
                    /* 0x9898  1654  ?OnMoveSizeMouseMove@CPNWindow@@IAEHKIJ@Z */
  if (*(int *)(this + 0x84) == 0) {
    iVar1 = 0;
  }
  else {
    local_c = (int)(short)param_3;
    local_8 = (int)(short)((uint)param_3 >> 0x10);
    (**(code **)(*(int *)this + 0x60))(&local_c);
    iVar2 = local_c - *(int *)(this + 0x88);
    iVar1 = local_8 - *(int *)(this + 0x8c);
    if (*(int *)(this + 0xa0) == 0) {
      *(int *)(this + 0x90) = *(int *)(this + 0x90) + iVar2;
      *(int *)(this + 0x94) = *(int *)(this + 0x94) + iVar1;
      *(int *)(this + 0x98) = *(int *)(this + 0x98) + iVar2;
      *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + iVar1;
      local_14 = *(undefined4 *)(this + 0x90);
      local_10 = *(XPNDC **)(this + 0x94);
      (**(code **)(*(int *)this + 0x44))(&local_14);
    }
    else {
      local_10 = *(XPNDC **)(this + 0xa4);
      if (local_10 != (XPNDC *)0x0) {
        local_24 = XPNDC::SetPen(local_10,*(CPNPen **)(this + 0xa8));
      }
      local_18 = *(XPNDC **)(this + 0xa4);
      if (local_18 != (XPNDC *)0x0) {
        local_2c = XPNDC::SetFgMixMode(local_18,0xd);
      }
      CPNColor::CPNColor(local_50);
      CPNBrush::CPNBrush(local_88,local_50,1);
      this_00 = *(XPNDC **)(this + 0xa4);
      if (this_00 != (XPNDC *)0x0) {
        local_1c = XPNDC::SetBrush(this_00,local_88);
      }
      if (*(int *)(this + 0xb0) != 0) {
        (**(code **)(**(int **)(this + 0xa4) + 0x24))(this + 0x90);
        *(undefined4 *)(this + 0xb0) = 0;
      }
      *(int *)(this + 0x90) = *(int *)(this + 0x90) + iVar2;
      *(int *)(this + 0x94) = *(int *)(this + 0x94) + iVar1;
      *(int *)(this + 0x98) = *(int *)(this + 0x98) + iVar2;
      *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + iVar1;
      (**(code **)(**(int **)(this + 0xa4) + 0x24))(this + 0x90);
      *(undefined4 *)(this + 0xb0) = 1;
      if (this_00 != (XPNDC *)0x0) {
        XPNDC::SetBrush(this_00,local_1c);
      }
      CPNBrush::~CPNBrush(local_88);
      CPNColor::~CPNColor(local_50);
      if (local_18 != (XPNDC *)0x0) {
        XPNDC::SetFgMixMode(local_18,local_2c);
      }
      if (local_10 != (XPNDC *)0x0) {
        XPNDC::SetPen(local_10,local_24);
      }
    }
    *(int *)(this + 0x88) = local_c;
    *(int *)(this + 0x8c) = local_8;
    iVar1 = 1;
  }
  return iVar1;
}


