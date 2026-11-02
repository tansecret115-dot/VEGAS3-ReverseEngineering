/* Module: sfxpfx2.dll
   Function: FUN_5c8a7900
   Address: 5c8a7900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c8a7900(uint *param_1,uint param_2)

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
    uVar2 = DAT_5c8e9498;
    if (param_2 < DAT_5c8e9498) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5c8e9498;
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
  puVar5 = &DAT_5c8e9498;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5c8e9498 = 0x1c0;
  DAT_5c8e949c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5c8e94a0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5c8e94a4,0x40);
  DAT_5c8e94e4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5c8e94e8,0x40);
  DAT_5c8e9528 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5c8e952c = atoi(local_48);
  _DAT_5c8e9570 = GetLocaleInfoA(0x400,6,&DAT_5c8e9530,0x40);
  _DAT_5c8e9570 = _DAT_5c8e9570 + -1;
  _DAT_5c8e95b4 = GetLocaleInfoA(0x400,0x1002,&DAT_5c8e9574,0x40);
  _DAT_5c8e95b4 = _DAT_5c8e95b4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5c8e95b8,8);
  DAT_5c8e95c0 = iVar4 + -1;
  DAT_5c8e95cc = 1;
  _mbscpy(&DAT_5c8e95c4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5c8e95d0,8);
  DAT_5c8e95d8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5c8e95dc,8);
  DAT_5c8e95e4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5c8e95e8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5c8e95ec = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5c8e95f0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5c8e95f4,8);
  DAT_5c8e95fc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5c8e9600,8);
  DAT_5c8e9608 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5c8e960c = atoi(local_48);
  lstrcpynA(&DAT_5c8e9610,":",8);
  DAT_5c8e9617 = 0;
  DAT_5c8e9618 = lstrlenA(&DAT_5c8e9610);
  FUN_5c8b5ad0((uchar *)"SMPTE.Whole",&DAT_5c8e9610);
  lstrcpynA(&DAT_5c8e961c,".",8);
  DAT_5c8e9623 = 0;
  DAT_5c8e9624 = lstrlenA(&DAT_5c8e961c);
  FUN_5c8b5ad0((uchar *)"SMPTE.NonDrop",&DAT_5c8e961c);
  lstrcpynA(&DAT_5c8e9628,",",8);
  DAT_5c8e962f = 0;
  DAT_5c8e9630 = lstrlenA(&DAT_5c8e9628);
  FUN_5c8b5ad0((uchar *)"SMPTE.Drop",&DAT_5c8e9628);
  pBVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10cb);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10cc);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5c8e9640,".",8);
  DAT_5c8e9647 = 0;
  DAT_5c8e9648 = lstrlenA(&DAT_5c8e9640);
  FUN_5c8b5ad0("m.b",&DAT_5c8e9640);
  lstrcpynA(&DAT_5c8e964c,".",8);
  DAT_5c8e9653 = 0;
  DAT_5c8e9654 = lstrlenA(&DAT_5c8e964c);
  FUN_5c8b5ad0("b.t",&DAT_5c8e964c);
  pBVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10cd);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10ce);
  FUN_5c8b65c0(local_40,pBVar1);
  FUN_5c8b5ad0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


