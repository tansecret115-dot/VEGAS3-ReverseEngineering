/* Module: sfppack2.dll
   Function: FUN_5cd07990
   Address: 5cd07990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd07990(uint *param_1,uint param_2)

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
    uVar2 = DAT_5cd67ad8;
    if (param_2 < DAT_5cd67ad8) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5cd67ad8;
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
  puVar5 = &DAT_5cd67ad8;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5cd67ad8 = 0x1c0;
  DAT_5cd67adc = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5cd67ae0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5cd67ae4,0x40);
  DAT_5cd67b24 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5cd67b28,0x40);
  DAT_5cd67b68 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5cd67b6c = atoi(local_48);
  _DAT_5cd67bb0 = GetLocaleInfoA(0x400,6,&DAT_5cd67b70,0x40);
  _DAT_5cd67bb0 = _DAT_5cd67bb0 + -1;
  _DAT_5cd67bf4 = GetLocaleInfoA(0x400,0x1002,&DAT_5cd67bb4,0x40);
  _DAT_5cd67bf4 = _DAT_5cd67bf4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5cd67bf8,8);
  DAT_5cd67c00 = iVar4 + -1;
  DAT_5cd67c0c = 1;
  _mbscpy(&DAT_5cd67c04,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5cd67c10,8);
  DAT_5cd67c18 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5cd67c1c,8);
  DAT_5cd67c24 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5cd67c28 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5cd67c2c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5cd67c30 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5cd67c34,8);
  DAT_5cd67c3c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5cd67c40,8);
  DAT_5cd67c48 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5cd67c4c = atoi(local_48);
  lstrcpynA(&DAT_5cd67c50,":",8);
  DAT_5cd67c57 = 0;
  DAT_5cd67c58 = lstrlenA(&DAT_5cd67c50);
  FUN_5cd201b0((uchar *)"SMPTE.Whole",&DAT_5cd67c50);
  lstrcpynA(&DAT_5cd67c5c,".",8);
  DAT_5cd67c63 = 0;
  DAT_5cd67c64 = lstrlenA(&DAT_5cd67c5c);
  FUN_5cd201b0((uchar *)"SMPTE.NonDrop",&DAT_5cd67c5c);
  lstrcpynA(&DAT_5cd67c68,",",8);
  DAT_5cd67c6f = 0;
  DAT_5cd67c70 = lstrlenA(&DAT_5cd67c68);
  FUN_5cd201b0((uchar *)"SMPTE.Drop",&DAT_5cd67c68);
  pBVar1 = FUN_5cd08210(DAT_5cd67a38,0x10cb);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5cd08210(DAT_5cd67a38,0x10cc);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5cd67c80,".",8);
  DAT_5cd67c87 = 0;
  DAT_5cd67c88 = lstrlenA(&DAT_5cd67c80);
  FUN_5cd201b0("m.b",&DAT_5cd67c80);
  lstrcpynA(&DAT_5cd67c8c,".",8);
  DAT_5cd67c93 = 0;
  DAT_5cd67c94 = lstrlenA(&DAT_5cd67c8c);
  FUN_5cd201b0("b.t",&DAT_5cd67c8c);
  pBVar1 = FUN_5cd08210(DAT_5cd67a38,0x10cd);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5cd08210(DAT_5cd67a38,0x10ce);
  FUN_5cd20ca0(local_40,pBVar1);
  FUN_5cd201b0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


