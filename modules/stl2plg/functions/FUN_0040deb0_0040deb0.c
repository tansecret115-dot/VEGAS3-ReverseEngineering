/* Module: stl2plg.dll
   Function: FUN_0040deb0
   Address: 0040deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040deb0(uint *param_1,uint param_2)

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
    uVar2 = DAT_004736c0;
    if (param_2 < DAT_004736c0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_004736c0;
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
  puVar5 = &DAT_004736c0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_004736c0 = 0x1c0;
  DAT_004736c4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_004736c8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_004736cc,0x40);
  DAT_0047370c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00473710,0x40);
  DAT_00473750 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00473754 = atoi(local_48);
  _DAT_00473798 = GetLocaleInfoA(0x400,6,&DAT_00473758,0x40);
  _DAT_00473798 = _DAT_00473798 + -1;
  _DAT_004737dc = GetLocaleInfoA(0x400,0x1002,&DAT_0047379c,0x40);
  _DAT_004737dc = _DAT_004737dc + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_004737e0,8);
  DAT_004737e8 = iVar4 + -1;
  DAT_004737f4 = 1;
  _mbscpy(&DAT_004737ec,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_004737f8,8);
  DAT_00473800 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00473804,8);
  DAT_0047380c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00473810 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00473814 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00473818 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0047381c,8);
  DAT_00473824 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00473828,8);
  DAT_00473830 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00473834 = atoi(local_48);
  lstrcpynA(&DAT_00473838,":",8);
  DAT_0047383f = 0;
  DAT_00473840 = lstrlenA(&DAT_00473838);
  FUN_00424bb0((uchar *)"SMPTE.Whole",&DAT_00473838);
  lstrcpynA(&DAT_00473844,".",8);
  DAT_0047384b = 0;
  DAT_0047384c = lstrlenA(&DAT_00473844);
  FUN_00424bb0((uchar *)"SMPTE.NonDrop",&DAT_00473844);
  lstrcpynA(&DAT_00473850,",",8);
  DAT_00473857 = 0;
  DAT_00473858 = lstrlenA(&DAT_00473850);
  FUN_00424bb0((uchar *)"SMPTE.Drop",&DAT_00473850);
  pBVar1 = FUN_0040e730(DAT_00473620,0x10cc);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0040e730(DAT_00473620,0x10cd);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00473868,".",8);
  DAT_0047386f = 0;
  DAT_00473870 = lstrlenA(&DAT_00473868);
  FUN_00424bb0("m.b",&DAT_00473868);
  lstrcpynA(&DAT_00473874,".",8);
  DAT_0047387b = 0;
  DAT_0047387c = lstrlenA(&DAT_00473874);
  FUN_00424bb0("b.t",&DAT_00473874);
  pBVar1 = FUN_0040e730(DAT_00473620,0x10ce);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0040e730(DAT_00473620,0x10cf);
  FUN_004256a0(local_40,pBVar1);
  FUN_00424bb0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


