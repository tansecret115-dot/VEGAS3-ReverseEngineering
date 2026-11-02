/* Module: extmondrv.dll
   Function: FUN_004129f0
   Address: 004129f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004129f0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0045b234;
  case 1:
    return DAT_0045b238;
  case 2:
    _mbscpy(param_2,&DAT_0045b23c);
    return DAT_0045b27c;
  case 3:
    _mbscpy(param_2,&DAT_0045b280);
    return DAT_0045b2c0;
  case 4:
    return DAT_0045b2c4;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0045b374);
    return DAT_0045b37c;
  case 0x28:
    _mbscpy(param_2,&DAT_0045b398);
    return DAT_0045b3a0;
  case 0x3c:
    _mbscpy(param_2,&DAT_0045b38c);
    return DAT_0045b394;
  case 100:
    _mbscpy(param_2,&DAT_0045b3a8);
    return DAT_0045b3b0;
  case 0x65:
    _mbscpy(param_2,&DAT_0045b3b4);
    return DAT_0045b3bc;
  case 0x66:
    _mbscpy(param_2,&DAT_0045b3c0);
    return DAT_0045b3c8;
  case 0x78:
    _mbscpy(param_2,&DAT_0045b3d8);
    return DAT_0045b3e0;
  case 0x79:
    _mbscpy(param_2,&DAT_0045b3e4);
    return DAT_0045b3ec;
  }
}


