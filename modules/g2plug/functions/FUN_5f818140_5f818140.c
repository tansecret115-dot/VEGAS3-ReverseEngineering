/* Module: g2plug.dll
   Function: FUN_5f818140
   Address: 5f818140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f818140(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f8775c4;
  case 1:
    return DAT_5f8775c8;
  case 2:
    _mbscpy(param_2,&DAT_5f8775cc);
    return DAT_5f87760c;
  case 3:
    _mbscpy(param_2,&DAT_5f877610);
    return DAT_5f877650;
  case 4:
    return DAT_5f877654;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f877704);
    return DAT_5f87770c;
  case 0x28:
    _mbscpy(param_2,&DAT_5f877728);
    return DAT_5f877730;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f87771c);
    return DAT_5f877724;
  case 100:
    _mbscpy(param_2,&DAT_5f877738);
    return DAT_5f877740;
  case 0x65:
    _mbscpy(param_2,&DAT_5f877744);
    return DAT_5f87774c;
  case 0x66:
    _mbscpy(param_2,&DAT_5f877750);
    return DAT_5f877758;
  case 0x78:
    _mbscpy(param_2,&DAT_5f877768);
    return DAT_5f877770;
  case 0x79:
    _mbscpy(param_2,&DAT_5f877774);
    return DAT_5f87777c;
  }
}


