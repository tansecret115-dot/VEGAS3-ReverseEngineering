/* Module: pngu3266.dll
   Function: GetSubMenu
   Address: 605fa351
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::GetSubMenu(unsigned long,class CPNMenu &) */

void __thiscall CPNMenu::GetSubMenu(CPNMenu *this,ulong param_1,CPNMenu *param_2)

{
  HMENU pHVar1;
  
                    /* 0xa351  1376  ?GetSubMenu@CPNMenu@@UAEXKAAV1@@Z */
  pHVar1 = ::GetSubMenu(*(HMENU *)(this + 0x14),param_1);
  Attach(param_2,pHVar1,*(HWND__ **)(this + 0x18));
  return;
}


