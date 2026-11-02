/* Module: pngu3266.dll
   Function: RedrawMenu
   Address: 605fa4d3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::RedrawMenu(class CPNFrame *) */

void __thiscall CPNMenu::RedrawMenu(CPNMenu *this,CPNFrame *param_1)

{
  HWND hWnd;
  
                    /* 0xa4d3  1740  ?RedrawMenu@CPNMenu@@UAEXPAVCPNFrame@@@Z */
  if (param_1 == (CPNFrame *)0x0) {
    hWnd = *(HWND *)(this + 0x18);
  }
  else {
    hWnd = *(HWND *)(param_1 + 0xc);
  }
  DrawMenuBar(hWnd);
  return;
}


