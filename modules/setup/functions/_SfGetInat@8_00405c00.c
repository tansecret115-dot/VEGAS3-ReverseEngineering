/* Module: Setup.exe
   Function: _SfGetInat@8
   Address: 00405c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGetInat_8(undefined4 param_1,uchar *param_2)

{
                    /* 0x5c00  150  _SfGetInat@8 */
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_00448ea4;
  case 1:
    return DAT_00448ea8;
  case 2:
    _mbscpy(param_2,&DAT_00448eac);
    return DAT_00448eec;
  case 3:
    _mbscpy(param_2,&DAT_00448ef0);
    return DAT_00448f30;
  case 4:
    return DAT_00448f34;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_00448fe4);
    return DAT_00448fec;
  case 0x28:
    _mbscpy(param_2,&DAT_00449008);
    return DAT_00449010;
  case 0x3c:
    _mbscpy(param_2,&DAT_00448ffc);
    return DAT_00449004;
  case 100:
    _mbscpy(param_2,&DAT_00449018);
    return DAT_00449020;
  case 0x65:
    _mbscpy(param_2,&DAT_00449024);
    return DAT_0044902c;
  case 0x66:
    _mbscpy(param_2,&DAT_00449030);
    return DAT_00449038;
  case 0x78:
    _mbscpy(param_2,&DAT_00449048);
    return DAT_00449050;
  case 0x79:
    _mbscpy(param_2,&DAT_00449054);
    return DAT_0044905c;
  }
}


