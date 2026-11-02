/* Module: sfnetmedia.dll
   Function: FUN_004188a0
   Address: 004188a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004188a0(uint *param_1,uint param_2)

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
    uVar2 = DAT_00441e00;
    if (param_2 < DAT_00441e00) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00441e00;
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
  puVar5 = &DAT_00441e00;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00441e00 = 0x1c0;
  DAT_00441e04 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00441e08 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00441e0c,0x40);
  DAT_00441e4c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00441e50,0x40);
  DAT_00441e90 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00441e94 = atoi(local_48);
  _DAT_00441ed8 = GetLocaleInfoA(0x400,6,&DAT_00441e98,0x40);
  _DAT_00441ed8 = _DAT_00441ed8 + -1;
  _DAT_00441f1c = GetLocaleInfoA(0x400,0x1002,&DAT_00441edc,0x40);
  _DAT_00441f1c = _DAT_00441f1c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00441f20,8);
  DAT_00441f28 = iVar4 + -1;
  DAT_00441f34 = 1;
  _mbscpy(&DAT_00441f2c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00441f38,8);
  DAT_00441f40 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00441f44,8);
  DAT_00441f4c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00441f50 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00441f54 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00441f58 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00441f5c,8);
  DAT_00441f64 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00441f68,8);
  DAT_00441f70 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00441f74 = atoi(local_48);
  lstrcpynA(&DAT_00441f78,":",8);
  DAT_00441f7f = 0;
  DAT_00441f80 = lstrlenA(&DAT_00441f78);
  FUN_00414bf0((uchar *)"SMPTE.Whole",&DAT_00441f78);
  lstrcpynA(&DAT_00441f84,".",8);
  DAT_00441f8b = 0;
  DAT_00441f8c = lstrlenA(&DAT_00441f84);
  FUN_00414bf0((uchar *)"SMPTE.NonDrop",&DAT_00441f84);
  lstrcpynA(&DAT_00441f90,",",8);
  DAT_00441f97 = 0;
  DAT_00441f98 = lstrlenA(&DAT_00441f90);
  FUN_00414bf0((uchar *)"SMPTE.Drop",&DAT_00441f90);
  pBVar1 = FUN_00419120(DAT_00441d60,0x10cc);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00419120(DAT_00441d60,0x10cd);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00441fa8,".",8);
  DAT_00441faf = 0;
  DAT_00441fb0 = lstrlenA(&DAT_00441fa8);
  FUN_00414bf0("m.b",&DAT_00441fa8);
  lstrcpynA(&DAT_00441fb4,".",8);
  DAT_00441fbb = 0;
  DAT_00441fbc = lstrlenA(&DAT_00441fb4);
  FUN_00414bf0("b.t",&DAT_00441fb4);
  pBVar1 = FUN_00419120(DAT_00441d60,0x10ce);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00419120(DAT_00441d60,0x10cf);
  FUN_004156f0(local_40,pBVar1);
  FUN_00414bf0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


