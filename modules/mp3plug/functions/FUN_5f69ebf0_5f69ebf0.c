/* Module: mp3plug.dll
   Function: FUN_5f69ebf0
   Address: 5f69ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f69ebf0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f74d52c;
  case 1:
    return DAT_5f74d530;
  case 2:
    _mbscpy(param_2,&DAT_5f74d534);
    return DAT_5f74d574;
  case 3:
    _mbscpy(param_2,&DAT_5f74d578);
    return DAT_5f74d5b8;
  case 4:
    return DAT_5f74d5bc;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f74d66c);
    return DAT_5f74d674;
  case 0x28:
    _mbscpy(param_2,&DAT_5f74d690);
    return DAT_5f74d698;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f74d684);
    return DAT_5f74d68c;
  case 100:
    _mbscpy(param_2,&DAT_5f74d6a0);
    return DAT_5f74d6a8;
  case 0x65:
    _mbscpy(param_2,&DAT_5f74d6ac);
    return DAT_5f74d6b4;
  case 0x66:
    _mbscpy(param_2,&DAT_5f74d6b8);
    return DAT_5f74d6c0;
  case 0x78:
    _mbscpy(param_2,&DAT_5f74d6d0);
    return DAT_5f74d6d8;
  case 0x79:
    _mbscpy(param_2,&DAT_5f74d6dc);
    return DAT_5f74d6e4;
  }
}


