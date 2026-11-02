/* Module: pngu3266.dll
   Function: GetTitleLength
   Address: 605f7701
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNWindow::GetTitleLength(void)const  */

long __thiscall CPNWindow::GetTitleLength(CPNWindow *this)

{
  int iVar1;
  
                    /* 0x7701  1398  ?GetTitleLength@CPNWindow@@UBEJXZ */
  if (((byte)this[0xb] & 0x80) != 0) {
    return 0;
  }
  iVar1 = GetWindowTextLengthA(*(HWND *)(this + 0xc));
  return iVar1;
}


