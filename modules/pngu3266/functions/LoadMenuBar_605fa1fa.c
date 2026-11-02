/* Module: pngu3266.dll
   Function: LoadMenuBar
   Address: 605fa1fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::LoadMenuBar(unsigned long) */

int __thiscall CPNMenu::LoadMenuBar(CPNMenu *this,ulong param_1)

{
  int iVar1;
  
                    /* 0xa1fa  1543  ?LoadMenuBar@CPNMenu@@UAEHK@Z */
  iVar1 = (**(code **)(*(int *)this + 8))(param_1);
  return iVar1;
}


