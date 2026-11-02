/* Module: pngu3266.dll
   Function: GetScreenRect
   Address: 605f9b58
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::GetScreenRect(class CPNxRect &)const  */

void __thiscall CPNWindow::GetScreenRect(CPNWindow *this,CPNxRect *param_1)

{
  HWND__ *hWnd;
  BOOL BVar1;
  WINDOWPLACEMENT local_40;
  tagRECT local_14;
  
                    /* 0x9b58  1324  ?GetScreenRect@CPNWindow@@UBEXAAVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    BVar1 = IsIconic(*(HWND *)(this + 0xc));
    if (BVar1 == 0) {
      GetWindowRect(hWnd,&local_14);
      *(LONG *)param_1 = local_14.left;
      *(LONG *)(param_1 + 4) = local_14.top;
      *(LONG *)(param_1 + 8) = local_14.right;
      local_40.rcNormalPosition.bottom = local_14.bottom;
    }
    else {
      memset(&local_40,0,0x2c);
      local_40.length = 0x2c;
      GetWindowPlacement(*(HWND *)(this + 0xc),&local_40);
      *(LONG *)param_1 = local_40.rcNormalPosition.left;
      *(LONG *)(param_1 + 4) = local_40.rcNormalPosition.top;
      *(LONG *)(param_1 + 8) = local_40.rcNormalPosition.right;
    }
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 100);
    *(int *)(param_1 + 8) = *(int *)(this + 0x68) + *(int *)(this + 0x60);
    local_40.rcNormalPosition.bottom = *(int *)(this + 0x6c) + *(int *)(this + 100);
  }
  *(LONG *)(param_1 + 0xc) = local_40.rcNormalPosition.bottom;
  return;
}


