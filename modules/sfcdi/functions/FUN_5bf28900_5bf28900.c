/* Module: sfcdi.dll
   Function: FUN_5bf28900
   Address: 5bf28900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5bf28900(uint *param_1,uint param_2)

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
    uVar2 = DAT_5bf76118;
    if (param_2 < DAT_5bf76118) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5bf76118;
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
  puVar5 = &DAT_5bf76118;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5bf76118 = 0x1c0;
  DAT_5bf7611c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5bf76120 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5bf76124,0x40);
  DAT_5bf76164 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5bf76168,0x40);
  DAT_5bf761a8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5bf761ac = atoi(local_48);
  _DAT_5bf761f0 = GetLocaleInfoA(0x400,6,&DAT_5bf761b0,0x40);
  _DAT_5bf761f0 = _DAT_5bf761f0 + -1;
  _DAT_5bf76234 = GetLocaleInfoA(0x400,0x1002,&DAT_5bf761f4,0x40);
  _DAT_5bf76234 = _DAT_5bf76234 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5bf76238,8);
  DAT_5bf76240 = iVar4 + -1;
  DAT_5bf7624c = 1;
  _mbscpy(&DAT_5bf76244,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5bf76250,8);
  DAT_5bf76258 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5bf7625c,8);
  DAT_5bf76264 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5bf76268 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5bf7626c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5bf76270 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5bf76274,8);
  DAT_5bf7627c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5bf76280,8);
  DAT_5bf76288 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5bf7628c = atoi(local_48);
  lstrcpynA(&DAT_5bf76290,":",8);
  DAT_5bf76297 = 0;
  DAT_5bf76298 = lstrlenA(&DAT_5bf76290);
  FUN_5bf24c50((uchar *)"SMPTE.Whole",&DAT_5bf76290);
  lstrcpynA(&DAT_5bf7629c,".",8);
  DAT_5bf762a3 = 0;
  DAT_5bf762a4 = lstrlenA(&DAT_5bf7629c);
  FUN_5bf24c50((uchar *)"SMPTE.NonDrop",&DAT_5bf7629c);
  lstrcpynA(&DAT_5bf762a8,",",8);
  DAT_5bf762af = 0;
  DAT_5bf762b0 = lstrlenA(&DAT_5bf762a8);
  FUN_5bf24c50((uchar *)"SMPTE.Drop",&DAT_5bf762a8);
  pBVar1 = FUN_5bf29180(DAT_5bf76078,0x10cc);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5bf29180(DAT_5bf76078,0x10cd);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5bf762c0,".",8);
  DAT_5bf762c7 = 0;
  DAT_5bf762c8 = lstrlenA(&DAT_5bf762c0);
  FUN_5bf24c50("m.b",&DAT_5bf762c0);
  lstrcpynA(&DAT_5bf762cc,".",8);
  DAT_5bf762d3 = 0;
  DAT_5bf762d4 = lstrlenA(&DAT_5bf762cc);
  FUN_5bf24c50("b.t",&DAT_5bf762cc);
  pBVar1 = FUN_5bf29180(DAT_5bf76078,0x10ce);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5bf29180(DAT_5bf76078,0x10cf);
  FUN_5bf25750(local_40,pBVar1);
  FUN_5bf24c50((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


