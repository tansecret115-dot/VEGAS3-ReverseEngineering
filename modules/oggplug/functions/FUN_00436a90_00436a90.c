/* Module: oggplug.dll
   Function: FUN_00436a90
   Address: 00436a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00436a90(uint *param_1,uint param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  fVar1 = _DAT_0044d74c / param_3;
  puVar6 = param_1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_1 = param_2;
  param_1[5] = (uint)fVar1;
  pvVar2 = malloc(param_2 * 4);
  uVar5 = param_2 * 4 + 4;
  param_1[1] = (uint)pvVar2;
  pvVar2 = malloc(uVar5);
  param_1[2] = (uint)pvVar2;
  pvVar2 = calloc(param_2 * 2,4);
  uVar4 = param_2 & 0x3fffffff;
  param_1[3] = (uint)pvVar2;
  puVar7 = (undefined4 *)param_1[1];
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar7 = (undefined4 *)param_1[2];
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *param_5;
    param_5 = param_5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_5;
    param_5 = (undefined4 *)((int)param_5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return;
}


