/* Module: oggplug.dll
   Function: FUN_00437140
   Address: 00437140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl FUN_00437140(int param_1,size_t param_2,int param_3,int param_4)

{
  void *_Memory;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  
  _Memory = calloc(param_2,4);
  if (param_1 == 0) {
    iVar2 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
    iVar4 = iVar2 - param_3 / 2;
    iVar2 = (param_2 - param_4 / 2) - iVar2;
    param_2 = 0;
    if (0 < param_3) {
      pfVar1 = (float *)((int)_Memory + iVar4 * 4);
      do {
        fVar6 = (float10)(int)param_2;
        param_2 = param_2 + 1;
        fVar6 = (float10)fsin(((fVar6 + (float10)_DAT_0044d71c) / (float10)param_3) *
                              (float10)_DAT_0044d7c4 * (float10)_DAT_00447a78);
        fVar6 = (float10)fsin(fVar6 * fVar6 * (float10)_DAT_0044d7c0);
        *pfVar1 = (float)fVar6;
        pfVar1 = pfVar1 + 1;
      } while ((int)param_2 < param_3);
    }
    iVar4 = iVar4 + param_3;
    if (iVar4 < iVar2) {
      puVar5 = (undefined4 *)((int)_Memory + iVar4 * 4);
      for (iVar3 = iVar2 - iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0x3f800000;
        puVar5 = puVar5 + 1;
      }
    }
    if (0 < param_4) {
      fVar6 = (float10)param_4;
      param_3 = param_4;
      pfVar1 = (float *)((int)_Memory + iVar2 * 4);
      do {
        fVar7 = (float10)param_3;
        param_3 = param_3 + -1;
        param_4 = param_4 + -1;
        fVar7 = (float10)fsin(((fVar7 - (float10)_DAT_0044d71c) / fVar6) * (float10)_DAT_0044d7c4 *
                              (float10)_DAT_00447a78);
        fVar7 = (float10)fsin(fVar7 * fVar7 * (float10)_DAT_0044d7c0);
        *pfVar1 = (float)fVar7;
        pfVar1 = pfVar1 + 1;
      } while (param_4 != 0);
    }
    return _Memory;
  }
  free(_Memory);
  return (void *)0x0;
}


