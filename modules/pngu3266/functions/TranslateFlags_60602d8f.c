/* Module: pngu3266.dll
   Function: TranslateFlags
   Address: 60602d8f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall CPNOpenFileDialog::TranslateFlags(void) */

ulong __thiscall CPNOpenFileDialog::TranslateFlags(CPNOpenFileDialog *this)

{
  uint uVar1;
  ulong uVar2;
  
                    /* 0x12d8f  2092  ?TranslateFlags@CPNOpenFileDialog@@IAEKXZ */
  uVar1 = *(uint *)(this + 0x110);
  uVar2 = 0x80020;
  if ((uVar1 & 2) != 0) {
    uVar2 = 0x82020;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((uVar1 & 0x20) != 0) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


