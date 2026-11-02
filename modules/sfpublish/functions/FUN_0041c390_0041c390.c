/* Module: sfpublish.dll
   Function: FUN_0041c390
   Address: 0041c390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c390(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00441d1c;
  case 1:
    return DAT_00441d20;
  case 2:
    _mbscpy(param_2,&DAT_00441d24);
    return DAT_00441d64;
  case 3:
    _mbscpy(param_2,&DAT_00441d68);
    return DAT_00441da8;
  case 4:
    return DAT_00441dac;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00441e5c);
    return DAT_00441e64;
  case 0x28:
    _mbscpy(param_2,&DAT_00441e80);
    return DAT_00441e88;
  case 0x3c:
    _mbscpy(param_2,&DAT_00441e74);
    return DAT_00441e7c;
  case 100:
    _mbscpy(param_2,&DAT_00441e90);
    return DAT_00441e98;
  case 0x65:
    _mbscpy(param_2,&DAT_00441e9c);
    return DAT_00441ea4;
  case 0x66:
    _mbscpy(param_2,&DAT_00441ea8);
    return DAT_00441eb0;
  case 0x78:
    _mbscpy(param_2,&DAT_00441ec0);
    return DAT_00441ec8;
  case 0x79:
    _mbscpy(param_2,&DAT_00441ecc);
    return DAT_00441ed4;
  }
}


