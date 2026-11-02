/* Module: vfplugs.dll
   Function: FUN_0042d670
   Address: 0042d670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d670(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00494b1c;
  case 1:
    return DAT_00494b20;
  case 2:
    _mbscpy(param_2,&DAT_00494b24);
    return DAT_00494b64;
  case 3:
    _mbscpy(param_2,&DAT_00494b68);
    return DAT_00494ba8;
  case 4:
    return DAT_00494bac;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00494c5c);
    return DAT_00494c64;
  case 0x28:
    _mbscpy(param_2,&DAT_00494c80);
    return DAT_00494c88;
  case 0x3c:
    _mbscpy(param_2,&DAT_00494c74);
    return DAT_00494c7c;
  case 100:
    _mbscpy(param_2,&DAT_00494c90);
    return DAT_00494c98;
  case 0x65:
    _mbscpy(param_2,&DAT_00494c9c);
    return DAT_00494ca4;
  case 0x66:
    _mbscpy(param_2,&DAT_00494ca8);
    return DAT_00494cb0;
  case 0x78:
    _mbscpy(param_2,&DAT_00494cc0);
    return DAT_00494cc8;
  case 0x79:
    _mbscpy(param_2,&DAT_00494ccc);
    return DAT_00494cd4;
  }
}


