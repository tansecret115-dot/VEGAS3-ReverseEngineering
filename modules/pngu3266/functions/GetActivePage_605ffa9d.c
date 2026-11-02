/* Module: pngu3266.dll
   Function: GetActivePage
   Address: 605ffa9d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPropertySheet::GetActivePage(void)const  */

ulong __thiscall CPNPropertySheet::GetActivePage(CPNPropertySheet *this)

{
  int iVar1;
  HWND__ *pHVar2;
  HWND__ *pHVar3;
  ulong uVar4;
  
                    /* 0xfa9d  1080  ?GetActivePage@CPNPropertySheet@@UBEKXZ */
  uVar4 = 0;
  pHVar2 = (HWND__ *)SendMessageA(*(HWND *)(this + 0xc),0x476,0,0);
  if (pHVar2 == (HWND__ *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(this + 0xd4);
    if (0 < iVar1) {
      do {
        pHVar3 = CPNWindow::GetHWND(*(CPNWindow **)(*(int *)(this + 0xd0) + uVar4 * 4));
        if (pHVar2 == pHVar3) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return uVar4;
}


