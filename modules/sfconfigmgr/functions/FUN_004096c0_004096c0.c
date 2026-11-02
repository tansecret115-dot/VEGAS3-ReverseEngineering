/* Module: sfconfigmgr.dll
   Function: FUN_004096c0
   Address: 004096c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004096c0(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00423174;
  case 1:
    return DAT_00423178;
  case 2:
    _mbscpy(param_2,&DAT_0042317c);
    return DAT_004231bc;
  case 3:
    _mbscpy(param_2,&DAT_004231c0);
    return DAT_00423200;
  case 4:
    return DAT_00423204;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_004232b4);
    return DAT_004232bc;
  case 0x28:
    _mbscpy(param_2,&DAT_004232d8);
    return DAT_004232e0;
  case 0x3c:
    _mbscpy(param_2,&DAT_004232cc);
    return DAT_004232d4;
  case 100:
    _mbscpy(param_2,&DAT_004232e8);
    return DAT_004232f0;
  case 0x65:
    _mbscpy(param_2,&DAT_004232f4);
    return DAT_004232fc;
  case 0x66:
    _mbscpy(param_2,&DAT_00423300);
    return DAT_00423308;
  case 0x78:
    _mbscpy(param_2,&DAT_00423318);
    return DAT_00423320;
  case 0x79:
    _mbscpy(param_2,&DAT_00423324);
    return DAT_0042332c;
  }
}


