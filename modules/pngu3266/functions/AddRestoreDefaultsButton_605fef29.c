/* Module: pngu3266.dll
   Function: AddRestoreDefaultsButton
   Address: 605fef29
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPropertySheet::AddRestoreDefaultsButton(void) */

void __thiscall CPNPropertySheet::AddRestoreDefaultsButton(CPNPropertySheet *this)

{
  int iVar1;
  CPNButton *this_00;
  CPNRouter *this_01;
  undefined1 local_11c [260];
  int local_18 [5];
  
                    /* 0xef29  771  ?AddRestoreDefaultsButton@CPNPropertySheet@@QAEXXZ */
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  (**(code **)(*(int *)this + 0x3c))(local_18);
  iVar1 = local_18[3] + -0x1d;
  local_18[4] = local_18[0] + 0xc;
  this_00 = operator_new(0xfb);
  if (this_00 == (CPNButton *)0x0) {
    this_01 = (CPNRouter *)0x0;
  }
  else {
    this_01 = (CPNRouter *)CPNButton::CPNButton(this_00);
  }
  *(CPNRouter **)(this + 0xf8) = this_01;
  if (this_01 != (CPNRouter *)0x0) {
    CPNRouter::AddObserver(this_01,(CPNRouter *)this,0x80000000,1);
    FUN_6061db60(0x3e90008,local_11c,0x104);
    (**(code **)(**(int **)(this + 0xf8) + 300))
              (100,this,local_18[4],iVar1,0x6e,0x17,0x10000600,0,local_11c);
  }
  return;
}


