/* Module: pngu3266.dll
   Function: CreatePopupMenu
   Address: 6060c84d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNButton::CreatePopupMenu(void) */

int __thiscall XPNButton::CreatePopupMenu(XPNButton *this)

{
  CPNMenu *this_00;
  int *piVar1;
  CPNRouter *this_01;
  
                    /* 0x1c84d  938  ?CreatePopupMenu@XPNButton@@QAEHXZ */
  this_00 = operator_new(0x1c);
  if (this_00 == (CPNMenu *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNMenu::CPNMenu(this_00);
  }
  *(int **)(this + 0xd0) = piVar1;
  (**(code **)(*piVar1 + 0x1c))();
  this_01 = operator_new(0x14);
  if (this_01 == (CPNRouter *)0x0) {
    this_01 = (CPNRouter *)0x0;
  }
  else {
    CPNRouter::CPNRouter(this_01);
    *(undefined4 *)(this_01 + 0x10) = 0;
    *(XPNButton **)(this_01 + 8) = this;
    *(undefined ***)this_01 = &CPNBtnObserver::_vftable_;
  }
  *(CPNRouter **)(this + 0xd4) = this_01;
  CPNRouter::AddObserver((CPNRouter *)this,this_01,0x19,0);
  return (uint)(*(int *)(this + 0xd0) != 0);
}


