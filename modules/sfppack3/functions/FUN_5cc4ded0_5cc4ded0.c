/* Module: sfppack3.dll
   Function: FUN_5cc4ded0
   Address: 5cc4ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cc4ded0(uint *param_1,uint param_2)

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
    uVar2 = DAT_5cc983a0;
    if (param_2 < DAT_5cc983a0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5cc983a0;
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
  puVar5 = &DAT_5cc983a0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5cc983a0 = 0x1c0;
  DAT_5cc983a4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5cc983a8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5cc983ac,0x40);
  DAT_5cc983ec = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5cc983f0,0x40);
  DAT_5cc98430 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5cc98434 = atoi(local_48);
  _DAT_5cc98478 = GetLocaleInfoA(0x400,6,&DAT_5cc98438,0x40);
  _DAT_5cc98478 = _DAT_5cc98478 + -1;
  _DAT_5cc984bc = GetLocaleInfoA(0x400,0x1002,&DAT_5cc9847c,0x40);
  _DAT_5cc984bc = _DAT_5cc984bc + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5cc984c0,8);
  DAT_5cc984c8 = iVar4 + -1;
  DAT_5cc984d4 = 1;
  _mbscpy(&DAT_5cc984cc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5cc984d8,8);
  DAT_5cc984e0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5cc984e4,8);
  DAT_5cc984ec = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5cc984f0 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5cc984f4 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5cc984f8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5cc984fc,8);
  DAT_5cc98504 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5cc98508,8);
  DAT_5cc98510 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5cc98514 = atoi(local_48);
  lstrcpynA(&DAT_5cc98518,":",8);
  DAT_5cc9851f = 0;
  DAT_5cc98520 = lstrlenA(&DAT_5cc98518);
  FUN_5cc601e0((uchar *)"SMPTE.Whole",&DAT_5cc98518);
  lstrcpynA(&DAT_5cc98524,".",8);
  DAT_5cc9852b = 0;
  DAT_5cc9852c = lstrlenA(&DAT_5cc98524);
  FUN_5cc601e0((uchar *)"SMPTE.NonDrop",&DAT_5cc98524);
  lstrcpynA(&DAT_5cc98530,",",8);
  DAT_5cc98537 = 0;
  DAT_5cc98538 = lstrlenA(&DAT_5cc98530);
  FUN_5cc601e0((uchar *)"SMPTE.Drop",&DAT_5cc98530);
  pBVar1 = FUN_5cc4e750(DAT_5cc98300,0x10cb);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5cc4e750(DAT_5cc98300,0x10cc);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5cc98548,".",8);
  DAT_5cc9854f = 0;
  DAT_5cc98550 = lstrlenA(&DAT_5cc98548);
  FUN_5cc601e0("m.b",&DAT_5cc98548);
  lstrcpynA(&DAT_5cc98554,".",8);
  DAT_5cc9855b = 0;
  DAT_5cc9855c = lstrlenA(&DAT_5cc98554);
  FUN_5cc601e0("b.t",&DAT_5cc98554);
  pBVar1 = FUN_5cc4e750(DAT_5cc98300,0x10cd);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5cc4e750(DAT_5cc98300,0x10ce);
  FUN_5cc60cd0(local_40,pBVar1);
  FUN_5cc601e0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


