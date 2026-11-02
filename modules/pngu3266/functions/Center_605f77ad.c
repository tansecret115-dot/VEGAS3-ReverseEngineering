/* Module: pngu3266.dll
   Function: Center
   Address: 605f77ad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Center(void) */

void __thiscall CPNWindow::Center(CPNWindow *this)

{
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  CPNWindow *local_c;
  int *local_8;
  
                    /* 0x77ad  839  ?Center@CPNWindow@@UAEXXZ */
  local_c = this;
  SystemParametersInfoA(0x30,0,&local_54,0);
  local_44 = local_54;
  local_40 = local_50;
  local_3c = local_4c;
  local_38 = local_48;
  local_8 = (int *)(**(code **)(*(int *)this + 0x14))();
  if (local_8 == (int *)0x0) {
    local_34 = local_44;
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    local_48 = local_38;
    this = local_c;
  }
  else {
    (**(code **)(*local_8 + 0x3c))(&local_34);
    (**(code **)(*local_8 + 0x5c))(&local_34);
  }
  XPNWindow::GetWindowRect((XPNWindow *)this,(CPNxRect *)&local_24);
  local_14 = (((local_2c - local_1c) - local_34) + local_24) / 2 + local_34;
  local_10 = (((local_28 - local_18) - local_30) + local_20) / 2 + local_30;
  if (local_4c < (local_14 - local_24) + local_1c) {
    local_14 = (local_4c - local_1c) + local_24;
  }
  if (local_14 < local_44) {
    local_14 = local_44;
  }
  if (local_48 < (local_10 - local_20) + local_18) {
    local_10 = (local_48 - local_18) + local_20;
  }
  if (local_10 < local_40) {
    local_10 = local_40;
  }
  (**(code **)(*(int *)this + 0x44))(&local_14);
  return;
}


