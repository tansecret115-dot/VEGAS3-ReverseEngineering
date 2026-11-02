/* Module: vidpcore.dll
   Function: FUN_5deb8200
   Address: 5deb8200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5deb8200(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  CHAR local_48 [8];
  undefined1 local_40 [64];
  
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
    uVar2 = DAT_5df42f78;
    if (param_2 < DAT_5df42f78) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5df42f78;
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
  puVar5 = &DAT_5df42f78;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5df42f78 = 0x1c0;
  DAT_5df42f7c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5df42f80 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5df42f84,0x40);
  DAT_5df42fc4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5df42fc8,0x40);
  DAT_5df43008 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5df4300c = atoi(local_48);
  _DAT_5df43050 = GetLocaleInfoA(0x400,6,&DAT_5df43010,0x40);
  _DAT_5df43050 = _DAT_5df43050 + -1;
  _DAT_5df43094 = GetLocaleInfoA(0x400,0x1002,&DAT_5df43054,0x40);
  _DAT_5df43094 = _DAT_5df43094 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5df43098,8);
  DAT_5df430a0 = iVar4 + -1;
  DAT_5df430ac = 1;
  _mbscpy(&DAT_5df430a4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5df430b0,8);
  DAT_5df430b8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5df430bc,8);
  DAT_5df430c4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5df430c8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5df430cc = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5df430d0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5df430d4,8);
  DAT_5df430dc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5df430e0,8);
  DAT_5df430e8 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5df430ec = atoi(local_48);
  lstrcpynA(&DAT_5df430f0,":",8);
  DAT_5df430f7 = 0;
  DAT_5df430f8 = lstrlenA(&DAT_5df430f0);
  FUN_5deb4550("SMPTE.Whole",&DAT_5df430f0);
  lstrcpynA(&DAT_5df430fc,".",8);
  DAT_5df43103 = 0;
  DAT_5df43104 = lstrlenA(&DAT_5df430fc);
  FUN_5deb4550("SMPTE.NonDrop",&DAT_5df430fc);
  lstrcpynA(&DAT_5df43108,",",8);
  DAT_5df4310f = 0;
  DAT_5df43110 = lstrlenA(&DAT_5df43108);
  FUN_5deb4550("SMPTE.Drop",&DAT_5df43108);
  uVar1 = FUN_5deb8a80(DAT_5df42ed8,0x10cc);
  FUN_5deb5050(local_40,uVar1,&DAT_5df430f0,&DAT_5df430f0,&DAT_5df430fc);
  FUN_5deb4550("SMPTE.Label.NonDrop",local_40);
  FUN_5deb5050(local_40,uVar1,&DAT_5df430f0,&DAT_5df430f0,&DAT_5df43108);
  FUN_5deb4550("SMPTE.Label.Drop",local_40);
  uVar1 = FUN_5deb8a80(DAT_5df42ed8,0x10cd);
  FUN_5deb5050(local_40,uVar1,&DAT_5df430f0,&DAT_5df430f0,&DAT_5df430fc);
  FUN_5deb4550("SMPTE.Label.NonDrop.Full",local_40);
  FUN_5deb5050(local_40,uVar1,&DAT_5df430f0,&DAT_5df430f0,&DAT_5df43108);
  FUN_5deb4550("SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5df43120,".",8);
  DAT_5df43127 = 0;
  DAT_5df43128 = lstrlenA(&DAT_5df43120);
  FUN_5deb4550(&DAT_5df3460c,&DAT_5df43120);
  lstrcpynA(&DAT_5df4312c,".",8);
  DAT_5df43133 = 0;
  DAT_5df43134 = lstrlenA(&DAT_5df4312c);
  FUN_5deb4550(&DAT_5df34608,&DAT_5df4312c);
  uVar1 = FUN_5deb8a80(DAT_5df42ed8,0x10ce);
  FUN_5deb5050(local_40,uVar1,&DAT_5df43120,&DAT_5df4312c);
  FUN_5deb4550("MusicTime.Label",local_40);
  uVar1 = FUN_5deb8a80(DAT_5df42ed8,0x10cf);
  FUN_5deb5050(local_40,uVar1,&DAT_5df43120,&DAT_5df4312c);
  FUN_5deb4550("MusicTime.Label.Full",local_40);
  return 0;
}


