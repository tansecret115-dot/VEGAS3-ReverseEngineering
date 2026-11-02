/* Module: 14_43260.dll
   Function: FUN_100052d0
   Address: 100052d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100052d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float *_Memory;
  undefined4 *_Memory_00;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 local_c;
  
  local_c = 0;
  _Memory = calloc(10,4);
  _Memory_00 = calloc(10,4);
  puVar1 = param_1 + 10;
  puVar9 = _Memory_00;
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    *puVar9 = *param_1;
    puVar9 = puVar9 + 1;
  }
  fVar2 = (float)puVar9[-1];
  fVar3 = (float)_DAT_10010ca8;
  pfVar5 = (float *)(param_2 + 0x24);
  *pfVar5 = fVar2;
  if ((fVar3 <= fVar2) || (fVar2 < (float)_DAT_10010cb0)) {
    local_c = 1;
  }
  param_1 = (undefined4 *)0x8;
  param_2 = 0x20;
  pfVar7 = _Memory;
  pfVar10 = (float *)(puVar9 + -10);
  do {
    pfVar6 = pfVar7;
    if (-1 < param_2) {
      pfVar7 = (float *)((int)pfVar10 + param_2);
      iVar8 = (int)param_1 + 1;
      pfVar4 = pfVar6;
      do {
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + -1;
        iVar8 = iVar8 + -1;
        *pfVar4 = (*(float *)(((int)pfVar10 - (int)pfVar6) + (int)pfVar4) - *pfVar5 * fVar2) *
                  ((float)_DAT_10010ca8 / ((float)_DAT_10010ca8 - *pfVar5 * *pfVar5));
        pfVar4 = pfVar4 + 1;
      } while (iVar8 != 0);
    }
    pfVar5 = pfVar5 + -1;
    *pfVar5 = *(float *)((int)pfVar6 + param_2);
    if (((float)_DAT_10010ca8 <= *pfVar5) || (*pfVar5 < (float)_DAT_10010cb0)) {
      local_c = 1;
    }
    param_1 = (undefined4 *)((int)param_1 + -1);
    param_2 = param_2 + -4;
    pfVar7 = pfVar10;
    pfVar10 = pfVar6;
  } while (-1 < param_2);
  free(_Memory);
  free(_Memory_00);
  return local_c;
}


