/* Module: gifplug.dll
   Function: FUN_5f6cca60
   Address: 5f6cca60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6cca60(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f70bf94;
  case 1:
    return DAT_5f70bf98;
  case 2:
    _mbscpy(param_2,&DAT_5f70bf9c);
    return DAT_5f70bfdc;
  case 3:
    _mbscpy(param_2,&DAT_5f70bfe0);
    return DAT_5f70c020;
  case 4:
    return DAT_5f70c024;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f70c0d4);
    return DAT_5f70c0dc;
  case 0x28:
    _mbscpy(param_2,&DAT_5f70c0f8);
    return DAT_5f70c100;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f70c0ec);
    return DAT_5f70c0f4;
  case 100:
    _mbscpy(param_2,&DAT_5f70c108);
    return DAT_5f70c110;
  case 0x65:
    _mbscpy(param_2,&DAT_5f70c114);
    return DAT_5f70c11c;
  case 0x66:
    _mbscpy(param_2,&DAT_5f70c120);
    return DAT_5f70c128;
  case 0x78:
    _mbscpy(param_2,&DAT_5f70c138);
    return DAT_5f70c140;
  case 0x79:
    _mbscpy(param_2,&DAT_5f70c144);
    return DAT_5f70c14c;
  }
}


