/* Module: mcplug.dll
   Function: FUN_00419e10
   Address: 00419e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419e10(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00487f7c;
  case 1:
    return DAT_00487f80;
  case 2:
    _mbscpy(param_2,&DAT_00487f84);
    return DAT_00487fc4;
  case 3:
    _mbscpy(param_2,&DAT_00487fc8);
    return DAT_00488008;
  case 4:
    return DAT_0048800c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_004880bc);
    return DAT_004880c4;
  case 0x28:
    _mbscpy(param_2,&DAT_004880e0);
    return DAT_004880e8;
  case 0x3c:
    _mbscpy(param_2,&DAT_004880d4);
    return DAT_004880dc;
  case 100:
    _mbscpy(param_2,&DAT_004880f0);
    return DAT_004880f8;
  case 0x65:
    _mbscpy(param_2,&DAT_004880fc);
    return DAT_00488104;
  case 0x66:
    _mbscpy(param_2,&DAT_00488108);
    return DAT_00488110;
  case 0x78:
    _mbscpy(param_2,&DAT_00488120);
    return DAT_00488128;
  case 0x79:
    _mbscpy(param_2,&DAT_0048812c);
    return DAT_00488134;
  }
}


