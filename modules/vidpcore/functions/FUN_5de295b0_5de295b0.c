/* Module: vidpcore.dll
   Function: FUN_5de295b0
   Address: 5de295b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5de295b0(undefined4 *param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  wchar_t *_Dest;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  uVar3 = 0xffffffff;
  *param_1 = 100;
  param_1[4] = 400;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  pcVar5 = "Arial";
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)(param_1 + 7);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x1b] = DAT_5df180b0;
  param_1[0x1c] = DAT_5df180b4;
  param_1[0x1d] = DAT_5df180b8;
  param_1[0x1e] = DAT_5df180bc;
  local_4 = DAT_5df1ac54;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar2);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar2 = GlobalAlloc(0x40,10);
  _Dest = GlobalLock(pvVar2);
  param_1[0x20] = _Dest;
  param_1[0x1f] = 5;
  wcsncpy(_Dest,(wchar_t *)&local_c,5);
  return 0;
}


