/* Module: wmfplug2.dll
   Function: FUN_00420900
   Address: 00420900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420900(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00489ed4;
  case 1:
    return DAT_00489ed8;
  case 2:
    _mbscpy(param_2,&DAT_00489edc);
    return DAT_00489f1c;
  case 3:
    _mbscpy(param_2,&DAT_00489f20);
    return DAT_00489f60;
  case 4:
    return DAT_00489f64;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0048a014);
    return DAT_0048a01c;
  case 0x28:
    _mbscpy(param_2,&DAT_0048a038);
    return DAT_0048a040;
  case 0x3c:
    _mbscpy(param_2,&DAT_0048a02c);
    return DAT_0048a034;
  case 100:
    _mbscpy(param_2,&DAT_0048a048);
    return DAT_0048a050;
  case 0x65:
    _mbscpy(param_2,&DAT_0048a054);
    return DAT_0048a05c;
  case 0x66:
    _mbscpy(param_2,&DAT_0048a060);
    return DAT_0048a068;
  case 0x78:
    _mbscpy(param_2,&DAT_0048a078);
    return DAT_0048a080;
  case 0x79:
    _mbscpy(param_2,&DAT_0048a084);
    return DAT_0048a08c;
  }
}


