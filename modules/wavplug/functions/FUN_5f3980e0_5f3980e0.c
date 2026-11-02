/* Module: wavplug.dll
   Function: FUN_5f3980e0
   Address: 5f3980e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3980e0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f3db424;
  case 1:
    return DAT_5f3db428;
  case 2:
    _mbscpy(param_2,&DAT_5f3db42c);
    return DAT_5f3db46c;
  case 3:
    _mbscpy(param_2,&DAT_5f3db470);
    return DAT_5f3db4b0;
  case 4:
    return DAT_5f3db4b4;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f3db564);
    return DAT_5f3db56c;
  case 0x28:
    _mbscpy(param_2,&DAT_5f3db588);
    return DAT_5f3db590;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f3db57c);
    return DAT_5f3db584;
  case 100:
    _mbscpy(param_2,&DAT_5f3db598);
    return DAT_5f3db5a0;
  case 0x65:
    _mbscpy(param_2,&DAT_5f3db5a4);
    return DAT_5f3db5ac;
  case 0x66:
    _mbscpy(param_2,&DAT_5f3db5b0);
    return DAT_5f3db5b8;
  case 0x78:
    _mbscpy(param_2,&DAT_5f3db5c8);
    return DAT_5f3db5d0;
  case 0x79:
    _mbscpy(param_2,&DAT_5f3db5d4);
    return DAT_5f3db5dc;
  }
}


