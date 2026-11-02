/* Module: sfxpfx2.dll
   Function: FUN_5c8bdaa0
   Address: 5c8bdaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_5c8bdaa0(int param_1,int param_2,int param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
  if ((param_3 != 0) && (param_1 <= param_3)) {
    puVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10ca);
    return puVar1;
  }
  puVar1 = FUN_5c8a7240((int)DAT_5c8e93f8,0x18);
  if (puVar1 == (uchar *)0x0) {
    puVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10c9);
    return puVar1;
  }
  if (param_2 < 0) {
LAB_5c8bdb54:
    _mbscpy(local_18,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_5c8bdb54;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xz");
    local_16 = (char)param_2 + '0';
  }
  iVar2 = FUN_5c8b65c0(puVar1,local_18);
  if (param_4 != (uchar *)0x0) {
    _mbscpy(puVar1 + iVar2,param_4);
  }
  return puVar1;
}


