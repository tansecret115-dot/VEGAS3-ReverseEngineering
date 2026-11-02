/* Module: pngu3266.dll
   Function: GetMenu
   Address: 605f7714
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::GetMenu(class CPNMenu &) */

int __thiscall CPNWindow::GetMenu(CPNWindow *this,CPNMenu *param_1)

{
  HMENU pHVar1;
  
                    /* 0x7714  1249  ?GetMenu@CPNWindow@@UAEHAAVCPNMenu@@@Z */
  if ((((byte)this[0xb] & 0x80) == 0) &&
     (pHVar1 = ::GetMenu(*(HWND *)(this + 0xc)), pHVar1 != (HMENU)0x0)) {
    CPNMenu::Attach(param_1,pHVar1,*(HWND__ **)(this + 0xc));
    return 1;
  }
  return 0;
}


