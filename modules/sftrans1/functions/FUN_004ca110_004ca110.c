/* Module: sftrans1.dll
   Function: FUN_004ca110
   Address: 004ca110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ca110(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0057b92c;
  case 1:
    return DAT_0057b930;
  case 2:
    _mbscpy(param_2,&DAT_0057b934);
    return DAT_0057b974;
  case 3:
    _mbscpy(param_2,&DAT_0057b978);
    return DAT_0057b9b8;
  case 4:
    return DAT_0057b9bc;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0057ba6c);
    return DAT_0057ba74;
  case 0x28:
    _mbscpy(param_2,&DAT_0057ba90);
    return DAT_0057ba98;
  case 0x3c:
    _mbscpy(param_2,&DAT_0057ba84);
    return DAT_0057ba8c;
  case 100:
    _mbscpy(param_2,&DAT_0057baa0);
    return DAT_0057baa8;
  case 0x65:
    _mbscpy(param_2,&DAT_0057baac);
    return DAT_0057bab4;
  case 0x66:
    _mbscpy(param_2,&DAT_0057bab8);
    return DAT_0057bac0;
  case 0x78:
    _mbscpy(param_2,&DAT_0057bad0);
    return DAT_0057bad8;
  case 0x79:
    _mbscpy(param_2,&DAT_0057badc);
    return DAT_0057bae4;
  }
}


