/* Module: sfcd.cdd
   Function: FUN_00426650
   Address: 00426650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00426650(uint *param_1,uint param_2)

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
    uVar2 = DAT_004419d0;
    if (param_2 < DAT_004419d0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_004419d0;
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
  puVar5 = &DAT_004419d0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_004419d0 = 0x1c0;
  DAT_004419d4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_004419d8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_004419dc,0x40);
  DAT_00441a1c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00441a20,0x40);
  DAT_00441a60 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00441a64 = atoi(local_48);
  _DAT_00441aa8 = GetLocaleInfoA(0x400,6,&DAT_00441a68,0x40);
  _DAT_00441aa8 = _DAT_00441aa8 + -1;
  _DAT_00441aec = GetLocaleInfoA(0x400,0x1002,&DAT_00441aac,0x40);
  _DAT_00441aec = _DAT_00441aec + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00441af0,8);
  DAT_00441af8 = iVar4 + -1;
  DAT_00441b04 = 1;
  _mbscpy(&DAT_00441afc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00441b08,8);
  DAT_00441b10 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00441b14,8);
  DAT_00441b1c = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00441b20 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00441b24 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00441b28 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00441b2c,8);
  DAT_00441b34 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00441b38,8);
  DAT_00441b40 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00441b44 = atoi(local_48);
  lstrcpynA(&DAT_00441b48,":",8);
  DAT_00441b4f = 0;
  DAT_00441b50 = lstrlenA(&DAT_00441b48);
  FUN_0041ffa0((uchar *)"SMPTE.Whole",&DAT_00441b48);
  lstrcpynA(&DAT_00441b54,".",8);
  DAT_00441b5b = 0;
  DAT_00441b5c = lstrlenA(&DAT_00441b54);
  FUN_0041ffa0((uchar *)"SMPTE.NonDrop",&DAT_00441b54);
  lstrcpynA(&DAT_00441b60,",",8);
  DAT_00441b67 = 0;
  DAT_00441b68 = lstrlenA(&DAT_00441b60);
  FUN_0041ffa0((uchar *)"SMPTE.Drop",&DAT_00441b60);
  pBVar1 = FUN_00426ed0(DAT_00441930,0x10cc);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_00426ed0(DAT_00441930,0x10cd);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00441b78,".",8);
  DAT_00441b7f = 0;
  DAT_00441b80 = lstrlenA(&DAT_00441b78);
  FUN_0041ffa0("m.b",&DAT_00441b78);
  lstrcpynA(&DAT_00441b84,".",8);
  DAT_00441b8b = 0;
  DAT_00441b8c = lstrlenA(&DAT_00441b84);
  FUN_0041ffa0("b.t",&DAT_00441b84);
  pBVar1 = FUN_00426ed0(DAT_00441930,0x10ce);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_00426ed0(DAT_00441930,0x10cf);
  FUN_00420aa0(local_40,pBVar1);
  FUN_0041ffa0((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


