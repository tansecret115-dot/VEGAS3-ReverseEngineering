/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 6060ce0e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBtnObserver::HandleEvent(class CPNEvent &) */

void __thiscall CPNBtnObserver::HandleEvent(CPNBtnObserver *this,CPNEvent *param_1)

{
  CPNBtnObserver *pCVar1;
  int iVar2;
  CPNTimer *this_00;
  DWORD DVar3;
  CPNEvent local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_10;
  
                    /* 0x1ce0e  1433  ?HandleEvent@CPNBtnObserver@@UAEXAAVCPNEvent@@@Z */
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 8) != 0x10) || (*(int *)(param_1 + 0x24) != 0x536)) {
    if (iVar2 != 0x65) {
      if (iVar2 == 0x66) {
        if (*(XPNTimer **)(this + 0x10) == (XPNTimer *)0x0) {
          return;
        }
        if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) != 0) {
          return;
        }
        XPNTimer::SetPending(*(XPNTimer **)(this + 0x10),0);
        return;
      }
      if (iVar2 != 0x83) {
        if (iVar2 == 200) {
          (**(code **)(**(int **)(this + 8) + 0x88))();
          CPNEvent::CPNEvent(local_30,0,0,(CPNRouter *)0x0,0,0,0,0);
          local_28 = 0x80000000;
          local_24 = 8;
          local_18 = (**(code **)(**(int **)(this + 8) + 0x124))();
          local_10 = *(undefined4 *)(param_1 + 0x20);
          (**(code **)(**(int **)(this + 8) + 4))(local_30);
        }
        else {
          if (iVar2 != 0xc9) {
            return;
          }
          CPNEvent::CPNEvent(local_30,param_1);
          local_28 = 0x80000000;
          local_24 = 0x10;
          (**(code **)(**(int **)(this + 8) + 4))(local_30);
        }
        CPNEvent::~CPNEvent(local_30);
        return;
      }
      if ((*(int *)(param_1 + 0x1c) != 0x1b) && (*(int *)(param_1 + 0x1c) != 0xd)) {
        return;
      }
      (**(code **)(**(int **)(this + 8) + 0x88))();
      return;
    }
    iVar2 = *(int *)(this + 8);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0xf7) != 0) {
      pCVar1 = this + 0x10;
      if (*(int *)(this + 0x10) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(this + 0x10) + 4))(1);
        *(CPNTimer **)pCVar1 = (CPNTimer *)0x0;
      }
      this_00 = operator_new(0x2c);
      if (this_00 == (CPNTimer *)0x0) {
        this_00 = (CPNTimer *)0x0;
      }
      else {
        CPNTimer::CPNTimer(this_00,*(ulong *)(*(int *)(this + 8) + 0xf7),0,(CPNTimer **)pCVar1);
        *(CPNBtnObserver **)(this_00 + 0x28) = this;
        *(undefined ***)this_00 = &PTR_QueryInterface_6062b6f0;
        *(undefined ***)(this_00 + 4) = &PTR_FUN_6062b6e8;
      }
      *(CPNTimer **)pCVar1 = this_00;
      return;
    }
    if (iVar2 == 0) {
      return;
    }
    DVar3 = GetTickCount();
    if (DVar3 - *(int *)(this + 0xc) < 0xfb) {
      return;
    }
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) != 0) {
      return;
    }
  }
  DisplayMenu(this);
  return;
}


