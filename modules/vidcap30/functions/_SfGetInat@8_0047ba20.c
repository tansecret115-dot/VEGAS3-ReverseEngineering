/* Module: vidcap30.exe
   Function: _SfGetInat@8
   Address: 0047ba20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGetInat_8(undefined4 param_1,uchar *param_2)

{
                    /* 0x7ba20  402  _SfGetInat@8 */
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_005c177c;
  case 1:
    return DAT_005c1780;
  case 2:
    _mbscpy(param_2,&DAT_005c1784);
    return DAT_005c17c4;
  case 3:
    _mbscpy(param_2,&DAT_005c17c8);
    return DAT_005c1808;
  case 4:
    return DAT_005c180c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_005c18bc);
    return DAT_005c18c4;
  case 0x28:
    _mbscpy(param_2,&DAT_005c18e0);
    return DAT_005c18e8;
  case 0x3c:
    _mbscpy(param_2,&DAT_005c18d4);
    return DAT_005c18dc;
  case 100:
    _mbscpy(param_2,&DAT_005c18f0);
    return DAT_005c18f8;
  case 0x65:
    _mbscpy(param_2,&DAT_005c18fc);
    return DAT_005c1904;
  case 0x66:
    _mbscpy(param_2,&DAT_005c1908);
    return DAT_005c1910;
  case 0x78:
    _mbscpy(param_2,&DAT_005c1920);
    return DAT_005c1928;
  case 0x79:
    _mbscpy(param_2,&DAT_005c192c);
    return DAT_005c1934;
  }
}


