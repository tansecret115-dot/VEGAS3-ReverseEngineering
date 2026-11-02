/* Module: aifplug.dll
   Function: FUN_5fbda4f0
   Address: 5fbda4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbda4f0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5fc099b4;
  case 1:
    return DAT_5fc099b8;
  case 2:
    _mbscpy(param_2,&DAT_5fc099bc);
    return DAT_5fc099fc;
  case 3:
    _mbscpy(param_2,&DAT_5fc09a00);
    return DAT_5fc09a40;
  case 4:
    return DAT_5fc09a44;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5fc09af4);
    return DAT_5fc09afc;
  case 0x28:
    _mbscpy(param_2,&DAT_5fc09b18);
    return DAT_5fc09b20;
  case 0x3c:
    _mbscpy(param_2,&DAT_5fc09b0c);
    return DAT_5fc09b14;
  case 100:
    _mbscpy(param_2,&DAT_5fc09b28);
    return DAT_5fc09b30;
  case 0x65:
    _mbscpy(param_2,&DAT_5fc09b34);
    return DAT_5fc09b3c;
  case 0x66:
    _mbscpy(param_2,&DAT_5fc09b40);
    return DAT_5fc09b48;
  case 0x78:
    _mbscpy(param_2,&DAT_5fc09b58);
    return DAT_5fc09b60;
  case 0x79:
    _mbscpy(param_2,&DAT_5fc09b64);
    return DAT_5fc09b6c;
  }
}


