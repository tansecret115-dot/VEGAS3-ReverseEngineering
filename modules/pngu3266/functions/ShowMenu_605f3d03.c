/* Module: pngu3266.dll
   Function: ShowMenu
   Address: 605f3d03
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNFrame::ShowMenu(int) */

void __thiscall CPNFrame::ShowMenu(CPNFrame *this,int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  HMENU hMenu;
  
                    /* 0x3d03  2063  ?ShowMenu@CPNFrame@@UAEXH@Z */
  if ((*(int *)(this + 0xc0) != 0) && (param_1 != *(int *)(this + 0xc4))) {
    if (param_1 == 0) {
      hMenu = (HMENU)0x0;
    }
    else {
      hMenu = *(HMENU *)(*(int *)(this + 0xc0) + 0x14);
    }
    BVar1 = ::SetMenu(*(HWND *)(this + 0xc),hMenu);
    if ((BVar1 == 0) || (param_1 != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(this + 0xc4) = uVar2;
  }
  return;
}


