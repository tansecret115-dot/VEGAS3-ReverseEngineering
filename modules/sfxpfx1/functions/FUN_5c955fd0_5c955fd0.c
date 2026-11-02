/* Module: sfxpfx1.dll
   Function: FUN_5c955fd0
   Address: 5c955fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c955fd0(uint *param_1,uint param_2)

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
    uVar2 = DAT_5c998840;
    if (param_2 < DAT_5c998840) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5c998840;
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
  puVar5 = &DAT_5c998840;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5c998840 = 0x1c0;
  DAT_5c998844 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5c998848 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5c99884c,0x40);
  DAT_5c99888c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5c998890,0x40);
  DAT_5c9988d0 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5c9988d4 = atoi(local_48);
  _DAT_5c998918 = GetLocaleInfoA(0x400,6,&DAT_5c9988d8,0x40);
  _DAT_5c998918 = _DAT_5c998918 + -1;
  _DAT_5c99895c = GetLocaleInfoA(0x400,0x1002,&DAT_5c99891c,0x40);
  _DAT_5c99895c = _DAT_5c99895c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5c998960,8);
  DAT_5c998968 = iVar4 + -1;
  DAT_5c998974 = 1;
  _mbscpy(&DAT_5c99896c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5c998978,8);
  DAT_5c998980 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5c998984,8);
  DAT_5c99898c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5c998990 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5c998994 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5c998998 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5c99899c,8);
  DAT_5c9989a4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5c9989a8,8);
  DAT_5c9989b0 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5c9989b4 = atoi(local_48);
  lstrcpynA(&DAT_5c9989b8,":",8);
  DAT_5c9989bf = 0;
  DAT_5c9989c0 = lstrlenA(&DAT_5c9989b8);
  FUN_5c9641a0((uchar *)"SMPTE.Whole",&DAT_5c9989b8);
  lstrcpynA(&DAT_5c9989c4,".",8);
  DAT_5c9989cb = 0;
  DAT_5c9989cc = lstrlenA(&DAT_5c9989c4);
  FUN_5c9641a0((uchar *)"SMPTE.NonDrop",&DAT_5c9989c4);
  lstrcpynA(&DAT_5c9989d0,",",8);
  DAT_5c9989d7 = 0;
  DAT_5c9989d8 = lstrlenA(&DAT_5c9989d0);
  FUN_5c9641a0((uchar *)"SMPTE.Drop",&DAT_5c9989d0);
  pBVar1 = FUN_5c956850(DAT_5c9987a0,0x10cb);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5c956850(DAT_5c9987a0,0x10cc);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5c9989e8,".",8);
  DAT_5c9989ef = 0;
  DAT_5c9989f0 = lstrlenA(&DAT_5c9989e8);
  FUN_5c9641a0("m.b",&DAT_5c9989e8);
  lstrcpynA(&DAT_5c9989f4,".",8);
  DAT_5c9989fb = 0;
  DAT_5c9989fc = lstrlenA(&DAT_5c9989f4);
  FUN_5c9641a0("b.t",&DAT_5c9989f4);
  pBVar1 = FUN_5c956850(DAT_5c9987a0,0x10cd);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5c956850(DAT_5c9987a0,0x10ce);
  FUN_5c964c90(local_40,pBVar1);
  FUN_5c9641a0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


