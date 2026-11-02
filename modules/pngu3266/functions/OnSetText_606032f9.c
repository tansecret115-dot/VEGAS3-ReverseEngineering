/* Module: pngu3266.dll
   Function: OnSetText
   Address: 606032f9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnSetText(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnSetText(CPNCustomFrame *this,CPNEvent *param_1)

{
  uint uVar1;
  uint dwNewLong;
  long lVar2;
  
                    /* 0x132f9  1695  ?OnSetText@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x1c);
  dwNewLong = GetWindowLongA(*(HWND *)(this + 0x14),-0x10);
  if ((dwNewLong & 0x10000000) != 0) {
    SetWindowLongA(*(HWND *)(this + 0x14),-0x10,dwNewLong & 0xefffffff);
  }
  lVar2 = CPNWindow::DefWindowProcA(*(CPNWindow **)(this + 8),0xc,uVar1,lVar2);
  *(long *)(param_1 + 0x28) = lVar2;
  if ((dwNewLong & 0x10000000) != 0) {
    SetWindowLongA(*(HWND *)(this + 0x14),-0x10,dwNewLong);
  }
  SendMessageA(*(HWND *)(this + 0x14),0x85,0,0);
  return 1;
}


