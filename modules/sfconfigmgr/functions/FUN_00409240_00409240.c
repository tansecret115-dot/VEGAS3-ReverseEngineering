/* Module: sfconfigmgr.dll
   Function: FUN_00409240
   Address: 00409240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409240(uint *param_1,uint param_2)

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
    uVar2 = DAT_00423170;
    if (param_2 < DAT_00423170) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00423170;
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
  puVar5 = &DAT_00423170;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00423170 = 0x1c0;
  DAT_00423174 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00423178 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0042317c,0x40);
  DAT_004231bc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_004231c0,0x40);
  DAT_00423200 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00423204 = atoi(local_48);
  _DAT_00423248 = GetLocaleInfoA(0x400,6,&DAT_00423208,0x40);
  _DAT_00423248 = _DAT_00423248 + -1;
  _DAT_0042328c = GetLocaleInfoA(0x400,0x1002,&DAT_0042324c,0x40);
  _DAT_0042328c = _DAT_0042328c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00423290,8);
  DAT_00423298 = iVar4 + -1;
  DAT_004232a4 = 1;
  _mbscpy(&DAT_0042329c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_004232a8,8);
  DAT_004232b0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_004232b4,8);
  DAT_004232bc = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_004232c0 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_004232c4 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_004232c8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_004232cc,8);
  DAT_004232d4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_004232d8,8);
  DAT_004232e0 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_004232e4 = atoi(local_48);
  lstrcpynA(&DAT_004232e8,":",8);
  DAT_004232ef = 0;
  DAT_004232f0 = lstrlenA(&DAT_004232e8);
  FUN_00405590((uchar *)"SMPTE.Whole",&DAT_004232e8);
  lstrcpynA(&DAT_004232f4,".",8);
  DAT_004232fb = 0;
  DAT_004232fc = lstrlenA(&DAT_004232f4);
  FUN_00405590((uchar *)"SMPTE.NonDrop",&DAT_004232f4);
  lstrcpynA(&DAT_00423300,",",8);
  DAT_00423307 = 0;
  DAT_00423308 = lstrlenA(&DAT_00423300);
  FUN_00405590((uchar *)"SMPTE.Drop",&DAT_00423300);
  pBVar1 = FUN_00409ac0(DAT_004230d0,0x10cc);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00409ac0(DAT_004230d0,0x10cd);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00423318,".",8);
  DAT_0042331f = 0;
  DAT_00423320 = lstrlenA(&DAT_00423318);
  FUN_00405590("m.b",&DAT_00423318);
  lstrcpynA(&DAT_00423324,".",8);
  DAT_0042332b = 0;
  DAT_0042332c = lstrlenA(&DAT_00423324);
  FUN_00405590("b.t",&DAT_00423324);
  pBVar1 = FUN_00409ac0(DAT_004230d0,0x10ce);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00409ac0(DAT_004230d0,0x10cf);
  FUN_00406090(local_40,pBVar1);
  FUN_00405590((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


