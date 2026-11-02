/* Module: sfcdi.dll
   Function: FUN_5bf28d80
   Address: 5bf28d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf28d80(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5bf7611c;
  case 1:
    return DAT_5bf76120;
  case 2:
    _mbscpy(param_2,&DAT_5bf76124);
    return DAT_5bf76164;
  case 3:
    _mbscpy(param_2,&DAT_5bf76168);
    return DAT_5bf761a8;
  case 4:
    return DAT_5bf761ac;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5bf7625c);
    return DAT_5bf76264;
  case 0x28:
    _mbscpy(param_2,&DAT_5bf76280);
    return DAT_5bf76288;
  case 0x3c:
    _mbscpy(param_2,&DAT_5bf76274);
    return DAT_5bf7627c;
  case 100:
    _mbscpy(param_2,&DAT_5bf76290);
    return DAT_5bf76298;
  case 0x65:
    _mbscpy(param_2,&DAT_5bf7629c);
    return DAT_5bf762a4;
  case 0x66:
    _mbscpy(param_2,&DAT_5bf762a8);
    return DAT_5bf762b0;
  case 0x78:
    _mbscpy(param_2,&DAT_5bf762c0);
    return DAT_5bf762c8;
  case 0x79:
    _mbscpy(param_2,&DAT_5bf762cc);
    return DAT_5bf762d4;
  }
}


