/* Module: pngu3266.dll
   Function: InsertSeparator
   Address: 605fa4b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::InsertSeparator(unsigned long) */

void __thiscall CPNMenu::InsertSeparator(CPNMenu *this,ulong param_1)

{
                    /* 0xa4b1  1484  ?InsertSeparator@CPNMenu@@UAEXK@Z */
  (**(code **)(*(int *)this + 0x68))();
  InsertMenuA(*(HMENU *)(this + 0x14),param_1,0x800,0,(LPCSTR)0x0);
  return;
}


