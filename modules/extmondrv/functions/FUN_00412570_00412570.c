/* Module: extmondrv.dll
   Function: FUN_00412570
   Address: 00412570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00412570(uint *param_1,uint param_2)

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
    uVar2 = DAT_0045b230;
    if (param_2 < DAT_0045b230) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0045b230;
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
  puVar5 = &DAT_0045b230;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0045b230 = 0x1c0;
  DAT_0045b234 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0045b238 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0045b23c,0x40);
  DAT_0045b27c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0045b280,0x40);
  DAT_0045b2c0 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0045b2c4 = atoi(local_48);
  _DAT_0045b308 = GetLocaleInfoA(0x400,6,&DAT_0045b2c8,0x40);
  _DAT_0045b308 = _DAT_0045b308 + -1;
  _DAT_0045b34c = GetLocaleInfoA(0x400,0x1002,&DAT_0045b30c,0x40);
  _DAT_0045b34c = _DAT_0045b34c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0045b350,8);
  DAT_0045b358 = iVar4 + -1;
  DAT_0045b364 = 1;
  _mbscpy(&DAT_0045b35c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0045b368,8);
  DAT_0045b370 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0045b374,8);
  DAT_0045b37c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0045b380 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0045b384 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0045b388 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0045b38c,8);
  DAT_0045b394 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0045b398,8);
  DAT_0045b3a0 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0045b3a4 = atoi(local_48);
  lstrcpynA(&DAT_0045b3a8,":",8);
  DAT_0045b3af = 0;
  DAT_0045b3b0 = lstrlenA(&DAT_0045b3a8);
  FUN_004215d0((uchar *)"SMPTE.Whole",&DAT_0045b3a8);
  lstrcpynA(&DAT_0045b3b4,".",8);
  DAT_0045b3bb = 0;
  DAT_0045b3bc = lstrlenA(&DAT_0045b3b4);
  FUN_004215d0((uchar *)"SMPTE.NonDrop",&DAT_0045b3b4);
  lstrcpynA(&DAT_0045b3c0,",",8);
  DAT_0045b3c7 = 0;
  DAT_0045b3c8 = lstrlenA(&DAT_0045b3c0);
  FUN_004215d0((uchar *)"SMPTE.Drop",&DAT_0045b3c0);
  pBVar1 = FUN_00412df0(DAT_0045b190,0x10cc);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00412df0(DAT_0045b190,0x10cd);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0045b3d8,".",8);
  DAT_0045b3df = 0;
  DAT_0045b3e0 = lstrlenA(&DAT_0045b3d8);
  FUN_004215d0("m.b",&DAT_0045b3d8);
  lstrcpynA(&DAT_0045b3e4,".",8);
  DAT_0045b3eb = 0;
  DAT_0045b3ec = lstrlenA(&DAT_0045b3e4);
  FUN_004215d0("b.t",&DAT_0045b3e4);
  pBVar1 = FUN_00412df0(DAT_0045b190,0x10ce);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00412df0(DAT_0045b190,0x10cf);
  FUN_004220d0(local_40,pBVar1);
  FUN_004215d0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


