/* Module: sfxpfx2.dll
   Function: FUN_5c8a7d80
   Address: 5c8a7d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8a7d80(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5c8e949c;
  case 1:
    return DAT_5c8e94a0;
  case 2:
    _mbscpy(param_2,&DAT_5c8e94a4);
    return DAT_5c8e94e4;
  case 3:
    _mbscpy(param_2,&DAT_5c8e94e8);
    return DAT_5c8e9528;
  case 4:
    return DAT_5c8e952c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5c8e95dc);
    return DAT_5c8e95e4;
  case 0x28:
    _mbscpy(param_2,&DAT_5c8e9600);
    return DAT_5c8e9608;
  case 0x3c:
    _mbscpy(param_2,&DAT_5c8e95f4);
    return DAT_5c8e95fc;
  case 100:
    _mbscpy(param_2,&DAT_5c8e9610);
    return DAT_5c8e9618;
  case 0x65:
    _mbscpy(param_2,&DAT_5c8e961c);
    return DAT_5c8e9624;
  case 0x66:
    _mbscpy(param_2,&DAT_5c8e9628);
    return DAT_5c8e9630;
  case 0x78:
    _mbscpy(param_2,&DAT_5c8e9640);
    return DAT_5c8e9648;
  case 0x79:
    _mbscpy(param_2,&DAT_5c8e964c);
    return DAT_5c8e9654;
  }
}


