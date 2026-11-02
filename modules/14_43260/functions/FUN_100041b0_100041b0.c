/* Module: 14_43260.dll
   Function: FUN_100041b0
   Address: 100041b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100041b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  void *_Memory;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  float10 fVar8;
  uint local_10;
  float *local_c;
  uint local_8;
  
  *(undefined4 *)(param_1 + 0x165e) = 0;
  _Memory = calloc(0x85,1);
  pvVar3 = calloc(*(size_t *)(param_1 + 0x99a),4);
  *(void **)(param_1 + 0x9aa) = pvVar3;
  pvVar3 = calloc(*(int *)(param_1 + 0x95a) * 0x1e,4);
  *(void **)(param_1 + 0x9ae) = pvVar3;
  pvVar3 = calloc(*(int *)(param_1 + 0x95a) << 1,4);
  *(void **)(param_1 + 0x9b2) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x99e),4);
  *(void **)(param_1 + 0x9a6) = pvVar3;
  pvVar3 = calloc(0xb,4);
  *(void **)(param_1 + 0xa4a) = pvVar3;
  pvVar3 = calloc(10,4);
  *(void **)(param_1 + 0xa4e) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa52) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa7e) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa56) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa82) = pvVar3;
  *(undefined **)(param_1 + 0xa62) = &DAT_10012908;
  *(undefined **)(param_1 + 0xa66) = &DAT_10012d68;
  pvVar3 = calloc(*(int *)(param_1 + 0x962) * *(int *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa86) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x962),4);
  *(void **)(param_1 + 0xa6a) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa5a) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa8a) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa5e) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa8e) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x986),4);
  *(void **)(param_1 + 0xa92) = pvVar3;
  pvVar3 = calloc(*(int *)(param_1 + 0x986) - *(int *)(param_1 + 0x996),4);
  *(void **)(param_1 + 0xa96) = pvVar3;
  *(int *)(param_1 + 0xa9a) =
       *(int *)(param_1 + 0xa92) + (*(int *)(param_1 + 0x986) - *(int *)(param_1 + 0x996)) * 4;
  pvVar3 = calloc((1 << ((byte)*(undefined4 *)(param_1 + 0x962) & 0x1f)) - 2,4);
  *(void **)(param_1 + 0xa9e) = pvVar3;
  *(undefined **)(param_1 + 0xa7a) = &DAT_100131c8;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x986),4);
  *(void **)(param_1 + 0xaa6) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x996),4);
  _DAT_100155c8 = _DAT_10010c60;
  iVar2 = *(int *)(param_1 + 0x996);
  *(void **)(param_1 + 0xaaa) = pvVar3;
  *(undefined **)(param_1 + 0xa1a) = &DAT_100155c8;
  local_c = (float *)&DAT_100155d0;
  _DAT_100155cc = SQRT((float)iVar2) * _DAT_10010c64;
  do {
    fVar8 = (float10)_CIpow();
    *local_c = (float)((float10)SQRT((float)iVar2) * fVar8);
    local_c = local_c + 1;
  } while (local_c < &DAT_100156c4);
  *(undefined **)(param_1 + 0xa1e) = &DAT_100156c4;
  *(undefined **)(param_1 + 0xa22) = &DAT_100158c0;
  *(undefined **)(param_1 + 0xa26) = &DAT_100159bc;
  *(undefined **)(param_1 + 0xa2a) = &DAT_10015ab8;
  *(undefined **)(param_1 + 0xa2e) = &DAT_10015b34;
  *(undefined **)(param_1 + 0xa32) = &DAT_10015bb0;
  *(undefined **)(param_1 + 0xa36) = &DAT_10015bec;
  *(undefined **)(param_1 + 0xa3a) = &DAT_10015c28;
  *(undefined **)(param_1 + 0xa3e) = &DAT_10015c64;
  *(undefined **)(param_1 + 0xa42) = &DAT_10015ca0;
  *(undefined **)(param_1 + 0xa46) = &DAT_10015cb8;
  **(undefined4 **)(param_1 + 0xa4a) = 0x3f800000;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  local_10 = 1;
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  local_8 = 0;
  *puVar5 = 0x3f7fe8ab;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7fa2be;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7f2e6a;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7e8bd2;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7dbb6b;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7cbd98;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7b92e2;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f7a3c00;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f78b988;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa4a) + 4);
  *(undefined4 **)(param_1 + 0xa4a) = puVar5;
  *puVar5 = 0x3f770c56;
  *(int *)(param_1 + 0xa4a) = *(int *)(param_1 + 0xa4a) + -0x28;
  local_c = (float *)(1 << ((byte)*(undefined4 *)(param_1 + 0x962) & 0x1f));
  puVar6 = *(uint **)(param_1 + 0xa9e);
  puVar1 = puVar6 + ((int)local_c - 2);
  for (; puVar6 < puVar1; puVar6 = puVar6 + 2) {
    local_c = (float *)((int)local_c - 1);
    uVar4 = local_10 & (uint)local_c;
    local_8 = local_8 ^ uVar4;
    uVar7 = 0;
    for (; uVar4 != 1; uVar4 = (int)uVar4 >> 1) {
      uVar7 = uVar7 + 1;
    }
    *puVar6 = local_8;
    puVar6[1] = uVar7;
    local_10 = local_10 + 1;
  }
  puVar5 = calloc(0xb,4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3f800000;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3f6c4ec6;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3f39ab9f;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3ef78f69;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3e8b40b3;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3e030fd0;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3d4bdfd2;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3c80c309;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3b80c73b;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x3a44156e;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xaa2) + 4);
  *(undefined4 **)(param_1 + 0xaa2) = puVar5;
  *puVar5 = 0x38d5e8d5;
  *(int *)(param_1 + 0xaa2) = *(int *)(param_1 + 0xaa2) + -0x28;
  free(_Memory);
  return;
}


