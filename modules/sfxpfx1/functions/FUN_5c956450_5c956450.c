/* Module: sfxpfx1.dll
   Function: FUN_5c956450
   Address: 5c956450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c956450(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5c998844;
  case 1:
    return DAT_5c998848;
  case 2:
    _mbscpy(param_2,&DAT_5c99884c);
    return DAT_5c99888c;
  case 3:
    _mbscpy(param_2,&DAT_5c998890);
    return DAT_5c9988d0;
  case 4:
    return DAT_5c9988d4;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5c998984);
    return DAT_5c99898c;
  case 0x28:
    _mbscpy(param_2,&DAT_5c9989a8);
    return DAT_5c9989b0;
  case 0x3c:
    _mbscpy(param_2,&DAT_5c99899c);
    return DAT_5c9989a4;
  case 100:
    _mbscpy(param_2,&DAT_5c9989b8);
    return DAT_5c9989c0;
  case 0x65:
    _mbscpy(param_2,&DAT_5c9989c4);
    return DAT_5c9989cc;
  case 0x66:
    _mbscpy(param_2,&DAT_5c9989d0);
    return DAT_5c9989d8;
  case 0x78:
    _mbscpy(param_2,&DAT_5c9989e8);
    return DAT_5c9989f0;
  case 0x79:
    _mbscpy(param_2,&DAT_5c9989f4);
    return DAT_5c9989fc;
  }
}


