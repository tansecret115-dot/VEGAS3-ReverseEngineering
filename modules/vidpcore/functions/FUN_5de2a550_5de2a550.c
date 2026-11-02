/* Module: vidpcore.dll
   Function: FUN_5de2a550
   Address: 5de2a550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5de2a550(undefined4 *param_1,undefined4 *param_2,int param_3,double param_4)

{
  undefined4 *puVar1;
  char cVar2;
  float fVar3;
  HGLOBAL pvVar4;
  wchar_t *_Dest;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  uVar6 = 0xffffffff;
  *param_1 = 100;
  param_1[4] = 400;
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  pcVar10 = "Arial";
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = (char *)(param_1 + 7);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  puVar1 = param_1 + 0x1b;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  *puVar1 = DAT_5df180b0;
  param_1[0x1c] = DAT_5df180b4;
  param_1[0x1d] = DAT_5df180b8;
  param_1[0x1e] = DAT_5df180bc;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  local_4 = DAT_5df1ac54;
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar4 = GlobalAlloc(0x40,10);
  _Dest = GlobalLock(pvVar4);
  param_1[0x20] = _Dest;
  param_1[0x1f] = 5;
  wcsncpy(_Dest,(wchar_t *)&local_c,5);
  puVar9 = param_2;
  puVar11 = param_1;
  for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar6 = param_2[0x1f];
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  if (0 < (int)uVar6) {
    pvVar4 = GlobalAlloc(0x40,uVar6 * 2);
    pvVar5 = GlobalLock(pvVar4);
    param_1[0x20] = pvVar5;
  }
  param_1[0x1f] = uVar6;
  if (0 < (int)uVar6) {
    if ((undefined4 *)param_1[0x20] == (undefined4 *)0x0) {
      param_1[0xf] = 1;
      param_1[0x10] = 1;
      uVar6 = 0xffffffff;
      *param_1 = 100;
      param_1[4] = 400;
      *(undefined1 *)((int)param_1 + 0x17) = 1;
      *(undefined1 *)(param_1 + 6) = 7;
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
      *(undefined1 *)((int)param_1 + 0x1b) = 0;
      param_1[0x19] = 0x3f800000;
      param_1[0x1a] = 0x3f800000;
      pcVar10 = "Arial";
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = (char *)(param_1 + 7);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0x3f800000;
      param_1[0x16] = 0x3f800000;
      param_1[0x15] = 0x3f800000;
      param_1[0x18] = 0x3f800000;
      *puVar1 = DAT_5df180b0;
      param_1[0x1c] = DAT_5df180b4;
      param_1[0x1d] = DAT_5df180b8;
      param_1[0x1e] = DAT_5df180bc;
      local_c = _DAT_5df1ac4c;
      local_8 = DAT_5df1ac50;
      local_4 = DAT_5df1ac54;
      FUN_5de29540(5);
      wcsncpy((wchar_t *)param_1[0x20],(wchar_t *)&local_c,5);
    }
    else {
      puVar9 = (undefined4 *)param_2[0x20];
      puVar11 = (undefined4 *)param_1[0x20];
      for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
  }
  fVar3 = (float)param_4;
  param_1[0x19] = (*(float *)(param_3 + 100) - (float)param_2[0x19]) * fVar3 + (float)param_2[0x19];
  param_1[0x1a] = (*(float *)(param_3 + 0x68) - (float)param_2[0x1a]) * fVar3 + (float)param_2[0x1a]
  ;
  param_1[0x11] = (*(float *)(param_3 + 0x44) - (float)param_2[0x11]) * fVar3 + (float)param_2[0x11]
  ;
  param_1[0x12] = (*(float *)(param_3 + 0x48) - (float)param_2[0x12]) * fVar3 + (float)param_2[0x12]
  ;
  param_1[0x13] = (*(float *)(param_3 + 0x4c) - (float)param_2[0x13]) * fVar3 + (float)param_2[0x13]
  ;
  param_1[0x14] = (*(float *)(param_3 + 0x50) - (float)param_2[0x14]) * fVar3 + (float)param_2[0x14]
  ;
  param_1[0x15] = (*(float *)(param_3 + 0x54) - (float)param_2[0x15]) * fVar3 + (float)param_2[0x15]
  ;
  param_1[0x16] = (*(float *)(param_3 + 0x58) - (float)param_2[0x16]) * fVar3 + (float)param_2[0x16]
  ;
  param_1[0x17] = (*(float *)(param_3 + 0x5c) - (float)param_2[0x17]) * fVar3 + (float)param_2[0x17]
  ;
  param_1[0x18] = (*(float *)(param_3 + 0x60) - (float)param_2[0x18]) * fVar3 + (float)param_2[0x18]
  ;
  *puVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  return 0;
}


