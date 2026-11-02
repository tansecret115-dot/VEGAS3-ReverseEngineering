/* Module: sfppack3.dll
   Function: FUN_5cc681b0
   Address: 5cc681b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_5cc681b0(int param_1,int param_2,int param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
  if ((param_3 != 0) && (param_1 <= param_3)) {
    puVar1 = FUN_5cc4e750(DAT_5cc98300,0x10ca);
    return puVar1;
  }
  puVar1 = FUN_5cc4d810((int)DAT_5cc98300,0x18);
  if (puVar1 == (uchar *)0x0) {
    puVar1 = FUN_5cc4e750(DAT_5cc98300,0x10c9);
    return puVar1;
  }
  if (param_2 < 0) {
LAB_5cc68264:
    _mbscpy(local_18,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_5cc68264;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xz");
    local_16 = (char)param_2 + '0';
  }
  iVar2 = FUN_5cc60cd0(puVar1,local_18);
  if (param_4 != (uchar *)0x0) {
    _mbscpy(puVar1 + iVar2,param_4);
  }
  return puVar1;
}


