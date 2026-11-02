/* Module: vfplugs.dll
   Function: FUN_0042d1f0
   Address: 0042d1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042d1f0(uint *param_1,uint param_2)

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
    uVar2 = DAT_00494b18;
    if (param_2 < DAT_00494b18) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00494b18;
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
  puVar5 = &DAT_00494b18;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00494b18 = 0x1c0;
  DAT_00494b1c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00494b20 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00494b24,0x40);
  DAT_00494b64 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00494b68,0x40);
  DAT_00494ba8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00494bac = atoi(local_48);
  _DAT_00494bf0 = GetLocaleInfoA(0x400,6,&DAT_00494bb0,0x40);
  _DAT_00494bf0 = _DAT_00494bf0 + -1;
  _DAT_00494c34 = GetLocaleInfoA(0x400,0x1002,&DAT_00494bf4,0x40);
  _DAT_00494c34 = _DAT_00494c34 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00494c38,8);
  DAT_00494c40 = iVar4 + -1;
  DAT_00494c4c = 1;
  _mbscpy(&DAT_00494c44,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00494c50,8);
  DAT_00494c58 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00494c5c,8);
  DAT_00494c64 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00494c68 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00494c6c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00494c70 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00494c74,8);
  DAT_00494c7c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00494c80,8);
  DAT_00494c88 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00494c8c = atoi(local_48);
  lstrcpynA(&DAT_00494c90,":",8);
  DAT_00494c97 = 0;
  DAT_00494c98 = lstrlenA(&DAT_00494c90);
  FUN_00429540((uchar *)"SMPTE.Whole",&DAT_00494c90);
  lstrcpynA(&DAT_00494c9c,".",8);
  DAT_00494ca3 = 0;
  DAT_00494ca4 = lstrlenA(&DAT_00494c9c);
  FUN_00429540((uchar *)"SMPTE.NonDrop",&DAT_00494c9c);
  lstrcpynA(&DAT_00494ca8,",",8);
  DAT_00494caf = 0;
  DAT_00494cb0 = lstrlenA(&DAT_00494ca8);
  FUN_00429540((uchar *)"SMPTE.Drop",&DAT_00494ca8);
  pBVar1 = FUN_0042da70(DAT_00494a78,0x10cc);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0042da70(DAT_00494a78,0x10cd);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00494cc0,".",8);
  DAT_00494cc7 = 0;
  DAT_00494cc8 = lstrlenA(&DAT_00494cc0);
  FUN_00429540("m.b",&DAT_00494cc0);
  lstrcpynA(&DAT_00494ccc,".",8);
  DAT_00494cd3 = 0;
  DAT_00494cd4 = lstrlenA(&DAT_00494ccc);
  FUN_00429540("b.t",&DAT_00494ccc);
  pBVar1 = FUN_0042da70(DAT_00494a78,0x10ce);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0042da70(DAT_00494a78,0x10cf);
  FUN_0042a040(local_40,pBVar1);
  FUN_00429540((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


