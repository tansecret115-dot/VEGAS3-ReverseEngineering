/* Module: mp3rw.dll
   Function: FUN_0041f170
   Address: 0041f170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041f170(uint *param_1,uint param_2)

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
    uVar2 = DAT_004a9998;
    if (param_2 < DAT_004a9998) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_004a9998;
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
  puVar5 = &DAT_004a9998;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_004a9998 = 0x1c0;
  DAT_004a999c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_004a99a0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_004a99a4,0x40);
  DAT_004a99e4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_004a99e8,0x40);
  DAT_004a9a28 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_004a9a2c = atoi(local_48);
  _DAT_004a9a70 = GetLocaleInfoA(0x400,6,&DAT_004a9a30,0x40);
  _DAT_004a9a70 = _DAT_004a9a70 + -1;
  _DAT_004a9ab4 = GetLocaleInfoA(0x400,0x1002,&DAT_004a9a74,0x40);
  _DAT_004a9ab4 = _DAT_004a9ab4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_004a9ab8,8);
  DAT_004a9ac0 = iVar4 + -1;
  DAT_004a9acc = 1;
  _mbscpy(&DAT_004a9ac4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_004a9ad0,8);
  DAT_004a9ad8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_004a9adc,8);
  DAT_004a9ae4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_004a9ae8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_004a9aec = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_004a9af0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_004a9af4,8);
  DAT_004a9afc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_004a9b00,8);
  DAT_004a9b08 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_004a9b0c = atoi(local_48);
  lstrcpynA(&DAT_004a9b10,":",8);
  DAT_004a9b17 = 0;
  DAT_004a9b18 = lstrlenA(&DAT_004a9b10);
  FUN_004204e0((uchar *)"SMPTE.Whole",&DAT_004a9b10);
  lstrcpynA(&DAT_004a9b1c,".",8);
  DAT_004a9b23 = 0;
  DAT_004a9b24 = lstrlenA(&DAT_004a9b1c);
  FUN_004204e0((uchar *)"SMPTE.NonDrop",&DAT_004a9b1c);
  lstrcpynA(&DAT_004a9b28,",",8);
  DAT_004a9b2f = 0;
  DAT_004a9b30 = lstrlenA(&DAT_004a9b28);
  FUN_004204e0((uchar *)"SMPTE.Drop",&DAT_004a9b28);
  pBVar1 = FUN_0041f9f0(DAT_004a98f8,0x10cc);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0041f9f0(DAT_004a98f8,0x10cd);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_004a9b40,".",8);
  DAT_004a9b47 = 0;
  DAT_004a9b48 = lstrlenA(&DAT_004a9b40);
  FUN_004204e0("m.b",&DAT_004a9b40);
  lstrcpynA(&DAT_004a9b4c,".",8);
  DAT_004a9b53 = 0;
  DAT_004a9b54 = lstrlenA(&DAT_004a9b4c);
  FUN_004204e0("b.t",&DAT_004a9b4c);
  pBVar1 = FUN_0041f9f0(DAT_004a98f8,0x10ce);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0041f9f0(DAT_004a98f8,0x10cf);
  FUN_00420fe0(local_40,pBVar1);
  FUN_004204e0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


