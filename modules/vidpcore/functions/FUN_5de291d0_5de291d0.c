/* Module: vidpcore.dll
   Function: FUN_5de291d0
   Address: 5de291d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_5de291d0(int param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  wchar_t *_Dest;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  FUN_5de055a0();
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_5df1a620;
  *(undefined ***)(param_1 + 0x108) = &PTR_LAB_5df186b8;
  puVar7 = (undefined4 *)(param_1 + 0x110);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_5df1a608;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x184));
  puVar7 = (undefined4 *)(param_1 + 0x19c);
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  puVar7 = (undefined4 *)(param_1 + 0x220);
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  puVar7 = (undefined4 *)(param_1 + 0x2a8);
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  puVar7 = (undefined4 *)(param_1 + 0x32c);
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  puVar7 = (undefined4 *)(param_1 + 0x148);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  FUN_5de8ce60(0x140,0xf0);
  *(undefined4 *)(param_1 + 0x1d8) = 1;
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 100;
  *(undefined4 *)(param_1 + 0x1ac) = 400;
  *(undefined1 *)(param_1 + 0x1b3) = 1;
  *(undefined1 *)(param_1 + 0x1b4) = 7;
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  *(undefined1 *)(param_1 + 0x1b6) = 0;
  *(undefined1 *)(param_1 + 0x1b7) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
  pcVar6 = "Arial";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = (char *)(param_1 + 0x1b8);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x208) = DAT_5df180b0;
  *(undefined4 *)(param_1 + 0x20c) = DAT_5df180b4;
  *(undefined4 *)(param_1 + 0x210) = DAT_5df180b8;
  *(undefined4 *)(param_1 + 0x214) = DAT_5df180bc;
  local_4 = DAT_5df1ac54;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  if (*(LPCVOID *)(param_1 + 0x21c) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x21c));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x21c));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  pvVar2 = GlobalAlloc(0x40,10);
  _Dest = GlobalLock(pvVar2);
  *(wchar_t **)(param_1 + 0x21c) = _Dest;
  *(undefined4 *)(param_1 + 0x218) = 5;
  wcsncpy(_Dest,(wchar_t *)&local_c,5);
  *(undefined4 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a8) = 100;
  *(undefined4 *)(param_1 + 0x2b8) = 400;
  *(undefined1 *)(param_1 + 0x2bf) = 1;
  *(undefined1 *)(param_1 + 0x2c0) = 7;
  *(undefined1 *)(param_1 + 0x2c1) = 0;
  *(undefined1 *)(param_1 + 0x2c2) = 0;
  *(undefined1 *)(param_1 + 0x2c3) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x310) = 0x3f800000;
  pcVar6 = "Arial";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = (char *)(param_1 + 0x2c4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x304) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x314) = DAT_5df180b0;
  *(undefined4 *)(param_1 + 0x318) = DAT_5df180b4;
  *(undefined4 *)(param_1 + 0x31c) = DAT_5df180b8;
  *(undefined4 *)(param_1 + 800) = DAT_5df180bc;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  local_4 = DAT_5df1ac54;
  FUN_5de29540(5);
  wcsncpy(*(wchar_t **)(param_1 + 0x328),(wchar_t *)&local_c,5);
  FUN_5de295b0();
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0xb;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x128) = 0x80;
  return param_1;
}


