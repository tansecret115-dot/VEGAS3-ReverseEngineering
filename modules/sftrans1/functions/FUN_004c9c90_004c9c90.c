/* Module: sftrans1.dll
   Function: FUN_004c9c90
   Address: 004c9c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004c9c90(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  CHAR local_48 [8];
  undefined1 local_40 [64];
  
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
    uVar2 = DAT_0057b928;
    if (param_2 < DAT_0057b928) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0057b928;
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
  puVar5 = &DAT_0057b928;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0057b928 = 0x1c0;
  DAT_0057b92c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0057b930 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0057b934,0x40);
  DAT_0057b974 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0057b978,0x40);
  DAT_0057b9b8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0057b9bc = atoi(local_48);
  _DAT_0057ba00 = GetLocaleInfoA(0x400,6,&DAT_0057b9c0,0x40);
  _DAT_0057ba00 = _DAT_0057ba00 + -1;
  _DAT_0057ba44 = GetLocaleInfoA(0x400,0x1002,&DAT_0057ba04,0x40);
  _DAT_0057ba44 = _DAT_0057ba44 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0057ba48,8);
  DAT_0057ba50 = iVar4 + -1;
  DAT_0057ba5c = 1;
  _mbscpy(&DAT_0057ba54,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0057ba60,8);
  DAT_0057ba68 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0057ba6c,8);
  DAT_0057ba74 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0057ba78 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0057ba7c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0057ba80 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0057ba84,8);
  DAT_0057ba8c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0057ba90,8);
  DAT_0057ba98 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0057ba9c = atoi(local_48);
  lstrcpynA(&DAT_0057baa0,":",8);
  DAT_0057baa7 = 0;
  DAT_0057baa8 = lstrlenA(&DAT_0057baa0);
  FUN_004c5fe0("SMPTE.Whole",&DAT_0057baa0);
  lstrcpynA(&DAT_0057baac,".",8);
  DAT_0057bab3 = 0;
  DAT_0057bab4 = lstrlenA(&DAT_0057baac);
  FUN_004c5fe0("SMPTE.NonDrop",&DAT_0057baac);
  lstrcpynA(&DAT_0057bab8,",",8);
  DAT_0057babf = 0;
  DAT_0057bac0 = lstrlenA(&DAT_0057bab8);
  FUN_004c5fe0("SMPTE.Drop",&DAT_0057bab8);
  uVar1 = FUN_004ca510(DAT_0057b888,0x10cc);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057baa0,&DAT_0057baa0,&DAT_0057baac);
  FUN_004c5fe0("SMPTE.Label.NonDrop",local_40);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057baa0,&DAT_0057baa0,&DAT_0057bab8);
  FUN_004c5fe0("SMPTE.Label.Drop",local_40);
  uVar1 = FUN_004ca510(DAT_0057b888,0x10cd);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057baa0,&DAT_0057baa0,&DAT_0057baac);
  FUN_004c5fe0("SMPTE.Label.NonDrop.Full",local_40);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057baa0,&DAT_0057baa0,&DAT_0057bab8);
  FUN_004c5fe0("SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0057bad0,".",8);
  DAT_0057bad7 = 0;
  DAT_0057bad8 = lstrlenA(&DAT_0057bad0);
  FUN_004c5fe0(&DAT_0056ad94,&DAT_0057bad0);
  lstrcpynA(&DAT_0057badc,".",8);
  DAT_0057bae3 = 0;
  DAT_0057bae4 = lstrlenA(&DAT_0057badc);
  FUN_004c5fe0(&DAT_0056ad90,&DAT_0057badc);
  uVar1 = FUN_004ca510(DAT_0057b888,0x10ce);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057bad0,&DAT_0057badc);
  FUN_004c5fe0("MusicTime.Label",local_40);
  uVar1 = FUN_004ca510(DAT_0057b888,0x10cf);
  FUN_004c6ae0(local_40,uVar1,&DAT_0057bad0,&DAT_0057badc);
  FUN_004c5fe0("MusicTime.Label.Full",local_40);
  return 0;
}


