/* Module: pngu3266.dll
   Function: RemoveItem
   Address: 605fa5b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::RemoveItem(unsigned long) */

void __thiscall CPNMenu::RemoveItem(CPNMenu *this,ulong param_1)

{
                    /* 0xa5b1  1761  ?RemoveItem@CPNMenu@@UAEXK@Z */
  (**(code **)(*(int *)this + 0x68))();
  RemoveMenu(*(HMENU *)(this + 0x14),param_1,0);
  return;
}


