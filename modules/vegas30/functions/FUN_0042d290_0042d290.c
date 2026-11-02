/* Module: vegas30.exe
   Function: FUN_0042d290
   Address: 0042d290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d290(undefined4 param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_dac [260];
  undefined1 local_ca8 [4];
  undefined4 local_ca4 [66];
  uchar local_b9c [268];
  uchar local_a90 [280];
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_60;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  undefined4 local_28;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_0042cfe0(local_ca8);
  FUN_0043fc90(local_ca4);
  iVar1 = FUN_0042a4c0(param_1,local_ca8);
  if (iVar1 != 0) goto LAB_0042d437;
  if (local_30 == 0) {
    iVar1 = FUN_0042d240(param_1,local_60,local_a90);
    FUN_004e7610();
    if ((-1 < iVar1) && (iVar1 = FUN_004e7770(), iVar1 == 0)) {
      local_30 = 1;
      _mbscpy(local_b9c,local_a90);
      DAT_0064a514 = local_978;
      DAT_0064a56c = local_974;
    }
  }
  if ((local_4c != 2) || (iVar1 = FUN_0043fe70(param_1,local_ca4[0],0,local_40,local_3c), iVar1 < 0)
     ) goto LAB_0042d437;
  puVar2 = (uchar *)_SfGetFileNamePtrA_4(local_b9c);
  _mbscpy(local_dac,puVar2);
  puVar3 = (uchar *)0x0;
  puVar2 = local_dac;
  if (local_dac[0] == '\0') {
LAB_0042d3bb:
    puVar3 = puVar2;
  }
  else {
    do {
      if (local_dac[0] == '.') {
        puVar3 = puVar2;
      }
      puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
      local_dac[0] = *puVar2;
    } while (local_dac[0] != '\0');
    if (puVar3 == (uchar *)0x0) goto LAB_0042d3bb;
  }
  *puVar3 = '\0';
  iVar1 = FUN_0042a310(param_1,local_ca4[0],local_dac,local_b9c,(local_10 != 0) + '\x01',local_8,
                       local_28);
  if ((-1 < iVar1) && (local_c != 0)) {
    FUN_0042a310(param_1,local_ca4[0],local_dac,local_b9c,1,local_8,local_28);
  }
LAB_0042d437:
  FUN_0043fd20(local_ca4[0]);
  return 0;
}


