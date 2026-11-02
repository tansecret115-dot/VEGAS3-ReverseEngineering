/* Module: wavplug.dll
   Function: FUN_5f397c60
   Address: 5f397c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f397c60(uint *param_1,uint param_2)

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
    uVar2 = DAT_5f3db420;
    if (param_2 < DAT_5f3db420) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5f3db420;
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
  puVar5 = &DAT_5f3db420;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5f3db420 = 0x1c0;
  DAT_5f3db424 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5f3db428 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5f3db42c,0x40);
  DAT_5f3db46c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5f3db470,0x40);
  DAT_5f3db4b0 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5f3db4b4 = atoi(local_48);
  _DAT_5f3db4f8 = GetLocaleInfoA(0x400,6,&DAT_5f3db4b8,0x40);
  _DAT_5f3db4f8 = _DAT_5f3db4f8 + -1;
  _DAT_5f3db53c = GetLocaleInfoA(0x400,0x1002,&DAT_5f3db4fc,0x40);
  _DAT_5f3db53c = _DAT_5f3db53c + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5f3db540,8);
  DAT_5f3db548 = iVar4 + -1;
  DAT_5f3db554 = 1;
  _mbscpy(&DAT_5f3db54c,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5f3db558,8);
  DAT_5f3db560 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5f3db564,8);
  DAT_5f3db56c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5f3db570 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5f3db574 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5f3db578 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5f3db57c,8);
  DAT_5f3db584 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5f3db588,8);
  DAT_5f3db590 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5f3db594 = atoi(local_48);
  lstrcpynA(&DAT_5f3db598,":",8);
  DAT_5f3db59f = 0;
  DAT_5f3db5a0 = lstrlenA(&DAT_5f3db598);
  FUN_5f39b6b0((uchar *)"SMPTE.Whole",&DAT_5f3db598);
  lstrcpynA(&DAT_5f3db5a4,".",8);
  DAT_5f3db5ab = 0;
  DAT_5f3db5ac = lstrlenA(&DAT_5f3db5a4);
  FUN_5f39b6b0((uchar *)"SMPTE.NonDrop",&DAT_5f3db5a4);
  lstrcpynA(&DAT_5f3db5b0,",",8);
  DAT_5f3db5b7 = 0;
  DAT_5f3db5b8 = lstrlenA(&DAT_5f3db5b0);
  FUN_5f39b6b0((uchar *)"SMPTE.Drop",&DAT_5f3db5b0);
  pBVar1 = FUN_5f3984e0(DAT_5f3db380,0x10cc);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5f3984e0(DAT_5f3db380,0x10cd);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5f3db5c8,".",8);
  DAT_5f3db5cf = 0;
  DAT_5f3db5d0 = lstrlenA(&DAT_5f3db5c8);
  FUN_5f39b6b0("m.b",&DAT_5f3db5c8);
  lstrcpynA(&DAT_5f3db5d4,".",8);
  DAT_5f3db5db = 0;
  DAT_5f3db5dc = lstrlenA(&DAT_5f3db5d4);
  FUN_5f39b6b0("b.t",&DAT_5f3db5d4);
  pBVar1 = FUN_5f3984e0(DAT_5f3db380,0x10ce);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5f3984e0(DAT_5f3db380,0x10cf);
  FUN_5f39c1a0(local_40,pBVar1);
  FUN_5f39b6b0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


