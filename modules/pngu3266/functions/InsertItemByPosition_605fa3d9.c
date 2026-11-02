/* Module: pngu3266.dll
   Function: InsertItemByPosition
   Address: 605fa3d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::InsertItemByPosition(unsigned long,unsigned
   long,char const *) */

ulong __thiscall
CPNMenu::InsertItemByPosition(CPNMenu *this,ulong param_1,ulong param_2,char *param_3)

{
                    /* 0xa3d9  1478  ?InsertItemByPosition@CPNMenu@@UAEKKKPBD@Z */
  (**(code **)(*(int *)this + 0x68))();
  InsertMenuA(*(HMENU *)(this + 0x14),param_1,0x400,param_2,param_3);
  return param_2;
}


