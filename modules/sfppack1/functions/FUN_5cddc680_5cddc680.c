/* Module: sfppack1.dll
   Function: FUN_5cddc680
   Address: 5cddc680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cddc680(uint *param_1,uint param_2)

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
    uVar2 = DAT_5ce238c8;
    if (param_2 < DAT_5ce238c8) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5ce238c8;
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
  puVar5 = &DAT_5ce238c8;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5ce238c8 = 0x1c0;
  DAT_5ce238cc = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5ce238d0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5ce238d4,0x40);
  DAT_5ce23914 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5ce23918,0x40);
  DAT_5ce23958 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5ce2395c = atoi(local_48);
  _DAT_5ce239a0 = GetLocaleInfoA(0x400,6,&DAT_5ce23960,0x40);
  _DAT_5ce239a0 = _DAT_5ce239a0 + -1;
  _DAT_5ce239e4 = GetLocaleInfoA(0x400,0x1002,&DAT_5ce239a4,0x40);
  _DAT_5ce239e4 = _DAT_5ce239e4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5ce239e8,8);
  DAT_5ce239f0 = iVar4 + -1;
  DAT_5ce239fc = 1;
  _mbscpy(&DAT_5ce239f4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5ce23a00,8);
  DAT_5ce23a08 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5ce23a0c,8);
  DAT_5ce23a14 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5ce23a18 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5ce23a1c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5ce23a20 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5ce23a24,8);
  DAT_5ce23a2c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5ce23a30,8);
  DAT_5ce23a38 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5ce23a3c = atoi(local_48);
  lstrcpynA(&DAT_5ce23a40,":",8);
  DAT_5ce23a47 = 0;
  DAT_5ce23a48 = lstrlenA(&DAT_5ce23a40);
  FUN_5cdea850((uchar *)"SMPTE.Whole",&DAT_5ce23a40);
  lstrcpynA(&DAT_5ce23a4c,".",8);
  DAT_5ce23a53 = 0;
  DAT_5ce23a54 = lstrlenA(&DAT_5ce23a4c);
  FUN_5cdea850((uchar *)"SMPTE.NonDrop",&DAT_5ce23a4c);
  lstrcpynA(&DAT_5ce23a58,",",8);
  DAT_5ce23a5f = 0;
  DAT_5ce23a60 = lstrlenA(&DAT_5ce23a58);
  FUN_5cdea850((uchar *)"SMPTE.Drop",&DAT_5ce23a58);
  pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x10cb);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x10cc);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5ce23a70,".",8);
  DAT_5ce23a77 = 0;
  DAT_5ce23a78 = lstrlenA(&DAT_5ce23a70);
  FUN_5cdea850("m.b",&DAT_5ce23a70);
  lstrcpynA(&DAT_5ce23a7c,".",8);
  DAT_5ce23a83 = 0;
  DAT_5ce23a84 = lstrlenA(&DAT_5ce23a7c);
  FUN_5cdea850("b.t",&DAT_5ce23a7c);
  pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x10cd);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x10ce);
  FUN_5cdeb340(local_40,pBVar1);
  FUN_5cdea850((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


