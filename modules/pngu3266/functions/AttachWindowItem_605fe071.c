/* Module: pngu3266.dll
   Function: AttachWindowItem
   Address: 605fe071
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNEdit::AttachWindowItem(unsigned long,class CPNWindow *) */

int __thiscall CPNEdit::AttachWindowItem(CPNEdit *this,ulong param_1,CPNWindow *param_2)

{
  HWND__ *hDlg;
  HWND hWnd;
  int iVar1;
  uint uVar2;
  LRESULT LVar3;
  ulong nIDDlgItem;
  
  nIDDlgItem = param_1;
                    /* 0xe071  821  ?AttachWindowItem@CPNEdit@@UAEHKPAVCPNWindow@@@Z */
  hDlg = CPNWindow::GetHWND(param_2);
  hWnd = GetDlgItem(hDlg,nIDDlgItem);
  if (hWnd == (HWND)0x0) {
    iVar1 = 0;
  }
  else {
    uVar2 = GetWindowLongA(hWnd,-0x10);
    *(undefined4 *)(this + 0x106) = 0;
    *(uint *)(this + 0x10e) = uVar2 & 0x800;
    SendMessageA(hWnd,0xb9,0,0);
    LVar3 = SendMessageA(hWnd,0xd2,0,0);
    this[0x112] = SUB41(LVar3,0);
    LVar3 = SendMessageA(hWnd,0xd5,0,0);
    *(LRESULT *)(this + 0x102) = LVar3;
    uVar2 = GetWindowLongA(hWnd,-0x10);
    *(uint *)(this + 0x10a) = uVar2 & 8;
    iVar1 = CPNWindow::AttachWindowItem((CPNWindow *)this,param_1,param_2);
  }
  return iVar1;
}


