/* Module: g2plug.dll
   Function: FUN_5f817cc0
   Address: 5f817cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f817cc0(uint *param_1,uint param_2)

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
    uVar2 = DAT_5f8775c0;
    if (param_2 < DAT_5f8775c0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5f8775c0;
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
  puVar5 = &DAT_5f8775c0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5f8775c0 = 0x1c0;
  DAT_5f8775c4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5f8775c8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5f8775cc,0x40);
  DAT_5f87760c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5f877610,0x40);
  DAT_5f877650 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5f877654 = atoi(local_48);
  _DAT_5f877698 = GetLocaleInfoA(0x400,6,&DAT_5f877658,0x40);
  _DAT_5f877698 = _DAT_5f877698 + -1;
  _DAT_5f8776dc = GetLocaleInfoA(0x400,0x1002,&DAT_5f87769c,0x40);
  _DAT_5f8776dc = _DAT_5f8776dc + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5f8776e0,8);
  DAT_5f8776e8 = iVar4 + -1;
  DAT_5f8776f4 = 1;
  _mbscpy(&DAT_5f8776ec,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5f8776f8,8);
  DAT_5f877700 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5f877704,8);
  DAT_5f87770c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5f877710 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5f877714 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5f877718 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5f87771c,8);
  DAT_5f877724 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5f877728,8);
  DAT_5f877730 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5f877734 = atoi(local_48);
  lstrcpynA(&DAT_5f877738,":",8);
  DAT_5f87773f = 0;
  DAT_5f877740 = lstrlenA(&DAT_5f877738);
  FUN_5f825330((uchar *)"SMPTE.Whole",&DAT_5f877738);
  lstrcpynA(&DAT_5f877744,".",8);
  DAT_5f87774b = 0;
  DAT_5f87774c = lstrlenA(&DAT_5f877744);
  FUN_5f825330((uchar *)"SMPTE.NonDrop",&DAT_5f877744);
  lstrcpynA(&DAT_5f877750,",",8);
  DAT_5f877757 = 0;
  DAT_5f877758 = lstrlenA(&DAT_5f877750);
  FUN_5f825330((uchar *)"SMPTE.Drop",&DAT_5f877750);
  pBVar1 = FUN_5f818540(DAT_5f877520,0x10cb);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5f818540(DAT_5f877520,0x10cc);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5f877768,".",8);
  DAT_5f87776f = 0;
  DAT_5f877770 = lstrlenA(&DAT_5f877768);
  FUN_5f825330("m.b",&DAT_5f877768);
  lstrcpynA(&DAT_5f877774,".",8);
  DAT_5f87777b = 0;
  DAT_5f87777c = lstrlenA(&DAT_5f877774);
  FUN_5f825330("b.t",&DAT_5f877774);
  pBVar1 = FUN_5f818540(DAT_5f877520,0x10cd);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5f818540(DAT_5f877520,0x10ce);
  FUN_5f825e30(local_40,pBVar1);
  FUN_5f825330((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


