/* Module: sfcd.cdd
   Function: FUN_00426ad0
   Address: 00426ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426ad0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_004419d4;
  case 1:
    return DAT_004419d8;
  case 2:
    _mbscpy(param_2,&DAT_004419dc);
    return DAT_00441a1c;
  case 3:
    _mbscpy(param_2,&DAT_00441a20);
    return DAT_00441a60;
  case 4:
    return DAT_00441a64;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00441b14);
    return DAT_00441b1c;
  case 0x28:
    _mbscpy(param_2,&DAT_00441b38);
    return DAT_00441b40;
  case 0x3c:
    _mbscpy(param_2,&DAT_00441b2c);
    return DAT_00441b34;
  case 100:
    _mbscpy(param_2,&DAT_00441b48);
    return DAT_00441b50;
  case 0x65:
    _mbscpy(param_2,&DAT_00441b54);
    return DAT_00441b5c;
  case 0x66:
    _mbscpy(param_2,&DAT_00441b60);
    return DAT_00441b68;
  case 0x78:
    _mbscpy(param_2,&DAT_00441b78);
    return DAT_00441b80;
  case 0x79:
    _mbscpy(param_2,&DAT_00441b84);
    return DAT_00441b8c;
  }
}


