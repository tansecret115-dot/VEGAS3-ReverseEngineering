/* Module: pngu3266.dll
   Function: ModifyItemID
   Address: 605fa531
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::ModifyItemID(unsigned long,unsigned long) */

void __thiscall CPNMenu::ModifyItemID(CPNMenu *this,ulong param_1,ulong param_2)

{
  int iVar1;
  LPSTR lpString;
  
                    /* 0xa531  1568  ?ModifyItemID@CPNMenu@@UAEXKK@Z */
  (**(code **)(*(int *)this + 0x68))();
  iVar1 = GetMenuStringA(*(HMENU *)(this + 0x14),param_1,(LPSTR)0x0,0,0);
  lpString = operator_new(iVar1 + 1U);
  GetMenuStringA(*(HMENU *)(this + 0x14),param_1,lpString,iVar1 + 1U,0);
  ModifyMenuA(*(HMENU *)(this + 0x14),param_1,0,param_2,lpString);
  operator_delete(lpString);
  return;
}


