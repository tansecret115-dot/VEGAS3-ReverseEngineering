/* Module: pngu3266.dll
   Function: TranslateToWindowsStyle
   Address: 605f8f9a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNWindow::TranslateToWindowsStyle(unsigned long &)const  */

ulong __thiscall CPNWindow::TranslateToWindowsStyle(CPNWindow *this,ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x8f9a  2099  ?TranslateToWindowsStyle@CPNWindow@@QBEKAAK@Z */
  uVar2 = 0;
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0x73;
  }
  if ((uVar1 & 0x20000000) != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if ((uVar1 & 0x2000) != 0) {
    uVar2 = uVar2 | 0x80400000;
  }
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar2 | 0xc80000;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = uVar2 | 0x40000;
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = uVar2 | 0x1000000;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = uVar2 | 0x20000000;
  }
  if ((uVar1 & 0x400) != 0) {
    uVar2 = uVar2 | 0x10000;
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x2000000;
  }
  if ((uVar1 & 0x8000) != 0) {
    *param_1 = uVar1 | 0x4000;
  }
  uVar1 = *param_1;
  if ((uVar1 & 0x20) != 0) {
    uVar2 = uVar2 | 0x20000;
  }
  if ((uVar1 & 0x40) != 0) {
    uVar2 = uVar2 | 0x10000;
  }
  if ((uVar1 & 0x200000) != 0) {
    uVar2 = uVar2 | 0x200000;
  }
  if ((uVar1 & 0x400000) != 0) {
    uVar2 = uVar2 | 0x100000;
  }
  if ((uVar1 & 0x2000000) != 0) {
    uVar2 = uVar2 | 0x4000000;
  }
  if ((uVar1 & 0x20000000) != 0) {
    uVar2 = uVar2 | 0xcf0000;
  }
  if ((uVar1 & 0x40000000) != 0) {
    uVar2 = uVar2 | 0x2cb0000;
  }
  if ((uVar1 & 0x10000000) != 0) {
    uVar2 = uVar2 | 0x40000000;
  }
  if ((uVar1 & 0x200) != 0) {
    uVar2 = uVar2 | 0x10000000;
  }
  return uVar2;
}


