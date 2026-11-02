/* Module: pngu3266.dll
   Function: SetMenu
   Address: 605f3c0b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNMenu * __thiscall CPNFrame::SetMenu(class CPNMenu *) */

CPNMenu * __thiscall CPNFrame::SetMenu(CPNFrame *this,CPNMenu *param_1)

{
  CPNMenu *pCVar1;
  HMENU hMenu;
  HWND__ *hWnd;
  BOOL BVar2;
  undefined4 uVar3;
  
                    /* 0x3c0b  1947  ?SetMenu@CPNFrame@@UAEPAVCPNMenu@@PAV2@@Z */
  pCVar1 = *(CPNMenu **)(this + 0xc0);
  *(CPNMenu **)(this + 0xc0) = param_1;
  if (param_1 == (CPNMenu *)0x0) {
    hMenu = (HMENU)0x0;
  }
  else {
    hMenu = *(HMENU *)(param_1 + 0x14);
  }
  if (*(int *)(this + 0xc) == 0) {
    return (CPNMenu *)0x0;
  }
  hWnd = CPNWindow::GetHWND((CPNWindow *)this);
  BVar2 = ::SetMenu(hWnd,hMenu);
  if (BVar2 == 0) {
    *(undefined4 *)(this + 0xc0) = 0;
  }
  else if (*(int *)(this + 0xc0) != 0) {
    uVar3 = 1;
    goto LAB_605f3c5d;
  }
  uVar3 = 0;
LAB_605f3c5d:
  *(undefined4 *)(this + 0xc4) = uVar3;
  return pCVar1;
}


