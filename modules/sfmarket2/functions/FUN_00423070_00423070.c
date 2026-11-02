/* Module: sfmarket2.dll
   Function: FUN_00423070
   Address: 00423070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00423070(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_004aaf64;
  case 1:
    return DAT_004aaf68;
  case 2:
    _mbscpy(param_2,&DAT_004aaf6c);
    return DAT_004aafac;
  case 3:
    _mbscpy(param_2,&DAT_004aafb0);
    return DAT_004aaff0;
  case 4:
    return DAT_004aaff4;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_004ab0a4);
    return DAT_004ab0ac;
  case 0x28:
    _mbscpy(param_2,&DAT_004ab0c8);
    return DAT_004ab0d0;
  case 0x3c:
    _mbscpy(param_2,&DAT_004ab0bc);
    return DAT_004ab0c4;
  case 100:
    _mbscpy(param_2,&DAT_004ab0d8);
    return DAT_004ab0e0;
  case 0x65:
    _mbscpy(param_2,&DAT_004ab0e4);
    return DAT_004ab0ec;
  case 0x66:
    _mbscpy(param_2,&DAT_004ab0f0);
    return DAT_004ab0f8;
  case 0x78:
    _mbscpy(param_2,&DAT_004ab108);
    return DAT_004ab110;
  case 0x79:
    _mbscpy(param_2,&DAT_004ab114);
    return DAT_004ab11c;
  }
}


