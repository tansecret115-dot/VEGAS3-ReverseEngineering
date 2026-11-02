/* Module: pngu3266.dll
   Function: InsertItem
   Address: 605fa403
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::InsertItem(unsigned long,unsigned long,char
   const *) */

ulong __thiscall CPNMenu::InsertItem(CPNMenu *this,ulong param_1,ulong param_2,char *param_3)

{
                    /* 0xa403  1475  ?InsertItem@CPNMenu@@UAEKKKPBD@Z */
  (**(code **)(*(int *)this + 0x68))();
  InsertMenuA(*(HMENU *)(this + 0x14),param_1,0,param_2,param_3);
  return param_2;
}


