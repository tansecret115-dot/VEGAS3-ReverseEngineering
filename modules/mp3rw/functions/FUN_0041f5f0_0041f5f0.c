/* Module: mp3rw.dll
   Function: FUN_0041f5f0
   Address: 0041f5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041f5f0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_004a999c;
  case 1:
    return DAT_004a99a0;
  case 2:
    _mbscpy(param_2,&DAT_004a99a4);
    return DAT_004a99e4;
  case 3:
    _mbscpy(param_2,&DAT_004a99e8);
    return DAT_004a9a28;
  case 4:
    return DAT_004a9a2c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_004a9adc);
    return DAT_004a9ae4;
  case 0x28:
    _mbscpy(param_2,&DAT_004a9b00);
    return DAT_004a9b08;
  case 0x3c:
    _mbscpy(param_2,&DAT_004a9af4);
    return DAT_004a9afc;
  case 100:
    _mbscpy(param_2,&DAT_004a9b10);
    return DAT_004a9b18;
  case 0x65:
    _mbscpy(param_2,&DAT_004a9b1c);
    return DAT_004a9b24;
  case 0x66:
    _mbscpy(param_2,&DAT_004a9b28);
    return DAT_004a9b30;
  case 0x78:
    _mbscpy(param_2,&DAT_004a9b40);
    return DAT_004a9b48;
  case 0x79:
    _mbscpy(param_2,&DAT_004a9b4c);
    return DAT_004a9b54;
  }
}


