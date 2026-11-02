/* Module: sfnetmedia.dll
   Function: FUN_00418d20
   Address: 00418d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418d20(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00441e04;
  case 1:
    return DAT_00441e08;
  case 2:
    _mbscpy(param_2,&DAT_00441e0c);
    return DAT_00441e4c;
  case 3:
    _mbscpy(param_2,&DAT_00441e50);
    return DAT_00441e90;
  case 4:
    return DAT_00441e94;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00441f44);
    return DAT_00441f4c;
  case 0x28:
    _mbscpy(param_2,&DAT_00441f68);
    return DAT_00441f70;
  case 0x3c:
    _mbscpy(param_2,&DAT_00441f5c);
    return DAT_00441f64;
  case 100:
    _mbscpy(param_2,&DAT_00441f78);
    return DAT_00441f80;
  case 0x65:
    _mbscpy(param_2,&DAT_00441f84);
    return DAT_00441f8c;
  case 0x66:
    _mbscpy(param_2,&DAT_00441f90);
    return DAT_00441f98;
  case 0x78:
    _mbscpy(param_2,&DAT_00441fa8);
    return DAT_00441fb0;
  case 0x79:
    _mbscpy(param_2,&DAT_00441fb4);
    return DAT_00441fbc;
  }
}


