/* Module: aviplug.dll
   Function: FUN_5f9816e0
   Address: 5f9816e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f9816e0(uint *param_1,uint param_2)

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
    uVar2 = DAT_5f9f5a18;
    if (param_2 < DAT_5f9f5a18) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_5f9f5a18;
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
  puVar5 = &DAT_5f9f5a18;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_5f9f5a18 = 0x1c0;
  DAT_5f9f5a1c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_5f9f5a20 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_5f9f5a24,0x40);
  DAT_5f9f5a64 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_5f9f5a68,0x40);
  DAT_5f9f5aa8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_5f9f5aac = atoi(local_48);
  _DAT_5f9f5af0 = GetLocaleInfoA(0x400,6,&DAT_5f9f5ab0,0x40);
  _DAT_5f9f5af0 = _DAT_5f9f5af0 + -1;
  _DAT_5f9f5b34 = GetLocaleInfoA(0x400,0x1002,&DAT_5f9f5af4,0x40);
  _DAT_5f9f5b34 = _DAT_5f9f5b34 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_5f9f5b38,8);
  DAT_5f9f5b40 = iVar4 + -1;
  DAT_5f9f5b4c = 1;
  _mbscpy(&DAT_5f9f5b44,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_5f9f5b50,8);
  DAT_5f9f5b58 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_5f9f5b5c,8);
  DAT_5f9f5b64 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_5f9f5b68 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_5f9f5b6c = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_5f9f5b70 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_5f9f5b74,8);
  DAT_5f9f5b7c = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_5f9f5b80,8);
  DAT_5f9f5b88 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_5f9f5b8c = atoi(local_48);
  lstrcpynA(&DAT_5f9f5b90,":",8);
  DAT_5f9f5b97 = 0;
  DAT_5f9f5b98 = lstrlenA(&DAT_5f9f5b90);
  FUN_5f987a70((uchar *)"SMPTE.Whole",&DAT_5f9f5b90);
  lstrcpynA(&DAT_5f9f5b9c,".",8);
  DAT_5f9f5ba3 = 0;
  DAT_5f9f5ba4 = lstrlenA(&DAT_5f9f5b9c);
  FUN_5f987a70((uchar *)"SMPTE.NonDrop",&DAT_5f9f5b9c);
  lstrcpynA(&DAT_5f9f5ba8,",",8);
  DAT_5f9f5baf = 0;
  DAT_5f9f5bb0 = lstrlenA(&DAT_5f9f5ba8);
  FUN_5f987a70((uchar *)"SMPTE.Drop",&DAT_5f9f5ba8);
  pBVar1 = FUN_5f981f60(DAT_5f9f5978,0x10cc);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"SMPTE.Label.NonDrop",local_40);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = FUN_5f981f60(DAT_5f9f5978,0x10cd);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_5f9f5bc0,".",8);
  DAT_5f9f5bc7 = 0;
  DAT_5f9f5bc8 = lstrlenA(&DAT_5f9f5bc0);
  FUN_5f987a70("m.b",&DAT_5f9f5bc0);
  lstrcpynA(&DAT_5f9f5bcc,".",8);
  DAT_5f9f5bd3 = 0;
  DAT_5f9f5bd4 = lstrlenA(&DAT_5f9f5bcc);
  FUN_5f987a70("b.t",&DAT_5f9f5bcc);
  pBVar1 = FUN_5f981f60(DAT_5f9f5978,0x10ce);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"MusicTime.Label",local_40);
  pBVar1 = FUN_5f981f60(DAT_5f9f5978,0x10cf);
  FUN_5f988570(local_40,pBVar1);
  FUN_5f987a70((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


