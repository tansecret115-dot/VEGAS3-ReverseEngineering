/* Module: mp3plug.dll
   Function: FUN_5f69e770
   Address: 5f69e770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f69e770(uint *param_1,uint param_2)

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
    uVar2 = DAT_5f74d528;
    if (param_2 < DAT_5f74d528) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5f74d528;
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
  puVar5 = &DAT_5f74d528;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5f74d528 = 0x1c0;
  DAT_5f74d52c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5f74d530 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5f74d534,0x40);
  DAT_5f74d574 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5f74d578,0x40);
  DAT_5f74d5b8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5f74d5bc = atoi(local_48);
  _DAT_5f74d600 = GetLocaleInfoA(0x400,6,&DAT_5f74d5c0,0x40);
  _DAT_5f74d600 = _DAT_5f74d600 + -1;
  _DAT_5f74d644 = GetLocaleInfoA(0x400,0x1002,&DAT_5f74d604,0x40);
  _DAT_5f74d644 = _DAT_5f74d644 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5f74d648,8);
  DAT_5f74d650 = iVar4 + -1;
  DAT_5f74d65c = 1;
  _mbscpy(&DAT_5f74d654,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5f74d660,8);
  DAT_5f74d668 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5f74d66c,8);
  DAT_5f74d674 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5f74d678 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5f74d67c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5f74d680 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5f74d684,8);
  DAT_5f74d68c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5f74d690,8);
  DAT_5f74d698 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5f74d69c = atoi(local_48);
  lstrcpynA(&DAT_5f74d6a0,":",8);
  DAT_5f74d6a7 = 0;
  DAT_5f74d6a8 = lstrlenA(&DAT_5f74d6a0);
  FUN_5f6b0f30((uchar *)"SMPTE.Whole",&DAT_5f74d6a0);
  lstrcpynA(&DAT_5f74d6ac,".",8);
  DAT_5f74d6b3 = 0;
  DAT_5f74d6b4 = lstrlenA(&DAT_5f74d6ac);
  FUN_5f6b0f30((uchar *)"SMPTE.NonDrop",&DAT_5f74d6ac);
  lstrcpynA(&DAT_5f74d6b8,",",8);
  DAT_5f74d6bf = 0;
  DAT_5f74d6c0 = lstrlenA(&DAT_5f74d6b8);
  FUN_5f6b0f30((uchar *)"SMPTE.Drop",&DAT_5f74d6b8);
  pBVar1 = FUN_5f69eff0(DAT_5f74d488,0x10cc);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5f69eff0(DAT_5f74d488,0x10cd);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5f74d6d0,".",8);
  DAT_5f74d6d7 = 0;
  DAT_5f74d6d8 = lstrlenA(&DAT_5f74d6d0);
  FUN_5f6b0f30("m.b",&DAT_5f74d6d0);
  lstrcpynA(&DAT_5f74d6dc,".",8);
  DAT_5f74d6e3 = 0;
  DAT_5f74d6e4 = lstrlenA(&DAT_5f74d6dc);
  FUN_5f6b0f30("b.t",&DAT_5f74d6dc);
  pBVar1 = FUN_5f69eff0(DAT_5f74d488,0x10ce);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5f69eff0(DAT_5f74d488,0x10cf);
  FUN_5f6b1a30(local_40,pBVar1);
  FUN_5f6b0f30((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


