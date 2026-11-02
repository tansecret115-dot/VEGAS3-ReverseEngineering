/* Module: pngu3266.dll
   Function: ClientToScreen
   Address: 605f6f17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ClientToScreen(class CPNxPoint &)const  */

void __thiscall CPNWindow::ClientToScreen(CPNWindow *this,CPNxPoint *param_1)

{
  int iVar1;
  HWND hWnd;
  tagPOINT local_c;
  
                    /* 0x6f17  860  ?ClientToScreen@CPNWindow@@UBEXAAVCPNxPoint@@@Z */
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (((byte)this[0xb] & 0x80) == 0) {
    hWnd = GetHWND(this);
  }
  else {
    hWnd = GetHWND((CPNWindow *)param_1);
    iVar1 = *(int *)(this + 100);
    *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x60);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  }
  local_c.x = *(LONG *)param_1;
  local_c.y = *(LONG *)(param_1 + 4);
  ::ClientToScreen(hWnd,&local_c);
  *(LONG *)param_1 = local_c.x;
  *(LONG *)(param_1 + 4) = local_c.y;
  return;
}


