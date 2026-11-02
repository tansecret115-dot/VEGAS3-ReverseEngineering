/* Module: oggplug.dll
   Function: FUN_0040b370
   Address: 0040b370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040b370(uint *param_1,uint param_2)

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
    uVar2 = DAT_00510f38;
    if (param_2 < DAT_00510f38) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00510f38;
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
  puVar5 = &DAT_00510f38;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00510f38 = 0x1c0;
  DAT_00510f3c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00510f40 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00510f44,0x40);
  DAT_00510f84 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00510f88,0x40);
  DAT_00510fc8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00510fcc = atoi(local_48);
  _DAT_00511010 = GetLocaleInfoA(0x400,6,&DAT_00510fd0,0x40);
  _DAT_00511010 = _DAT_00511010 + -1;
  _DAT_00511054 = GetLocaleInfoA(0x400,0x1002,&DAT_00511014,0x40);
  _DAT_00511054 = _DAT_00511054 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00511058,8);
  DAT_00511060 = iVar4 + -1;
  DAT_0051106c = 1;
  _mbscpy(&DAT_00511064,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00511070,8);
  DAT_00511078 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0051107c,8);
  DAT_00511084 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00511088 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0051108c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00511090 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00511094,8);
  DAT_0051109c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_005110a0,8);
  DAT_005110a8 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_005110ac = atoi(local_48);
  lstrcpynA(&DAT_005110b0,":",8);
  DAT_005110b7 = 0;
  DAT_005110b8 = lstrlenA(&DAT_005110b0);
  FUN_0040fe30((uchar *)"SMPTE.Whole",&DAT_005110b0);
  lstrcpynA(&DAT_005110bc,".",8);
  DAT_005110c3 = 0;
  DAT_005110c4 = lstrlenA(&DAT_005110bc);
  FUN_0040fe30((uchar *)"SMPTE.NonDrop",&DAT_005110bc);
  lstrcpynA(&DAT_005110c8,",",8);
  DAT_005110cf = 0;
  DAT_005110d0 = lstrlenA(&DAT_005110c8);
  FUN_0040fe30((uchar *)"SMPTE.Drop",&DAT_005110c8);
  pBVar1 = FUN_0040bbf0(DAT_00510e98,0x10cb);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0040bbf0(DAT_00510e98,0x10cc);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_005110e0,".",8);
  DAT_005110e7 = 0;
  DAT_005110e8 = lstrlenA(&DAT_005110e0);
  FUN_0040fe30("m.b",&DAT_005110e0);
  lstrcpynA(&DAT_005110ec,".",8);
  DAT_005110f3 = 0;
  DAT_005110f4 = lstrlenA(&DAT_005110ec);
  FUN_0040fe30("b.t",&DAT_005110ec);
  pBVar1 = FUN_0040bbf0(DAT_00510e98,0x10cd);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0040bbf0(DAT_00510e98,0x10ce);
  FUN_00410930(local_40,pBVar1);
  FUN_0040fe30((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


