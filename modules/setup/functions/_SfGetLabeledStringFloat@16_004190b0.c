/* Module: Setup.exe
   Function: _SfGetLabeledStringFloat@16
   Address: 004190b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * _SfGetLabeledStringFloat_16(float param_1,int param_2,float param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
                    /* 0x190b0  152  _SfGetLabeledStringFloat@16 */
  if ((param_3 != (float)_DAT_00439678) && (param_1 <= param_3)) {
    puVar1 = _SfGetString2_8(DAT_00448e00,0x10cb);
    return puVar1;
  }
  puVar1 = _SfGetStringBuffer_8((int)DAT_00448e00,0x18);
  if (puVar1 == (uchar *)0x0) {
    puVar1 = _SfGetString2_8(DAT_00448e00,0x10ca);
    return puVar1;
  }
  if (param_2 < 0) {
LAB_00419173:
    ftol();
    iVar2 = SfPrintF(puVar1,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_00419173;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xf");
    local_16 = (char)param_2 + '0';
    iVar2 = SfPrintF(puVar1,local_18);
  }
  if (param_4 != (uchar *)0x0) {
    _mbscpy(puVar1 + iVar2,param_4);
  }
  return puVar1;
}


