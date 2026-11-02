/* Module: vegas30k.dll
   Function: _SfLang_GetInternationals@8
   Address: 010c4f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfLang_GetInternationals_8(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  CHAR local_48 [8];
  undefined1 local_40 [64];
  
                    /* 0xc4f30  1046  _SfLang_GetInternationals@8 */
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
    uVar2 = DAT_0120e668;
    if (param_2 < DAT_0120e668) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_0120e668;
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
  puVar5 = &DAT_0120e668;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_0120e668 = 0x1c0;
  DAT_0120e66c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_0120e670 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_0120e674,0x40);
  DAT_0120e6b4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_0120e6b8,0x40);
  DAT_0120e6f8 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_0120e6fc = atoi(local_48);
  _DAT_0120e740 = GetLocaleInfoA(0x400,6,&DAT_0120e700,0x40);
  _DAT_0120e740 = _DAT_0120e740 + -1;
  _DAT_0120e784 = GetLocaleInfoA(0x400,0x1002,&DAT_0120e744,0x40);
  _DAT_0120e784 = _DAT_0120e784 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_0120e788,8);
  DAT_0120e790 = iVar4 + -1;
  DAT_0120e79c = 1;
  _mbscpy(&DAT_0120e794,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_0120e7a0,8);
  DAT_0120e7a8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_0120e7ac,8);
  DAT_0120e7b4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_0120e7b8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_0120e7bc = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_0120e7c0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_0120e7c4,8);
  DAT_0120e7cc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_0120e7d0,8);
  DAT_0120e7d8 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_0120e7dc = atoi(local_48);
  lstrcpynA(&DAT_0120e7e0,":",8);
  DAT_0120e7e7 = 0;
  DAT_0120e7e8 = lstrlenA(&DAT_0120e7e0);
  _SfPrintF_AddToken_8("SMPTE.Whole",&DAT_0120e7e0);
  lstrcpynA(&DAT_0120e7ec,".",8);
  DAT_0120e7f3 = 0;
  DAT_0120e7f4 = lstrlenA(&DAT_0120e7ec);
  _SfPrintF_AddToken_8("SMPTE.NonDrop",&DAT_0120e7ec);
  lstrcpynA(&DAT_0120e7f8,",",8);
  DAT_0120e7ff = 0;
  DAT_0120e800 = lstrlenA(&DAT_0120e7f8);
  _SfPrintF_AddToken_8("SMPTE.Drop",&DAT_0120e7f8);
  uVar1 = _SfGetString2_8(DAT_0120e5c8,0x10cc);
  SfPrintF(local_40,uVar1,&DAT_0120e7e0,&DAT_0120e7e0,&DAT_0120e7ec);
  _SfPrintF_AddToken_8("SMPTE.Label.NonDrop",local_40);
  SfPrintF(local_40,uVar1,&DAT_0120e7e0,&DAT_0120e7e0,&DAT_0120e7f8);
  _SfPrintF_AddToken_8("SMPTE.Label.Drop",local_40);
  uVar1 = _SfGetString2_8(DAT_0120e5c8,0x10cd);
  SfPrintF(local_40,uVar1,&DAT_0120e7e0,&DAT_0120e7e0,&DAT_0120e7ec);
  _SfPrintF_AddToken_8("SMPTE.Label.NonDrop.Full",local_40);
  SfPrintF(local_40,uVar1,&DAT_0120e7e0,&DAT_0120e7e0,&DAT_0120e7f8);
  _SfPrintF_AddToken_8("SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_0120e810,".",8);
  DAT_0120e817 = 0;
  DAT_0120e818 = lstrlenA(&DAT_0120e810);
  _SfPrintF_AddToken_8(&DAT_011e2bd0,&DAT_0120e810);
  lstrcpynA(&DAT_0120e81c,".",8);
  DAT_0120e823 = 0;
  DAT_0120e824 = lstrlenA(&DAT_0120e81c);
  _SfPrintF_AddToken_8(&DAT_011e2bcc,&DAT_0120e81c);
  uVar1 = _SfGetString2_8(DAT_0120e5c8,0x10ce);
  SfPrintF(local_40,uVar1,&DAT_0120e810,&DAT_0120e81c);
  _SfPrintF_AddToken_8("MusicTime.Label",local_40);
  uVar1 = _SfGetString2_8(DAT_0120e5c8,0x10cf);
  SfPrintF(local_40,uVar1,&DAT_0120e810,&DAT_0120e81c);
  _SfPrintF_AddToken_8("MusicTime.Label.Full",local_40);
  return 0;
}


