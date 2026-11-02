/* Module: qt4plug.dll
   Function: FUN_5f528430
   Address: 5f528430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f528430(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f5a41fc;
  case 1:
    return DAT_5f5a4200;
  case 2:
    _mbscpy(param_2,&DAT_5f5a4204);
    return DAT_5f5a4244;
  case 3:
    _mbscpy(param_2,&DAT_5f5a4248);
    return DAT_5f5a4288;
  case 4:
    return DAT_5f5a428c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f5a433c);
    return DAT_5f5a4344;
  case 0x28:
    _mbscpy(param_2,&DAT_5f5a4360);
    return DAT_5f5a4368;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f5a4354);
    return DAT_5f5a435c;
  case 100:
    _mbscpy(param_2,&DAT_5f5a4370);
    return DAT_5f5a4378;
  case 0x65:
    _mbscpy(param_2,&DAT_5f5a437c);
    return DAT_5f5a4384;
  case 0x66:
    _mbscpy(param_2,&DAT_5f5a4388);
    return DAT_5f5a4390;
  case 0x78:
    _mbscpy(param_2,&DAT_5f5a43a0);
    return DAT_5f5a43a8;
  case 0x79:
    _mbscpy(param_2,&DAT_5f5a43ac);
    return DAT_5f5a43b4;
  }
}


