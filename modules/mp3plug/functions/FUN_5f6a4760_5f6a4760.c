/* Module: mp3plug.dll
   Function: FUN_5f6a4760
   Address: 5f6a4760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f6a4760(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (*(LPCVOID *)(param_1 + 0x78) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  pvVar1 = GlobalAlloc(0x42,0x7d18);
  puVar2 = GlobalLock(pvVar1);
  *(undefined4 **)(param_1 + 0x78) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0x3ff00000;
    iVar5 = 1;
    do {
      iVar3 = *(int *)(param_1 + 0x88) / 2 + 1;
      iVar4 = iVar3 * iVar5;
      iVar5 = iVar5 + 1;
      fVar6 = (float10)iVar4 * (float10)_DAT_5f734a90 * (float10)_DAT_5f734a88;
      fVar7 = fVar6 / (float10)iVar3 + (float10)_DAT_5f734a88;
      fVar8 = (float10)fcos(fVar7);
      fVar9 = (float10)fcos(fVar7 + fVar7);
      fVar7 = (float10)fcos(fVar7 * (float10)_DAT_5f734a68);
      fVar10 = (float10)fsin(fVar6);
      *(double *)(*(int *)(param_1 + 0x78) + -8 + iVar5 * 8) =
           (double)((fVar10 / fVar6) *
                   ((fVar9 * (float10)_DAT_5f734a70 +
                    ((float10)_DAT_5f734a78 - fVar8 * (float10)_DAT_5f734a80)) -
                   fVar7 * (float10)_DAT_5f734a60));
    } while (iVar5 < 4000);
    iVar5 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(iVar5 + 32000) = *(undefined4 *)(iVar5 + 0x7cf8);
    *(undefined4 *)(iVar5 + 0x7d04) = *(undefined4 *)(iVar5 + 0x7cfc);
    *(double *)(param_1 + 0x80) = _DAT_5f734a58 / (double)(*(int *)(param_1 + 0x88) / 2 + 1);
    return 0;
  }
  return 0x8007000e;
}


