/* Module: sfmarket2.dll
   Function: FUN_00422bf0
   Address: 00422bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00422bf0(uint *param_1,uint param_2)

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
    uVar2 = DAT_004aaf60;
    if (param_2 < DAT_004aaf60) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_004aaf60;
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
  puVar5 = &DAT_004aaf60;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_004aaf60 = 0x1c0;
  DAT_004aaf64 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_004aaf68 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_004aaf6c,0x40);
  DAT_004aafac = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_004aafb0,0x40);
  DAT_004aaff0 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_004aaff4 = atoi(local_48);
  _DAT_004ab038 = GetLocaleInfoA(0x400,6,&DAT_004aaff8,0x40);
  _DAT_004ab038 = _DAT_004ab038 + -1;
  _DAT_004ab07c = GetLocaleInfoA(0x400,0x1002,&DAT_004ab03c,0x40);
  _DAT_004ab07c = _DAT_004ab07c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_004ab080,8);
  DAT_004ab088 = iVar4 + -1;
  DAT_004ab094 = 1;
  _mbscpy(&DAT_004ab08c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_004ab098,8);
  DAT_004ab0a0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_004ab0a4,8);
  DAT_004ab0ac = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_004ab0b0 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_004ab0b4 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_004ab0b8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_004ab0bc,8);
  DAT_004ab0c4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_004ab0c8,8);
  DAT_004ab0d0 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_004ab0d4 = atoi(local_48);
  lstrcpynA(&DAT_004ab0d8,":",8);
  DAT_004ab0df = 0;
  DAT_004ab0e0 = lstrlenA(&DAT_004ab0d8);
  FUN_00423f60((uchar *)"SMPTE.Whole",&DAT_004ab0d8);
  lstrcpynA(&DAT_004ab0e4,".",8);
  DAT_004ab0eb = 0;
  DAT_004ab0ec = lstrlenA(&DAT_004ab0e4);
  FUN_00423f60((uchar *)"SMPTE.NonDrop",&DAT_004ab0e4);
  lstrcpynA(&DAT_004ab0f0,",",8);
  DAT_004ab0f7 = 0;
  DAT_004ab0f8 = lstrlenA(&DAT_004ab0f0);
  FUN_00423f60((uchar *)"SMPTE.Drop",&DAT_004ab0f0);
  pBVar1 = FUN_00423470(DAT_004aaec0,0x10cc);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00423470(DAT_004aaec0,0x10cd);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_004ab108,".",8);
  DAT_004ab10f = 0;
  DAT_004ab110 = lstrlenA(&DAT_004ab108);
  FUN_00423f60("m.b",&DAT_004ab108);
  lstrcpynA(&DAT_004ab114,".",8);
  DAT_004ab11b = 0;
  DAT_004ab11c = lstrlenA(&DAT_004ab114);
  FUN_00423f60("b.t",&DAT_004ab114);
  pBVar1 = FUN_00423470(DAT_004aaec0,0x10ce);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00423470(DAT_004aaec0,0x10cf);
  FUN_00424a60(local_40,pBVar1);
  FUN_00423f60((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


