/* Module: vegas30k.dll
   Function: _SfGetLabeledStringFloat@16
   Address: 01096220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfGetLabeledStringFloat_16(float param_1,int param_2,float param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
                    /* 0x96220  956  _SfGetLabeledStringFloat@16 */
  if ((param_3 != (float)_DAT_011db3f0) && (param_1 <= param_3)) {
    iVar1 = _SfGetString2_8(DAT_0120e5c8,0x10cb);
    return iVar1;
  }
  iVar1 = _SfGetStringBuffer_8(DAT_0120e5c8,0x18);
  if (iVar1 == 0) {
    iVar1 = _SfGetString2_8(DAT_0120e5c8,0x10ca);
    return iVar1;
  }
  if (param_2 < 0) {
LAB_010962e3:
    ftol();
    iVar2 = SfPrintF(iVar1,&DAT_011e2810);
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_010962e3;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xf");
    local_16 = (char)param_2 + '0';
    iVar2 = SfPrintF(iVar1,local_18,(double)param_1);
  }
  if (param_4 != (uchar *)0x0) {
    _mbscpy((uchar *)(iVar2 + iVar1),param_4);
  }
  return iVar1;
}


