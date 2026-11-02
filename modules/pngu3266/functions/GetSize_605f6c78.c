/* Module: pngu3266.dll
   Function: GetSize
   Address: 605f6c78
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::GetSize(class CPNxSize &)const  */

void __thiscall CPNWindow::GetSize(CPNWindow *this,CPNxSize *param_1)

{
  HWND__ *hWnd;
  BOOL BVar1;
  HWND pHVar2;
  int iVar3;
  CPNWindow *this_00;
  WINDOWPLACEMENT local_40;
  tagRECT local_14;
  
                    /* 0x6c78  1354  ?GetSize@CPNWindow@@UBEXAAVCPNxSize@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    BVar1 = IsIconic(*(HWND *)(this + 0xc));
    if (BVar1 == 0) {
      GetWindowRect(hWnd,&local_14);
      *(LONG *)param_1 = local_14.right - local_14.left;
      *(LONG *)(param_1 + 4) = local_14.bottom - local_14.top;
      if ((*(CPNWindow **)(this + 0x48) == (CPNWindow *)0x0) ||
         (this_00 = *(CPNWindow **)(this + 0x48), ((byte)this[10] & 0x10) == 0)) {
        this_00 = this;
      }
      pHVar2 = ::GetParent(*(HWND *)(this + 0xc));
      if (pHVar2 == (HWND)0x0) {
        return;
      }
      MapFromCoordinateSystem(this_00,param_1);
      return;
    }
    memset(&local_40,0,0x2c);
    local_40.length = 0x2c;
    GetWindowPlacement(*(HWND *)(this + 0xc),&local_40);
    *(LONG *)param_1 = local_40.rcNormalPosition.right - local_40.rcNormalPosition.left;
    iVar3 = local_40.rcNormalPosition.bottom - local_40.rcNormalPosition.top;
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x68);
    iVar3 = *(int *)(this + 0x6c);
  }
  *(int *)(param_1 + 4) = iVar3;
  return;
}


