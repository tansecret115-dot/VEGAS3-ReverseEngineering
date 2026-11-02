/* Module: pngu3266.dll
   Function: GetPosition
   Address: 605f6e58
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::GetPosition(class CPNxPoint &)const  */

void __thiscall CPNWindow::GetPosition(CPNWindow *this,CPNxPoint *param_1)

{
  CPNWindow *pCVar1;
  HWND__ *hWnd;
  BOOL BVar2;
  HWND pHVar3;
  WINDOWPLACEMENT local_44;
  tagRECT local_18;
  CPNWindow *local_8;
  
                    /* 0x6e58  1303  ?GetPosition@CPNWindow@@UBEXAAVCPNxPoint@@@Z */
  pCVar1 = (CPNWindow *)(**(code **)(*(int *)this + 0x14))();
  if ((pCVar1 == (CPNWindow *)0x0) || (local_8 = pCVar1, ((byte)this[10] & 0x10) == 0)) {
    local_8 = this;
  }
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
    BVar2 = IsIconic(*(HWND *)(this + 0xc));
    if (BVar2 == 0) {
      GetWindowRect(hWnd,&local_18);
      *(LONG *)param_1 = local_18.left;
      *(LONG *)(param_1 + 4) = local_18.top;
      if (pCVar1 != (CPNWindow *)0x0) {
        (**(code **)(*(int *)pCVar1 + 0x68))(param_1);
      }
      pHVar3 = ::GetParent(*(HWND *)(this + 0xc));
      if (pHVar3 == (HWND)0x0) {
        return;
      }
      MapFromCoordinateSystem(local_8,param_1);
      return;
    }
    memset(&local_44,0,0x2c);
    local_44.length = 0x2c;
    GetWindowPlacement(*(HWND *)(this + 0xc),&local_44);
    *(LONG *)param_1 = local_44.rcNormalPosition.left;
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x60);
    local_44.rcNormalPosition.top = *(LONG *)(this + 100);
  }
  *(LONG *)(param_1 + 4) = local_44.rcNormalPosition.top;
  return;
}


