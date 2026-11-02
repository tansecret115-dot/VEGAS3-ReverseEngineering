/* Module: sfpagepeel.dll
   Function: FUN_004281d0
   Address: 004281d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004281d0(uint *param_1,uint param_2)

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
    uVar2 = DAT_0047da90;
    if (param_2 < DAT_0047da90) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0047da90;
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
  puVar5 = &DAT_0047da90;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0047da90 = 0x1c0;
  DAT_0047da94 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0047da98 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0047da9c,0x40);
  DAT_0047dadc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0047dae0,0x40);
  DAT_0047db20 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0047db24 = atoi(local_48);
  _DAT_0047db68 = GetLocaleInfoA(0x400,6,&DAT_0047db28,0x40);
  _DAT_0047db68 = _DAT_0047db68 + -1;
  _DAT_0047dbac = GetLocaleInfoA(0x400,0x1002,&DAT_0047db6c,0x40);
  _DAT_0047dbac = _DAT_0047dbac + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0047dbb0,8);
  DAT_0047dbb8 = iVar4 + -1;
  DAT_0047dbc4 = 1;
  _mbscpy(&DAT_0047dbbc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0047dbc8,8);
  DAT_0047dbd0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0047dbd4,8);
  DAT_0047dbdc = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0047dbe0 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0047dbe4 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0047dbe8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0047dbec,8);
  DAT_0047dbf4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0047dbf8,8);
  DAT_0047dc00 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0047dc04 = atoi(local_48);
  lstrcpynA(&DAT_0047dc08,":",8);
  DAT_0047dc0f = 0;
  DAT_0047dc10 = lstrlenA(&DAT_0047dc08);
  FUN_00424520((uchar *)"SMPTE.Whole",&DAT_0047dc08);
  lstrcpynA(&DAT_0047dc14,".",8);
  DAT_0047dc1b = 0;
  DAT_0047dc1c = lstrlenA(&DAT_0047dc14);
  FUN_00424520((uchar *)"SMPTE.NonDrop",&DAT_0047dc14);
  lstrcpynA(&DAT_0047dc20,",",8);
  DAT_0047dc27 = 0;
  DAT_0047dc28 = lstrlenA(&DAT_0047dc20);
  FUN_00424520((uchar *)"SMPTE.Drop",&DAT_0047dc20);
  pBVar1 = FUN_00428a50(DAT_0047d9f0,0x10cc);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00428a50(DAT_0047d9f0,0x10cd);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0047dc38,".",8);
  DAT_0047dc3f = 0;
  DAT_0047dc40 = lstrlenA(&DAT_0047dc38);
  FUN_00424520("m.b",&DAT_0047dc38);
  lstrcpynA(&DAT_0047dc44,".",8);
  DAT_0047dc4b = 0;
  DAT_0047dc4c = lstrlenA(&DAT_0047dc44);
  FUN_00424520("b.t",&DAT_0047dc44);
  pBVar1 = FUN_00428a50(DAT_0047d9f0,0x10ce);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00428a50(DAT_0047d9f0,0x10cf);
  FUN_00425020(local_40,pBVar1);
  FUN_00424520((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


