/* Module: Setup.exe
   Function: _SfLang_GetInternationals@8
   Address: 00405780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfLang_GetInternationals_8(uint *param_1,uint param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  CHAR local_48 [8];
  uchar local_40 [64];
  
                    /* 0x5780  210  _SfLang_GetInternationals@8 */
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
    uVar2 = DAT_00448ea0;
    if (param_2 < DAT_00448ea0) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_00448ea0;
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
  puVar5 = &DAT_00448ea0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_00448ea0 = 0x1c0;
  DAT_00448ea4 = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_00448ea8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_00448eac,0x40);
  DAT_00448eec = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_00448ef0,0x40);
  DAT_00448f30 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_00448f34 = atoi(local_48);
  _DAT_00448f78 = GetLocaleInfoA(0x400,6,&DAT_00448f38,0x40);
  _DAT_00448f78 = _DAT_00448f78 + -1;
  _DAT_00448fbc = GetLocaleInfoA(0x400,0x1002,&DAT_00448f7c,0x40);
  _DAT_00448fbc = _DAT_00448fbc + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_00448fc0,8);
  DAT_00448fc8 = iVar4 + -1;
  DAT_00448fd4 = 1;
  _mbscpy(&DAT_00448fcc,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_00448fd8,8);
  DAT_00448fe0 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_00448fe4,8);
  DAT_00448fec = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_00448ff0 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_00448ff4 = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_00448ff8 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_00448ffc,8);
  DAT_00449004 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_00449008,8);
  DAT_00449010 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_00449014 = atoi(local_48);
  lstrcpynA(&DAT_00449018,":",8);
  DAT_0044901f = 0;
  DAT_00449020 = lstrlenA(&DAT_00449018);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Whole",&DAT_00449018);
  lstrcpynA(&DAT_00449024,".",8);
  DAT_0044902b = 0;
  DAT_0044902c = lstrlenA(&DAT_00449024);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.NonDrop",&DAT_00449024);
  lstrcpynA(&DAT_00449030,",",8);
  DAT_00449037 = 0;
  DAT_00449038 = lstrlenA(&DAT_00449030);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Drop",&DAT_00449030);
  pBVar1 = _SfGetString2_8(DAT_00448e00,0x10cc);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Label.NonDrop",local_40);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Label.Drop",local_40);
  pBVar1 = _SfGetString2_8(DAT_00448e00,0x10cd);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Label.NonDrop.Full",local_40);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_00449048,".",8);
  DAT_0044904f = 0;
  DAT_00449050 = lstrlenA(&DAT_00449048);
  _SfPrintF_AddToken_8("m.b",&DAT_00449048);
  lstrcpynA(&DAT_00449054,".",8);
  DAT_0044905b = 0;
  DAT_0044905c = lstrlenA(&DAT_00449054);
  _SfPrintF_AddToken_8("b.t",&DAT_00449054);
  pBVar1 = _SfGetString2_8(DAT_00448e00,0x10ce);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"MusicTime.Label",local_40);
  pBVar1 = _SfGetString2_8(DAT_00448e00,0x10cf);
  SfPrintF(local_40,pBVar1);
  _SfPrintF_AddToken_8((uchar *)"MusicTime.Label.Full",local_40);
  return 0;
}


