/* Module: pngu3266.dll
   Function: AssociatePopupMenu
   Address: 6060c7d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNButton::AssociatePopupMenu(class CPNMenu *) */

int __thiscall XPNButton::AssociatePopupMenu(XPNButton *this,CPNMenu *param_1)

{
  CPNMenu *this_00;
  CPNMapPtrToPtr *this_01;
  CPNRouter *this_02;
  
                    /* 0x1c7d9  801  ?AssociatePopupMenu@XPNButton@@QAEHPAVCPNMenu@@@Z */
  this_00 = operator_new(0x1c);
  if (this_00 == (CPNMenu *)0x0) {
    this_01 = (CPNMapPtrToPtr *)0x0;
  }
  else {
    this_01 = (CPNMapPtrToPtr *)CPNMenu::CPNMenu(this_00);
  }
  *(CPNMapPtrToPtr **)(this + 0xd0) = this_01;
  CPNMapPtrToPtr::operator=(this_01,(CPNMapPtrToPtr *)param_1);
  this_02 = operator_new(0x14);
  if (this_02 == (CPNRouter *)0x0) {
    this_02 = (CPNRouter *)0x0;
  }
  else {
    CPNRouter::CPNRouter(this_02);
    *(undefined4 *)(this_02 + 0x10) = 0;
    *(XPNButton **)(this_02 + 8) = this;
    *(undefined ***)this_02 = &CPNBtnObserver::_vftable_;
  }
  *(CPNRouter **)(this + 0xd4) = this_02;
  CPNRouter::AddObserver((CPNRouter *)this,this_02,9,0);
  return (uint)(*(int *)(this + 0xd0) != 0);
}


