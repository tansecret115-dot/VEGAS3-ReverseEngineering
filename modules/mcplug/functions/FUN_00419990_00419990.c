/* Module: mcplug.dll
   Function: FUN_00419990
   Address: 00419990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00419990(uint *param_1,uint param_2)

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
    uVar2 = DAT_00487f78;
    if (param_2 < DAT_00487f78) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00487f78;
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
  puVar5 = &DAT_00487f78;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00487f78 = 0x1c0;
  DAT_00487f7c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00487f80 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00487f84,0x40);
  DAT_00487fc4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00487fc8,0x40);
  DAT_00488008 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0048800c = atoi(local_48);
  _DAT_00488050 = GetLocaleInfoA(0x400,6,&DAT_00488010,0x40);
  _DAT_00488050 = _DAT_00488050 + -1;
  _DAT_00488094 = GetLocaleInfoA(0x400,0x1002,&DAT_00488054,0x40);
  _DAT_00488094 = _DAT_00488094 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00488098,8);
  DAT_004880a0 = iVar4 + -1;
  DAT_004880ac = 1;
  _mbscpy(&DAT_004880a4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_004880b0,8);
  DAT_004880b8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_004880bc,8);
  DAT_004880c4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_004880c8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_004880cc = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_004880d0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_004880d4,8);
  DAT_004880dc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_004880e0,8);
  DAT_004880e8 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_004880ec = atoi(local_48);
  lstrcpynA(&DAT_004880f0,":",8);
  DAT_004880f7 = 0;
  DAT_004880f8 = lstrlenA(&DAT_004880f0);
  FUN_0041f240((uchar *)"SMPTE.Whole",&DAT_004880f0);
  lstrcpynA(&DAT_004880fc,".",8);
  DAT_00488103 = 0;
  DAT_00488104 = lstrlenA(&DAT_004880fc);
  FUN_0041f240((uchar *)"SMPTE.NonDrop",&DAT_004880fc);
  lstrcpynA(&DAT_00488108,",",8);
  DAT_0048810f = 0;
  DAT_00488110 = lstrlenA(&DAT_00488108);
  FUN_0041f240((uchar *)"SMPTE.Drop",&DAT_00488108);
  pBVar1 = FUN_0041a210(DAT_00487ed8,0x10cc);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_0041a210(DAT_00487ed8,0x10cd);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00488120,".",8);
  DAT_00488127 = 0;
  DAT_00488128 = lstrlenA(&DAT_00488120);
  FUN_0041f240("m.b",&DAT_00488120);
  lstrcpynA(&DAT_0048812c,".",8);
  DAT_00488133 = 0;
  DAT_00488134 = lstrlenA(&DAT_0048812c);
  FUN_0041f240("b.t",&DAT_0048812c);
  pBVar1 = FUN_0041a210(DAT_00487ed8,0x10ce);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_0041a210(DAT_00487ed8,0x10cf);
  FUN_0041fd40(local_40,pBVar1);
  FUN_0041f240((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


