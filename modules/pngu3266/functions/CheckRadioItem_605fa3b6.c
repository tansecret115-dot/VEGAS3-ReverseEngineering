/* Module: pngu3266.dll
   Function: CheckRadioItem
   Address: 605fa3b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::CheckRadioItem(unsigned long,unsigned long,unsigned
   long) */

void __thiscall CPNMenu::CheckRadioItem(CPNMenu *this,ulong param_1,ulong param_2,ulong param_3)

{
                    /* 0xa3b6  846  ?CheckRadioItem@CPNMenu@@UAEXKKK@Z */
  (**(code **)(*(int *)this + 0x68))();
  CheckMenuRadioItem(*(HMENU *)(this + 0x14),param_1,param_2,param_3,0);
  return;
}


