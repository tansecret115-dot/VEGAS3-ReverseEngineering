/* Module: sfpaplug.dll
   Function: FUN_00416b60
   Address: 00416b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416b60(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_0045c424;
  case 1:
    return DAT_0045c428;
  case 2:
    _mbscpy(param_2,&DAT_0045c42c);
    return DAT_0045c46c;
  case 3:
    _mbscpy(param_2,&DAT_0045c470);
    return DAT_0045c4b0;
  case 4:
    return DAT_0045c4b4;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_0045c564);
    return DAT_0045c56c;
  case 0x28:
    _mbscpy(param_2,&DAT_0045c588);
    return DAT_0045c590;
  case 0x3c:
    _mbscpy(param_2,&DAT_0045c57c);
    return DAT_0045c584;
  case 100:
    _mbscpy(param_2,&DAT_0045c598);
    return DAT_0045c5a0;
  case 0x65:
    _mbscpy(param_2,&DAT_0045c5a4);
    return DAT_0045c5ac;
  case 0x66:
    _mbscpy(param_2,&DAT_0045c5b0);
    return DAT_0045c5b8;
  case 0x78:
    _mbscpy(param_2,&DAT_0045c5c8);
    return DAT_0045c5d0;
  case 0x79:
    _mbscpy(param_2,&DAT_0045c5d4);
    return DAT_0045c5dc;
  }
}


