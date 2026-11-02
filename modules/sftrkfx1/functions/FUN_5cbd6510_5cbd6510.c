/* Module: sftrkfx1.dll
   Function: FUN_5cbd6510
   Address: 5cbd6510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbd6510(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5cc1159c;
  case 1:
    return DAT_5cc115a0;
  case 2:
    _mbscpy(param_2,&DAT_5cc115a4);
    return DAT_5cc115e4;
  case 3:
    _mbscpy(param_2,&DAT_5cc115e8);
    return DAT_5cc11628;
  case 4:
    return DAT_5cc1162c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5cc116dc);
    return DAT_5cc116e4;
  case 0x28:
    _mbscpy(param_2,&DAT_5cc11700);
    return DAT_5cc11708;
  case 0x3c:
    _mbscpy(param_2,&DAT_5cc116f4);
    return DAT_5cc116fc;
  case 100:
    _mbscpy(param_2,&DAT_5cc11710);
    return DAT_5cc11718;
  case 0x65:
    _mbscpy(param_2,&DAT_5cc1171c);
    return DAT_5cc11724;
  case 0x66:
    _mbscpy(param_2,&DAT_5cc11728);
    return DAT_5cc11730;
  case 0x78:
    _mbscpy(param_2,&DAT_5cc11740);
    return DAT_5cc11748;
  case 0x79:
    _mbscpy(param_2,&DAT_5cc1174c);
    return DAT_5cc11754;
  }
}


