/* Module: pngu3266.dll
   Function: EndDialog
   Address: 605fbf28
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDialog::EndDialog(unsigned long) */

void __thiscall CPNDialog::EndDialog(CPNDialog *this,ulong param_1)

{
  int *piVar1;
  CPNDialog *pCVar2;
  
                    /* 0xbf28  1039  ?EndDialog@CPNDialog@@UAEXK@Z */
  *(ulong *)(this + 0xcc) = param_1;
  if (*(int *)(this + 0xc0) != 0) {
    (**(code **)(**(int **)(this + 0x48) + 0xac))(1);
  }
  if (*(int *)(this + 200) == 0) {
    if (*(int *)(this + 0xc4) != 0) {
      RemoveSingleInstanceDialog(this);
    }
    DestroyWindow(*(HWND *)(this + 0xc));
  }
  else {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
    if (piVar1 != (int *)0x0) {
      pCVar2 = (CPNDialog *)(**(code **)(*piVar1 + 0x10c))();
      if (pCVar2 == this) {
        (**(code **)(*piVar1 + 0x110))(0);
      }
    }
    ::EndDialog(*(HWND *)(this + 0xc),param_1);
  }
  *(undefined4 *)(this + 0xc0) = 0;
  return;
}


