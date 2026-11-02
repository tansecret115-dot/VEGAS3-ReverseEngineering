/* Module: vegas30k.dll
   Function: _SfGetInat@8
   Address: 010c53b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGetInat_8(undefined4 param_1,uchar *param_2)

{
                    /* 0xc53b0  954  _SfGetInat@8 */
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0120e66c;
  case 1:
    return DAT_0120e670;
  case 2:
    _mbscpy(param_2,&DAT_0120e674);
    return DAT_0120e6b4;
  case 3:
    _mbscpy(param_2,&DAT_0120e6b8);
    return DAT_0120e6f8;
  case 4:
    return DAT_0120e6fc;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0120e7ac);
    return DAT_0120e7b4;
  case 0x28:
    _mbscpy(param_2,&DAT_0120e7d0);
    return DAT_0120e7d8;
  case 0x3c:
    _mbscpy(param_2,&DAT_0120e7c4);
    return DAT_0120e7cc;
  case 100:
    _mbscpy(param_2,&DAT_0120e7e0);
    return DAT_0120e7e8;
  case 0x65:
    _mbscpy(param_2,&DAT_0120e7ec);
    return DAT_0120e7f4;
  case 0x66:
    _mbscpy(param_2,&DAT_0120e7f8);
    return DAT_0120e800;
  case 0x78:
    _mbscpy(param_2,&DAT_0120e810);
    return DAT_0120e818;
  case 0x79:
    _mbscpy(param_2,&DAT_0120e81c);
    return DAT_0120e824;
  }
}


