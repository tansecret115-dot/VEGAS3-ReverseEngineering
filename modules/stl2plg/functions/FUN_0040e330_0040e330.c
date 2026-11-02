/* Module: stl2plg.dll
   Function: FUN_0040e330
   Address: 0040e330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e330(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_004736c4;
  case 1:
    return DAT_004736c8;
  case 2:
    _mbscpy(param_2,&DAT_004736cc);
    return DAT_0047370c;
  case 3:
    _mbscpy(param_2,&DAT_00473710);
    return DAT_00473750;
  case 4:
    return DAT_00473754;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00473804);
    return DAT_0047380c;
  case 0x28:
    _mbscpy(param_2,&DAT_00473828);
    return DAT_00473830;
  case 0x3c:
    _mbscpy(param_2,&DAT_0047381c);
    return DAT_00473824;
  case 100:
    _mbscpy(param_2,&DAT_00473838);
    return DAT_00473840;
  case 0x65:
    _mbscpy(param_2,&DAT_00473844);
    return DAT_0047384c;
  case 0x66:
    _mbscpy(param_2,&DAT_00473850);
    return DAT_00473858;
  case 0x78:
    _mbscpy(param_2,&DAT_00473868);
    return DAT_00473870;
  case 0x79:
    _mbscpy(param_2,&DAT_00473874);
    return DAT_0047387c;
  }
}


