/* Module: qt4plug.dll
   Function: FUN_5f527fb0
   Address: 5f527fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f527fb0(uint *param_1,uint param_2)

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
    uVar2 = DAT_5f5a41f8;
    if (param_2 < DAT_5f5a41f8) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5f5a41f8;
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
  puVar5 = &DAT_5f5a41f8;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5f5a41f8 = 0x1c0;
  DAT_5f5a41fc = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5f5a4200 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5f5a4204,0x40);
  DAT_5f5a4244 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5f5a4248,0x40);
  DAT_5f5a4288 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5f5a428c = atoi(local_48);
  _DAT_5f5a42d0 = GetLocaleInfoA(0x400,6,&DAT_5f5a4290,0x40);
  _DAT_5f5a42d0 = _DAT_5f5a42d0 + -1;
  _DAT_5f5a4314 = GetLocaleInfoA(0x400,0x1002,&DAT_5f5a42d4,0x40);
  _DAT_5f5a4314 = _DAT_5f5a4314 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5f5a4318,8);
  DAT_5f5a4320 = iVar4 + -1;
  DAT_5f5a432c = 1;
  _mbscpy(&DAT_5f5a4324,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5f5a4330,8);
  DAT_5f5a4338 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5f5a433c,8);
  DAT_5f5a4344 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5f5a4348 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5f5a434c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5f5a4350 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5f5a4354,8);
  DAT_5f5a435c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5f5a4360,8);
  DAT_5f5a4368 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5f5a436c = atoi(local_48);
  lstrcpynA(&DAT_5f5a4370,":",8);
  DAT_5f5a4377 = 0;
  DAT_5f5a4378 = lstrlenA(&DAT_5f5a4370);
  FUN_5f52be10((uchar *)"SMPTE.Whole",&DAT_5f5a4370);
  lstrcpynA(&DAT_5f5a437c,".",8);
  DAT_5f5a4383 = 0;
  DAT_5f5a4384 = lstrlenA(&DAT_5f5a437c);
  FUN_5f52be10((uchar *)"SMPTE.NonDrop",&DAT_5f5a437c);
  lstrcpynA(&DAT_5f5a4388,",",8);
  DAT_5f5a438f = 0;
  DAT_5f5a4390 = lstrlenA(&DAT_5f5a4388);
  FUN_5f52be10((uchar *)"SMPTE.Drop",&DAT_5f5a4388);
  pBVar1 = FUN_5f528830(DAT_5f5a4158,0x10cc);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5f528830(DAT_5f5a4158,0x10cd);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5f5a43a0,".",8);
  DAT_5f5a43a7 = 0;
  DAT_5f5a43a8 = lstrlenA(&DAT_5f5a43a0);
  FUN_5f52be10("m.b",&DAT_5f5a43a0);
  lstrcpynA(&DAT_5f5a43ac,".",8);
  DAT_5f5a43b3 = 0;
  DAT_5f5a43b4 = lstrlenA(&DAT_5f5a43ac);
  FUN_5f52be10("b.t",&DAT_5f5a43ac);
  pBVar1 = FUN_5f528830(DAT_5f5a4158,0x10ce);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5f528830(DAT_5f5a4158,0x10cf);
  FUN_5f52c900(local_40,pBVar1);
  FUN_5f52be10((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


