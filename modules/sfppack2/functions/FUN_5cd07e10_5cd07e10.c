/* Module: sfppack2.dll
   Function: FUN_5cd07e10
   Address: 5cd07e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd07e10(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5cd67adc;
  case 1:
    return DAT_5cd67ae0;
  case 2:
    _mbscpy(param_2,&DAT_5cd67ae4);
    return DAT_5cd67b24;
  case 3:
    _mbscpy(param_2,&DAT_5cd67b28);
    return DAT_5cd67b68;
  case 4:
    return DAT_5cd67b6c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5cd67c1c);
    return DAT_5cd67c24;
  case 0x28:
    _mbscpy(param_2,&DAT_5cd67c40);
    return DAT_5cd67c48;
  case 0x3c:
    _mbscpy(param_2,&DAT_5cd67c34);
    return DAT_5cd67c3c;
  case 100:
    _mbscpy(param_2,&DAT_5cd67c50);
    return DAT_5cd67c58;
  case 0x65:
    _mbscpy(param_2,&DAT_5cd67c5c);
    return DAT_5cd67c64;
  case 0x66:
    _mbscpy(param_2,&DAT_5cd67c68);
    return DAT_5cd67c70;
  case 0x78:
    _mbscpy(param_2,&DAT_5cd67c80);
    return DAT_5cd67c88;
  case 0x79:
    _mbscpy(param_2,&DAT_5cd67c8c);
    return DAT_5cd67c94;
  }
}


