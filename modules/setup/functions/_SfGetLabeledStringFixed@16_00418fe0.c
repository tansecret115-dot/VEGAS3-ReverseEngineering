/* Module: Setup.exe
   Function: _SfGetLabeledStringFixed@16
   Address: 00418fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * _SfGetLabeledStringFixed_16(int param_1,int param_2,int param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
                    /* 0x18fe0  151  _SfGetLabeledStringFixed@16 */
  if ((param_3 != 0) && (param_1 <= param_3)) {
    puVar1 = _SfGetString2_8(DAT_00448e00,0x10cb);
    return puVar1;
  }
  puVar1 = _SfGetStringBuffer_8((int)DAT_00448e00,0x18);
  if (puVar1 == (uchar *)0x0) {
    puVar1 = _SfGetString2_8(DAT_00448e00,0x10ca);
    return puVar1;
  }
  if (param_2 < 0) {
LAB_00419094:
    _mbscpy(local_18,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_00419094;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xz");
    local_16 = (char)param_2 + '0';
  }
  iVar2 = SfPrintF(puVar1,local_18);
  if (param_4 != (uchar *)0x0) {
    _mbscpy(puVar1 + iVar2,param_4);
  }
  return puVar1;
}


