/* Module: wmfplug2.dll
   Function: FUN_00420480
   Address: 00420480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00420480(uint *param_1,uint param_2)

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
    uVar2 = DAT_00489ed0;
    if (param_2 < DAT_00489ed0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00489ed0;
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
  puVar5 = &DAT_00489ed0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00489ed0 = 0x1c0;
  DAT_00489ed4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00489ed8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00489edc,0x40);
  DAT_00489f1c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00489f20,0x40);
  DAT_00489f60 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00489f64 = atoi(local_48);
  _DAT_00489fa8 = GetLocaleInfoA(0x400,6,&DAT_00489f68,0x40);
  _DAT_00489fa8 = _DAT_00489fa8 + -1;
  _DAT_00489fec = GetLocaleInfoA(0x400,0x1002,&DAT_00489fac,0x40);
  _DAT_00489fec = _DAT_00489fec + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00489ff0,8);
  DAT_00489ff8 = iVar4 + -1;
  DAT_0048a004 = 1;
  _mbscpy(&DAT_00489ffc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0048a008,8);
  DAT_0048a010 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0048a014,8);
  DAT_0048a01c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0048a020 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0048a024 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0048a028 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0048a02c,8);
  DAT_0048a034 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0048a038,8);
  DAT_0048a040 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0048a044 = atoi(local_48);
  lstrcpynA(&DAT_0048a048,":",8);
  DAT_0048a04f = 0;
  DAT_0048a050 = lstrlenA(&DAT_0048a048);
  FUN_00424f40((uchar *)"SMPTE.Whole",&DAT_0048a048);
  lstrcpynA(&DAT_0048a054,".",8);
  DAT_0048a05b = 0;
  DAT_0048a05c = lstrlenA(&DAT_0048a054);
  FUN_00424f40((uchar *)"SMPTE.NonDrop",&DAT_0048a054);
  lstrcpynA(&DAT_0048a060,",",8);
  DAT_0048a067 = 0;
  DAT_0048a068 = lstrlenA(&DAT_0048a060);
  FUN_00424f40((uchar *)"SMPTE.Drop",&DAT_0048a060);
  pBVar1 = FUN_00420d00(DAT_00489e30,0x10cc);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00420d00(DAT_00489e30,0x10cd);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0048a078,".",8);
  DAT_0048a07f = 0;
  DAT_0048a080 = lstrlenA(&DAT_0048a078);
  FUN_00424f40("m.b",&DAT_0048a078);
  lstrcpynA(&DAT_0048a084,".",8);
  DAT_0048a08b = 0;
  DAT_0048a08c = lstrlenA(&DAT_0048a084);
  FUN_00424f40("b.t",&DAT_0048a084);
  pBVar1 = FUN_00420d00(DAT_00489e30,0x10ce);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00420d00(DAT_00489e30,0x10cf);
  FUN_00425a40(local_40,pBVar1);
  FUN_00424f40((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


