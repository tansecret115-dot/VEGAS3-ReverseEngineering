/* Module: sfpublish.dll
   Function: FUN_0041bf10
   Address: 0041bf10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041bf10(uint *param_1,uint param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  CHAR local_48 [8];
  uchar local_40 [64];
  
  if (param_1 != (uint *)0x0) {
    puVar5 = param_1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    uVar2 = DAT_00441d18;
    if (param_2 < DAT_00441d18) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00441d18;
    puVar6 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    *param_1 = uVar2;
    return 0;
  }
  puVar5 = &DAT_00441d18;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00441d18 = 0x1c0;
  DAT_00441d1c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00441d20 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00441d24,0x40);
  DAT_00441d64 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00441d68,0x40);
  DAT_00441da8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00441dac = atoi(local_48);
  _DAT_00441df0 = GetLocaleInfoA(0x400,6,&DAT_00441db0,0x40);
  _DAT_00441df0 = _DAT_00441df0 + -1;
  _DAT_00441e34 = GetLocaleInfoA(0x400,0x1002,&DAT_00441df4,0x40);
  _DAT_00441e34 = _DAT_00441e34 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00441e38,8);
  DAT_00441e40 = iVar4 + -1;
  DAT_00441e4c = 1;
  _mbscpy(&DAT_00441e44,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00441e50,8);
  DAT_00441e58 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00441e5c,8);
  DAT_00441e64 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00441e68 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00441e6c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00441e70 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00441e74,8);
  DAT_00441e7c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00441e80,8);
  DAT_00441e88 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00441e8c = atoi(local_48);
  lstrcpynA(&DAT_00441e90,":",8);
  DAT_00441e97 = 0;
  DAT_00441e98 = lstrlenA(&DAT_00441e90);
  FUN_00418260((uchar *)"SMPTE.Whole",&DAT_00441e90);
  lstrcpynA(&DAT_00441e9c,".",8);
  DAT_00441ea3 = 0;
  DAT_00441ea4 = lstrlenA(&DAT_00441e9c);
  FUN_00418260((uchar *)"SMPTE.NonDrop",&DAT_00441e9c);
  lstrcpynA(&DAT_00441ea8,",",8);
  DAT_00441eaf = 0;
  DAT_00441eb0 = lstrlenA(&DAT_00441ea8);
  FUN_00418260((uchar *)"SMPTE.Drop",&DAT_00441ea8);
  pBVar1 = FUN_0041c790(DAT_00441c78,0x10cc);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0041c790(DAT_00441c78,0x10cd);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00441ec0,".",8);
  DAT_00441ec7 = 0;
  DAT_00441ec8 = lstrlenA(&DAT_00441ec0);
  FUN_00418260("m.b",&DAT_00441ec0);
  lstrcpynA(&DAT_00441ecc,".",8);
  DAT_00441ed3 = 0;
  DAT_00441ed4 = lstrlenA(&DAT_00441ecc);
  FUN_00418260("b.t",&DAT_00441ecc);
  pBVar1 = FUN_0041c790(DAT_00441c78,0x10ce);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0041c790(DAT_00441c78,0x10cf);
  FUN_00418d60(local_40,pBVar1);
  FUN_00418260((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


