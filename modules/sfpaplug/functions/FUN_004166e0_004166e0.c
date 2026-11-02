/* Module: sfpaplug.dll
   Function: FUN_004166e0
   Address: 004166e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004166e0(uint *param_1,uint param_2)

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
    uVar2 = DAT_0045c420;
    if (param_2 < DAT_0045c420) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0045c420;
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
  puVar5 = &DAT_0045c420;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0045c420 = 0x1c0;
  DAT_0045c424 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0045c428 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0045c42c,0x40);
  DAT_0045c46c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0045c470,0x40);
  DAT_0045c4b0 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0045c4b4 = atoi(local_48);
  _DAT_0045c4f8 = GetLocaleInfoA(0x400,6,&DAT_0045c4b8,0x40);
  _DAT_0045c4f8 = _DAT_0045c4f8 + -1;
  _DAT_0045c53c = GetLocaleInfoA(0x400,0x1002,&DAT_0045c4fc,0x40);
  _DAT_0045c53c = _DAT_0045c53c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0045c540,8);
  DAT_0045c548 = iVar4 + -1;
  DAT_0045c554 = 1;
  _mbscpy(&DAT_0045c54c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0045c558,8);
  DAT_0045c560 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0045c564,8);
  DAT_0045c56c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0045c570 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0045c574 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0045c578 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0045c57c,8);
  DAT_0045c584 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0045c588,8);
  DAT_0045c590 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0045c594 = atoi(local_48);
  lstrcpynA(&DAT_0045c598,":",8);
  DAT_0045c59f = 0;
  DAT_0045c5a0 = lstrlenA(&DAT_0045c598);
  FUN_00418820((uchar *)"SMPTE.Whole",&DAT_0045c598);
  lstrcpynA(&DAT_0045c5a4,".",8);
  DAT_0045c5ab = 0;
  DAT_0045c5ac = lstrlenA(&DAT_0045c5a4);
  FUN_00418820((uchar *)"SMPTE.NonDrop",&DAT_0045c5a4);
  lstrcpynA(&DAT_0045c5b0,",",8);
  DAT_0045c5b7 = 0;
  DAT_0045c5b8 = lstrlenA(&DAT_0045c5b0);
  FUN_00418820((uchar *)"SMPTE.Drop",&DAT_0045c5b0);
  pBVar1 = FUN_00416f60(DAT_0045c380,0x10cc);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00416f60(DAT_0045c380,0x10cd);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0045c5c8,".",8);
  DAT_0045c5cf = 0;
  DAT_0045c5d0 = lstrlenA(&DAT_0045c5c8);
  FUN_00418820("m.b",&DAT_0045c5c8);
  lstrcpynA(&DAT_0045c5d4,".",8);
  DAT_0045c5db = 0;
  DAT_0045c5dc = lstrlenA(&DAT_0045c5d4);
  FUN_00418820("b.t",&DAT_0045c5d4);
  pBVar1 = FUN_00416f60(DAT_0045c380,0x10ce);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00416f60(DAT_0045c380,0x10cf);
  FUN_00419320(local_40,pBVar1);
  FUN_00418820((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


