/* Module: pngu3266.dll
   Function: ClientToScreen
   Address: 605f71d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ClientToScreen(class CPNxRect &)const  */

void __thiscall CPNWindow::ClientToScreen(CPNWindow *this,CPNxRect *param_1)

{
  int iVar1;
  int iVar2;
  HWND__ *hWndFrom;
  tagPOINT local_24;
  undefined4 local_1c;
  undefined4 local_18;
  tagPOINT local_14;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x71d9  861  ?ClientToScreen@CPNWindow@@UBEXAAVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_24.x = *(LONG *)param_1;
    local_24.y = *(LONG *)(param_1 + 4);
    local_1c = *(undefined4 *)(param_1 + 8);
    local_18 = *(undefined4 *)(param_1 + 0xc);
    MapWindowPoints(*(HWND *)(this + 0xc),(HWND)0x0,&local_24,2);
    *(LONG *)param_1 = local_24.x;
    *(LONG *)(param_1 + 4) = local_24.y;
    *(undefined4 *)(param_1 + 8) = local_1c;
    *(undefined4 *)(param_1 + 0xc) = local_18;
  }
  else {
    hWndFrom = GetHWND(*(CPNWindow **)(this + 0x48));
    iVar1 = *(int *)(this + 100);
    iVar2 = *(int *)(this + 0x60);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
    local_8 = *(undefined4 *)(param_1 + 0xc);
    *(int *)param_1 = *(int *)param_1 + iVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
    local_14.x = *(LONG *)param_1;
    local_14.y = *(LONG *)(param_1 + 4);
    local_c = *(undefined4 *)(param_1 + 8);
    MapWindowPoints(hWndFrom,(HWND)0x0,&local_14,2);
    *(LONG *)param_1 = local_14.x;
    *(LONG *)(param_1 + 4) = local_14.y;
    *(undefined4 *)(param_1 + 8) = local_c;
    *(undefined4 *)(param_1 + 0xc) = local_8;
  }
  return;
}


