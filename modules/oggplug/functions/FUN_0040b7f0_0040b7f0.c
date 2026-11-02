/* Module: oggplug.dll
   Function: FUN_0040b7f0
   Address: 0040b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b7f0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00510f3c;
  case 1:
    return DAT_00510f40;
  case 2:
    _mbscpy(param_2,&DAT_00510f44);
    return DAT_00510f84;
  case 3:
    _mbscpy(param_2,&DAT_00510f88);
    return DAT_00510fc8;
  case 4:
    return DAT_00510fcc;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0051107c);
    return DAT_00511084;
  case 0x28:
    _mbscpy(param_2,&DAT_005110a0);
    return DAT_005110a8;
  case 0x3c:
    _mbscpy(param_2,&DAT_00511094);
    return DAT_0051109c;
  case 100:
    _mbscpy(param_2,&DAT_005110b0);
    return DAT_005110b8;
  case 0x65:
    _mbscpy(param_2,&DAT_005110bc);
    return DAT_005110c4;
  case 0x66:
    _mbscpy(param_2,&DAT_005110c8);
    return DAT_005110d0;
  case 0x78:
    _mbscpy(param_2,&DAT_005110e0);
    return DAT_005110e8;
  case 0x79:
    _mbscpy(param_2,&DAT_005110ec);
    return DAT_005110f4;
  }
}


