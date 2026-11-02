/* Module: vidpcore.dll
   Function: FUN_5deb8680
   Address: 5deb8680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deb8680(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5df42f7c;
  case 1:
    return DAT_5df42f80;
  case 2:
    _mbscpy(param_2,&DAT_5df42f84);
    return DAT_5df42fc4;
  case 3:
    _mbscpy(param_2,&DAT_5df42fc8);
    return DAT_5df43008;
  case 4:
    return DAT_5df4300c;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5df430bc);
    return DAT_5df430c4;
  case 0x28:
    _mbscpy(param_2,&DAT_5df430e0);
    return DAT_5df430e8;
  case 0x3c:
    _mbscpy(param_2,&DAT_5df430d4);
    return DAT_5df430dc;
  case 100:
    _mbscpy(param_2,&DAT_5df430f0);
    return DAT_5df430f8;
  case 0x65:
    _mbscpy(param_2,&DAT_5df430fc);
    return DAT_5df43104;
  case 0x66:
    _mbscpy(param_2,&DAT_5df43108);
    return DAT_5df43110;
  case 0x78:
    _mbscpy(param_2,&DAT_5df43120);
    return DAT_5df43128;
  case 0x79:
    _mbscpy(param_2,&DAT_5df4312c);
    return DAT_5df43134;
  }
}


