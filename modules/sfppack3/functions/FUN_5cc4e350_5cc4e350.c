/* Module: sfppack3.dll
   Function: FUN_5cc4e350
   Address: 5cc4e350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc4e350(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5cc983a4;
  case 1:
    return DAT_5cc983a8;
  case 2:
    _mbscpy(param_2,&DAT_5cc983ac);
    return DAT_5cc983ec;
  case 3:
    _mbscpy(param_2,&DAT_5cc983f0);
    return DAT_5cc98430;
  case 4:
    return DAT_5cc98434;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5cc984e4);
    return DAT_5cc984ec;
  case 0x28:
    _mbscpy(param_2,&DAT_5cc98508);
    return DAT_5cc98510;
  case 0x3c:
    _mbscpy(param_2,&DAT_5cc984fc);
    return DAT_5cc98504;
  case 100:
    _mbscpy(param_2,&DAT_5cc98518);
    return DAT_5cc98520;
  case 0x65:
    _mbscpy(param_2,&DAT_5cc98524);
    return DAT_5cc9852c;
  case 0x66:
    _mbscpy(param_2,&DAT_5cc98530);
    return DAT_5cc98538;
  case 0x78:
    _mbscpy(param_2,&DAT_5cc98548);
    return DAT_5cc98550;
  case 0x79:
    _mbscpy(param_2,&DAT_5cc98554);
    return DAT_5cc9855c;
  }
}


