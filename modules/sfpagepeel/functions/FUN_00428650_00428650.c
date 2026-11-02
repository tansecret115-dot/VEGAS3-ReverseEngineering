/* Module: sfpagepeel.dll
   Function: FUN_00428650
   Address: 00428650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428650(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0047da94;
  case 1:
    return DAT_0047da98;
  case 2:
    _mbscpy(param_2,&DAT_0047da9c);
    return DAT_0047dadc;
  case 3:
    _mbscpy(param_2,&DAT_0047dae0);
    return DAT_0047db20;
  case 4:
    return DAT_0047db24;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0047dbd4);
    return DAT_0047dbdc;
  case 0x28:
    _mbscpy(param_2,&DAT_0047dbf8);
    return DAT_0047dc00;
  case 0x3c:
    _mbscpy(param_2,&DAT_0047dbec);
    return DAT_0047dbf4;
  case 100:
    _mbscpy(param_2,&DAT_0047dc08);
    return DAT_0047dc10;
  case 0x65:
    _mbscpy(param_2,&DAT_0047dc14);
    return DAT_0047dc1c;
  case 0x66:
    _mbscpy(param_2,&DAT_0047dc20);
    return DAT_0047dc28;
  case 0x78:
    _mbscpy(param_2,&DAT_0047dc38);
    return DAT_0047dc40;
  case 0x79:
    _mbscpy(param_2,&DAT_0047dc44);
    return DAT_0047dc4c;
  }
}


