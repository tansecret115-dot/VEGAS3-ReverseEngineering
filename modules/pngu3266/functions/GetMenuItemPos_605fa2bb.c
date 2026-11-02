/* Module: pngu3266.dll
   Function: GetMenuItemPos
   Address: 605fa2bb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::GetMenuItemPos(unsigned long) */

ulong __thiscall CPNMenu::GetMenuItemPos(CPNMenu *this,ulong param_1)

{
  int iVar1;
  UINT UVar2;
  ulong nPos;
  
                    /* 0xa2bb  1258  ?GetMenuItemPos@CPNMenu@@UAEKK@Z */
  if (param_1 != 0xffffffff) {
    iVar1 = GetMenuItemCount(*(HMENU *)(this + 0x14));
    nPos = 0;
    if (0 < iVar1) {
      do {
        UVar2 = GetMenuItemID(*(HMENU *)(this + 0x14),nPos);
        if (UVar2 == param_1) {
          return nPos;
        }
        nPos = nPos + 1;
      } while ((int)nPos < iVar1);
    }
  }
  return 0xffffffff;
}


