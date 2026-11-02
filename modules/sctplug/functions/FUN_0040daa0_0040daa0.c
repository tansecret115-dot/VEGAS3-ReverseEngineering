/* Module: sctplug.dll
   Function: FUN_0040daa0
   Address: 0040daa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040daa0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0043cdd4;
  case 1:
    return DAT_0043cdd8;
  case 2:
    _mbscpy(param_2,&DAT_0043cddc);
    return DAT_0043ce1c;
  case 3:
    _mbscpy(param_2,&DAT_0043ce20);
    return DAT_0043ce60;
  case 4:
    return DAT_0043ce64;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0043cf14);
    return DAT_0043cf1c;
  case 0x28:
    _mbscpy(param_2,&DAT_0043cf38);
    return DAT_0043cf40;
  case 0x3c:
    _mbscpy(param_2,&DAT_0043cf2c);
    return DAT_0043cf34;
  case 100:
    _mbscpy(param_2,&DAT_0043cf48);
    return DAT_0043cf50;
  case 0x65:
    _mbscpy(param_2,&DAT_0043cf54);
    return DAT_0043cf5c;
  case 0x66:
    _mbscpy(param_2,&DAT_0043cf60);
    return DAT_0043cf68;
  case 0x78:
    _mbscpy(param_2,&DAT_0043cf78);
    return DAT_0043cf80;
  case 0x79:
    _mbscpy(param_2,&DAT_0043cf84);
    return DAT_0043cf8c;
  }
}


