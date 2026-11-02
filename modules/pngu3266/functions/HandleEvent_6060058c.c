/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 6060058c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNListBox::HandleEvent(class CPNEvent &) */

void __thiscall CPNListBox::HandleEvent(CPNListBox *this,CPNEvent *param_1)

{
  CPNEvent local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  
                    /* 0x1058c  1434  ?HandleEvent@CPNListBox@@UAEXAAVCPNEvent@@@Z */
  if (((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0xc) == 0x65)) &&
     ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 1)) {
    CPNEvent::CPNEvent(local_30,param_1);
    local_28 = 0x80000000;
    local_24 = 0x10;
    local_14 = (**(code **)(*(int *)this + 0x164))
                         ((int)*(short *)(param_1 + 0x20),
                          (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10));
    (**(code **)(*(int *)this + 4))(local_30);
    CPNEvent::~CPNEvent(local_30);
  }
  return;
}


