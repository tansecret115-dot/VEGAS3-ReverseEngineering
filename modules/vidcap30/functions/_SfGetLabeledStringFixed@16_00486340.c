/* Module: vidcap30.exe
   Function: _SfGetLabeledStringFixed@16
   Address: 00486340
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetLabeledStringFixed_16(int param_1,int param_2,int param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
                    /* 0x86340  403  _SfGetLabeledStringFixed@16 */
  if ((param_3 != 0) && (param_1 <= param_3)) {
    iVar1 = _SfGetString2_8(DAT_005c16d8,0x10cb);
    return iVar1;
  }
  iVar1 = _SfGetStringBuffer_8(DAT_005c16d8,0x18);
  if (iVar1 == 0) {
    iVar1 = _SfGetString2_8(DAT_005c16d8,0x10ca);
    return iVar1;
  }
  if (param_2 < 0) {
LAB_004863f4:
    _mbscpy(local_18,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_004863f4;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xz");
    local_16 = (char)param_2 + '0';
  }
  iVar2 = SfPrintF(iVar1,local_18,param_1);
  if (param_4 != (uchar *)0x0) {
    _mbscpy((uchar *)(iVar2 + iVar1),param_4);
  }
  return iVar1;
}


