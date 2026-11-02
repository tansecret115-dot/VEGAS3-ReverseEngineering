/* Module: pngu3266.dll
   Function: TranslateFlags
   Address: 60605992
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned int __thiscall CPNBrowseDialog::TranslateFlags(void) */

uint __thiscall CPNBrowseDialog::TranslateFlags(CPNBrowseDialog *this)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x15992  2091  ?TranslateFlags@CPNBrowseDialog@@IAEIXZ */
  uVar1 = *(uint *)(this + 0xe8);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x1000;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = uVar2 | 0x2000;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((uVar1 & 0x20) != 0) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}


