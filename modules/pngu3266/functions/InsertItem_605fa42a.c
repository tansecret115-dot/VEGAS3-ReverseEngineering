/* Module: pngu3266.dll
   Function: InsertItem
   Address: 605fa42a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::InsertItem(unsigned long,unsigned long,unsigned
   long) */

ulong __thiscall CPNMenu::InsertItem(CPNMenu *this,ulong param_1,ulong param_2,ulong param_3)

{
                    /* 0xa42a  1474  ?InsertItem@CPNMenu@@UAEKKKK@Z */
  (**(code **)(*(int *)this + 0x68))();
  InsertMenuA(*(HMENU *)(this + 0x14),param_1,0x100,param_2,(LPCSTR)param_3);
  return param_2;
}


