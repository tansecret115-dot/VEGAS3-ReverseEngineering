/* Module: pngu3266.dll
   Function: HandleMouseMove
   Address: 605f8bce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall CPNWindow::HandleMouseMove(class CPNxPoint &) */

void __thiscall CPNWindow::HandleMouseMove(CPNWindow *this,CPNxPoint *param_1)

{
  void *this_00;
  CPNTimer *pCVar1;
  CPNEvent local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  CPNWindow *local_30;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x8bce  1445  ?HandleMouseMove@CPNWindow@@AAEXAAVCPNxPoint@@@Z */
  if ((((byte)this[9] & 0x40) != 0) && (((byte)this[0x4c] & 2) == 0)) {
    (**(code **)(*(int *)this + 0x3c))(&local_14);
    if ((local_14 <= *(int *)param_1) &&
       (((*(int *)param_1 <= local_c && (local_10 <= *(int *)(param_1 + 4))) &&
        (*(int *)(param_1 + 4) <= local_8)))) {
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffb | 2;
      CPNEvent::CPNEvent(local_40,0,0,(CPNRouter *)0x0,0,0,0,0);
      local_38 = 1;
      local_34 = 0x68;
      local_30 = this;
      (**(code **)(*(int *)this + 0xdc))(local_40);
      (**(code **)(*(int *)this + 4))(local_40);
      this_00 = operator_new(0x2c);
      if (this_00 == (void *)0x0) {
        pCVar1 = (CPNTimer *)0x0;
      }
      else {
        pCVar1 = FUN_60602131(this_00,this,(CPNTimer **)(this + 0x18));
      }
      *(CPNTimer **)(this + 0x18) = pCVar1;
      CPNEvent::~CPNEvent(local_40);
    }
  }
  return;
}


