/* Module: pngu3266.dll
   Function: ScreenToClient
   Address: 605f728e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ScreenToClient(class CPNxRect &)const  */

void __thiscall CPNWindow::ScreenToClient(CPNWindow *this,CPNxRect *param_1)

{
  tagPOINT local_14;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x728e  1797  ?ScreenToClient@CPNWindow@@UBEXAAVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_14.x = *(LONG *)param_1;
    local_14.y = *(LONG *)(param_1 + 4);
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = *(undefined4 *)(param_1 + 0xc);
    MapWindowPoints((HWND)0x0,*(HWND *)(this + 0xc),&local_14,2);
    *(LONG *)param_1 = local_14.x;
    *(LONG *)(param_1 + 4) = local_14.y;
    *(undefined4 *)(param_1 + 8) = local_c;
    *(undefined4 *)(param_1 + 0xc) = local_8;
  }
  return;
}


