/* Module: vidcap30.exe
   Function: _SfLang_GetInternationals@8
   Address: 0047b5a0
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
  
                    /* 0x7b5a0  480  _SfLang_GetInternationals@8 */
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
    uVar2 = DAT_005c1778;
    if (param_2 < DAT_005c1778) {
      uVar2 = param_2;
    }
    puVar5 = &DAT_005c1778;
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
  puVar5 = &DAT_005c1778;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  DAT_005c1778 = 0x1c0;
  DAT_005c177c = GetSystemDefaultLCID();
  GetLocaleInfoA(0x400,1,local_48,8);
  DAT_005c1780 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,2,&DAT_005c1784,0x40);
  DAT_005c17c4 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x1001,&DAT_005c17c8,0x40);
  DAT_005c1808 = iVar4 + -1;
  GetLocaleInfoA(0x400,5,local_48,8);
  DAT_005c180c = atoi(local_48);
  _DAT_005c1850 = GetLocaleInfoA(0x400,6,&DAT_005c1810,0x40);
  _DAT_005c1850 = _DAT_005c1850 + -1;
  _DAT_005c1894 = GetLocaleInfoA(0x400,0x1002,&DAT_005c1854,0x40);
  _DAT_005c1894 = _DAT_005c1894 + -1;
  iVar4 = GetLocaleInfoA(0x400,0x51,&DAT_005c1898,8);
  DAT_005c18a0 = iVar4 + -1;
  DAT_005c18ac = 1;
  _mbscpy(&DAT_005c18a4,"-");
  iVar4 = GetLocaleInfoA(0x400,0xf,&DAT_005c18b0,8);
  DAT_005c18b8 = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xe,&DAT_005c18bc,8);
  DAT_005c18c4 = iVar4 + -1;
  GetLocaleInfoA(0x400,0x10,local_48,8);
  DAT_005c18c8 = atoi(local_48);
  GetLocaleInfoA(0x400,0x11,local_48,8);
  _DAT_005c18cc = atoi(local_48);
  GetLocaleInfoA(0x400,0x12,local_48,8);
  DAT_005c18d0 = atoi(local_48);
  iVar4 = GetLocaleInfoA(0x400,0x1e,&DAT_005c18d4,8);
  DAT_005c18dc = iVar4 + -1;
  iVar4 = GetLocaleInfoA(0x400,0xc,&DAT_005c18e0,8);
  DAT_005c18e8 = iVar4 + -1;
  GetLocaleInfoA(0x400,0xd,local_48,8);
  _DAT_005c18ec = atoi(local_48);
  lstrcpynA(&DAT_005c18f0,":",8);
  DAT_005c18f7 = 0;
  DAT_005c18f8 = lstrlenA(&DAT_005c18f0);
  _SfPrintF_AddToken_8("SMPTE.Whole",&DAT_005c18f0);
  lstrcpynA(&DAT_005c18fc,".",8);
  DAT_005c1903 = 0;
  DAT_005c1904 = lstrlenA(&DAT_005c18fc);
  _SfPrintF_AddToken_8("SMPTE.NonDrop",&DAT_005c18fc);
  lstrcpynA(&DAT_005c1908,",",8);
  DAT_005c190f = 0;
  DAT_005c1910 = lstrlenA(&DAT_005c1908);
  _SfPrintF_AddToken_8("SMPTE.Drop",&DAT_005c1908);
  uVar1 = _SfGetString2_8(DAT_005c16d8,0x10cc);
  SfPrintF(local_40,uVar1,&DAT_005c18f0,&DAT_005c18f0,&DAT_005c18fc);
  _SfPrintF_AddToken_8("SMPTE.Label.NonDrop",local_40);
  SfPrintF(local_40,uVar1,&DAT_005c18f0,&DAT_005c18f0,&DAT_005c1908);
  _SfPrintF_AddToken_8("SMPTE.Label.Drop",local_40);
  uVar1 = _SfGetString2_8(DAT_005c16d8,0x10cd);
  SfPrintF(local_40,uVar1,&DAT_005c18f0,&DAT_005c18f0,&DAT_005c18fc);
  _SfPrintF_AddToken_8("SMPTE.Label.NonDrop.Full",local_40);
  SfPrintF(local_40,uVar1,&DAT_005c18f0,&DAT_005c18f0,&DAT_005c1908);
  _SfPrintF_AddToken_8("SMPTE.Label.Drop.Full",local_40);
  lstrcpynA(&DAT_005c1920,".",8);
  DAT_005c1927 = 0;
  DAT_005c1928 = lstrlenA(&DAT_005c1920);
  _SfPrintF_AddToken_8(&PTR_DAT_00593b44,&DAT_005c1920);
  lstrcpynA(&DAT_005c192c,".",8);
  DAT_005c1933 = 0;
  DAT_005c1934 = lstrlenA(&DAT_005c192c);
  _SfPrintF_AddToken_8(&DAT_00593b40,&DAT_005c192c);
  uVar1 = _SfGetString2_8(DAT_005c16d8,0x10ce);
  SfPrintF(local_40,uVar1,&DAT_005c1920,&DAT_005c192c);
  _SfPrintF_AddToken_8("MusicTime.Label",local_40);
  uVar1 = _SfGetString2_8(DAT_005c16d8,0x10cf);
  SfPrintF(local_40,uVar1,&DAT_005c1920,&DAT_005c192c);
  _SfPrintF_AddToken_8("MusicTime.Label.Full",local_40);
  return 0;
}


