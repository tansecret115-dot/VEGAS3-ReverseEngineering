/* Module: pngu3266.dll
   Function: DoModaless
   Address: 605fc01e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNDialog::DoModaless(void) */

ulong __thiscall CPNDialog::DoModaless(CPNDialog *this)

{
  ulong uVar1;
  int iVar2;
  CPNWindow *this_00;
  HWND__ *hWndParent;
  DLGPROC lpDialogFunc;
  HINSTANCE hInstance;
  HWND pHVar3;
  LPCDLGTEMPLATEA lpTemplate;
  CPNDialog *dwInitParam;
  undefined4 local_34 [11];
  LPCDLGTEMPLATEA local_8;
  
                    /* 0xc01e  970  ?DoModaless@CPNDialog@@UAEKXZ */
  if ((*(int *)(this + 0xc4) != 0) && (iVar2 = AddSingleInstanceDialog(this), iVar2 == 0)) {
    return 0;
  }
  (**(code **)(**(int **)(this + 0x48) + 0xac))(0);
  local_8 = (LPCDLGTEMPLATEA)FUN_6061dbb0(*(uint *)(this + 0xb8));
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  if (iVar2 == 0) {
    hWndParent = (HWND__ *)0x0;
  }
  else {
    this_00 = (CPNWindow *)(**(code **)(*(int *)this + 0x14))();
    hWndParent = CPNWindow::GetHWND(this_00);
  }
  dwInitParam = this;
  lpDialogFunc = (DLGPROC)PNGuiGetDlgProc();
  lpTemplate = local_8;
  hInstance = (HINSTANCE)FUN_6061dc60(*(undefined4 *)(this + 0xb8),2);
  pHVar3 = CreateDialogIndirectParamA
                     (hInstance,lpTemplate,hWndParent,lpDialogFunc,(LPARAM)dwInitParam);
  *(HWND *)(this + 0xc) = pHVar3;
  FUN_6061a9d0(local_34,30000);
  *(undefined4 *)(this + 0xcc) = 0;
  *(int *)(this + 0xc0) = 1;
  do {
    FUN_6061b060(500);
  } while (*(int *)(this + 0xc0) != 0);
  uVar1 = *(ulong *)(this + 0xcc);
  FUN_6061aa50(local_34);
  return uVar1;
}


