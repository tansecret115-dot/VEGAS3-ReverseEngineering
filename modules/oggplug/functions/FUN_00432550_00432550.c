/* Module: oggplug.dll
   Function: FUN_00432550
   Address: 00432550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00432550(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe24);
  puVar4 = calloc(1,0x14);
  fVar2 = (float10)log2((float10)(*(int *)(iVar1 + 4) << 3));
  fVar3 = (float10)log2((float10)_DAT_0044d710);
  floor((double)(((float10)0.6931471805599453 * fVar2) / ((float10)0.6931471805599453 * fVar3) +
                (float10)_DAT_00447a78));
  ftol();
  log2((float10)_DAT_0044d708);
  uVar5 = ftol();
  puVar4[2] = uVar5;
  pvVar6 = calloc(*(size_t *)(param_1 + 4),4);
  puVar4[1] = pvVar6;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pvVar6 = calloc(puVar4[2],4);
      *(void **)(puVar4[1] + iVar8 * 4) = pvVar6;
      iVar7 = 0;
      if (0 < (int)puVar4[2]) {
        do {
          iVar7 = iVar7 + 1;
          *(undefined4 *)(*(int *)(puVar4[1] + iVar8 * 4) + -4 + iVar7 * 4) = 0xc61c3c00;
        } while (iVar7 < (int)puVar4[2]);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 4));
  }
  puVar4[3] = *(undefined4 *)(param_1 + 4);
  *puVar4 = 0xc61c3c00;
  puVar4[4] = iVar1;
  return puVar4;
}


