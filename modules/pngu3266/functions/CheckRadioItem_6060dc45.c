/* Module: pngu3266.dll
   Function: CheckRadioItem
   Address: 6060dc45
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNMenu::CheckRadioItem(unsigned long,unsigned long,unsigned
   long) */

void __thiscall XPNMenu::CheckRadioItem(XPNMenu *this,ulong param_1,ulong param_2,ulong param_3)

{
  for (; param_1 <= param_2; param_1 = param_1 + 1) {
    (**(code **)(*(int *)this + 0x38))(param_1,param_1 == param_3);
  }
  return;
}


