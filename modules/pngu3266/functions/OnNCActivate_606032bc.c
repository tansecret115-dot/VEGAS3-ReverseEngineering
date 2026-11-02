/* Module: pngu3266.dll
   Function: OnNCActivate
   Address: 606032bc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnNCActivate(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnNCActivate(CPNCustomFrame *this,CPNEvent *param_1)

{
                    /* 0x132bc  1656  ?OnNCActivate@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  *(undefined4 *)(*(int *)(this + 0x18) + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  SendMessageA(*(HWND *)(this + 0x14),0x85,1,0);
  (**(code **)(**(int **)(this + 0xc) + 0x50))(*(undefined4 *)(this + 8));
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}


