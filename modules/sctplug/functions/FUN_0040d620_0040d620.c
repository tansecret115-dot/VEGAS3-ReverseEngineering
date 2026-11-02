/* Module: sctplug.dll
   Function: FUN_0040d620
   Address: 0040d620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040d620(uint *param_1,uint param_2)

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
    uVar2 = DAT_0043cdd0;
    if (param_2 < DAT_0043cdd0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0043cdd0;
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
  puVar5 = &DAT_0043cdd0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0043cdd0 = 0x1c0;
  DAT_0043cdd4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0043cdd8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0043cddc,0x40);
  DAT_0043ce1c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0043ce20,0x40);
  DAT_0043ce60 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0043ce64 = atoi(local_48);
  _DAT_0043cea8 = GetLocaleInfoA(0x400,6,&DAT_0043ce68,0x40);
  _DAT_0043cea8 = _DAT_0043cea8 + -1;
  _DAT_0043ceec = GetLocaleInfoA(0x400,0x1002,&DAT_0043ceac,0x40);
  _DAT_0043ceec = _DAT_0043ceec + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0043cef0,8);
  DAT_0043cef8 = iVar4 + -1;
  DAT_0043cf04 = 1;
  _mbscpy(&DAT_0043cefc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0043cf08,8);
  DAT_0043cf10 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0043cf14,8);
  DAT_0043cf1c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0043cf20 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0043cf24 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0043cf28 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0043cf2c,8);
  DAT_0043cf34 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0043cf38,8);
  DAT_0043cf40 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0043cf44 = atoi(local_48);
  lstrcpynA(&DAT_0043cf48,":",8);
  DAT_0043cf4f = 0;
  DAT_0043cf50 = lstrlenA(&DAT_0043cf48);
  FUN_00411600((uchar *)"SMPTE.Whole",&DAT_0043cf48);
  lstrcpynA(&DAT_0043cf54,".",8);
  DAT_0043cf5b = 0;
  DAT_0043cf5c = lstrlenA(&DAT_0043cf54);
  FUN_00411600((uchar *)"SMPTE.NonDrop",&DAT_0043cf54);
  lstrcpynA(&DAT_0043cf60,",",8);
  DAT_0043cf67 = 0;
  DAT_0043cf68 = lstrlenA(&DAT_0043cf60);
  FUN_00411600((uchar *)"SMPTE.Drop",&DAT_0043cf60);
  pBVar1 = FUN_0040dea0(DAT_0043cd30,0x10cb);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0040dea0(DAT_0043cd30,0x10cc);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0043cf78,".",8);
  DAT_0043cf7f = 0;
  DAT_0043cf80 = lstrlenA(&DAT_0043cf78);
  FUN_00411600("m.b",&DAT_0043cf78);
  lstrcpynA(&DAT_0043cf84,".",8);
  DAT_0043cf8b = 0;
  DAT_0043cf8c = lstrlenA(&DAT_0043cf84);
  FUN_00411600("b.t",&DAT_0043cf84);
  pBVar1 = FUN_0040dea0(DAT_0043cd30,0x10cd);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0040dea0(DAT_0043cd30,0x10ce);
  FUN_00412100(local_40,pBVar1);
  FUN_00411600((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


