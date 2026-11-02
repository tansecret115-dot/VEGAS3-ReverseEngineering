/* Module: sfppack1.dll
   Function: FUN_5cddcb00
   Address: 5cddcb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cddcb00(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5ce238cc;
  case 1:
    return DAT_5ce238d0;
  case 2:
    _mbscpy(param_2,&DAT_5ce238d4);
    return DAT_5ce23914;
  case 3:
    _mbscpy(param_2,&DAT_5ce23918);
    return DAT_5ce23958;
  case 4:
    return DAT_5ce2395c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5ce23a0c);
    return DAT_5ce23a14;
  case 0x28:
    _mbscpy(param_2,&DAT_5ce23a30);
    return DAT_5ce23a38;
  case 0x3c:
    _mbscpy(param_2,&DAT_5ce23a24);
    return DAT_5ce23a2c;
  case 100:
    _mbscpy(param_2,&DAT_5ce23a40);
    return DAT_5ce23a48;
  case 0x65:
    _mbscpy(param_2,&DAT_5ce23a4c);
    return DAT_5ce23a54;
  case 0x66:
    _mbscpy(param_2,&DAT_5ce23a58);
    return DAT_5ce23a60;
  case 0x78:
    _mbscpy(param_2,&DAT_5ce23a70);
    return DAT_5ce23a78;
  case 0x79:
    _mbscpy(param_2,&DAT_5ce23a7c);
    return DAT_5ce23a84;
  }
}


