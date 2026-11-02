/* Module: aifplug.dll
   Function: FUN_5fbda070
   Address: 5fbda070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5fbda070(uint *param_1,uint param_2)

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
    uVar2 = DAT_5fc099b0;
    if (param_2 < DAT_5fc099b0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5fc099b0;
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
  puVar5 = &DAT_5fc099b0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5fc099b0 = 0x1c0;
  DAT_5fc099b4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5fc099b8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5fc099bc,0x40);
  DAT_5fc099fc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5fc09a00,0x40);
  DAT_5fc09a40 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5fc09a44 = atoi(local_48);
  _DAT_5fc09a88 = GetLocaleInfoA(0x400,6,&DAT_5fc09a48,0x40);
  _DAT_5fc09a88 = _DAT_5fc09a88 + -1;
  _DAT_5fc09acc = GetLocaleInfoA(0x400,0x1002,&DAT_5fc09a8c,0x40);
  _DAT_5fc09acc = _DAT_5fc09acc + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5fc09ad0,8);
  DAT_5fc09ad8 = iVar4 + -1;
  DAT_5fc09ae4 = 1;
  _mbscpy(&DAT_5fc09adc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5fc09ae8,8);
  DAT_5fc09af0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5fc09af4,8);
  DAT_5fc09afc = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5fc09b00 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5fc09b04 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5fc09b08 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5fc09b0c,8);
  DAT_5fc09b14 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5fc09b18,8);
  DAT_5fc09b20 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5fc09b24 = atoi(local_48);
  lstrcpynA(&DAT_5fc09b28,":",8);
  DAT_5fc09b2f = 0;
  DAT_5fc09b30 = lstrlenA(&DAT_5fc09b28);
  FUN_5fbe2160((uchar *)"SMPTE.Whole",&DAT_5fc09b28);
  lstrcpynA(&DAT_5fc09b34,".",8);
  DAT_5fc09b3b = 0;
  DAT_5fc09b3c = lstrlenA(&DAT_5fc09b34);
  FUN_5fbe2160((uchar *)"SMPTE.NonDrop",&DAT_5fc09b34);
  lstrcpynA(&DAT_5fc09b40,",",8);
  DAT_5fc09b47 = 0;
  DAT_5fc09b48 = lstrlenA(&DAT_5fc09b40);
  FUN_5fbe2160((uchar *)"SMPTE.Drop",&DAT_5fc09b40);
  pBVar1 = FUN_5fbda8f0(DAT_5fc09910,0x10cc);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5fbda8f0(DAT_5fc09910,0x10cd);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5fc09b58,".",8);
  DAT_5fc09b5f = 0;
  DAT_5fc09b60 = lstrlenA(&DAT_5fc09b58);
  FUN_5fbe2160("m.b",&DAT_5fc09b58);
  lstrcpynA(&DAT_5fc09b64,".",8);
  DAT_5fc09b6b = 0;
  DAT_5fc09b6c = lstrlenA(&DAT_5fc09b64);
  FUN_5fbe2160("b.t",&DAT_5fc09b64);
  pBVar1 = FUN_5fbda8f0(DAT_5fc09910,0x10ce);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5fbda8f0(DAT_5fc09910,0x10cf);
  FUN_5fbe2c50(local_40,pBVar1);
  FUN_5fbe2160((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


