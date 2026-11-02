/* Module: mp3plug.dll
   Function: FUN_5f6cd820
   Address: 5f6cd820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6cd820(int param_1,uint param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  
  uVar5 = FUN_5f6ceee0(param_2,param_3);
  uVar4 = _DAT_5f75c030;
  uVar3 = _DAT_5f75c018;
  uVar6 = param_2;
  if (param_3 < param_2) {
    uVar6 = param_3;
  }
  if ((float)uVar6 * _DAT_5f75c010 < param_4) {
    uVar6 = param_2;
    if (param_3 < param_2) {
      uVar6 = param_3;
    }
    param_4 = (float)uVar6 * _DAT_5f75c014;
  }
  fVar2 = _DAT_5f75c020 / (float)(int)((param_2 * param_3) / uVar5);
  fVar1 = _DAT_5f75c024 * param_4;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(float *)(param_1 + 0x2c) = ((float)param_3 - fVar1) * fVar2;
  *(float *)(param_1 + 0x28) = fVar2 * ((float)param_3 - param_4);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x42b40000;
  iVar7 = FUN_5f6cf190();
  if (iVar7 != 0) {
    pvVar8 = calloc(*(size_t *)(param_1 + 0x3c),4);
    *(void **)(param_1 + 0x38) = pvVar8;
    pvVar8 = calloc(*(size_t *)(param_1 + 0x48),4);
    *(void **)(param_1 + 0x44) = pvVar8;
    return 1;
  }
  return 0;
}


