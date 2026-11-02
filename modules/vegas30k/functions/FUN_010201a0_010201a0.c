/* Module: vegas30k.dll
   Function: FUN_010201a0
   Address: 010201a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_010201a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_32c;
  uint local_324;
  int local_320;
  int local_31c;
  undefined4 *local_318;
  undefined2 local_314;
  ushort uStack_312;
  int aiStack_310 [131];
  char local_104;
  char local_103;
  
  local_32c = 0;
  iVar1 = **(int **)(param_1 + 0xc);
  if (0 < iVar1) {
    do {
      piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + local_32c * 4);
      local_324 = 0x10000;
      FUN_010202e0(piVar6 + 1,&local_104);
      if (((local_104 != '\\') && (local_103 != ':')) ||
         (iVar2 = FUN_0101fa10(&local_104), iVar2 != 0)) {
        local_324 = local_324 | 0x20000;
      }
      local_320 = *(int *)(param_1 + 4) + 8;
      local_31c = *(int *)(param_1 + 4) + 9;
      local_314 = (undefined2)*piVar6;
      uStack_312 = *(ushort *)((int)piVar6 + 2);
      iVar2 = *piVar6;
      uVar5 = (uint)uStack_312 + iVar2 & 0xffff;
      piVar6 = piVar6 + 1;
      piVar7 = aiStack_310;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar4 = (uint)uStack_312 + iVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar7 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      puVar3 = calloc(1,0x18);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 6;
        local_318 = puVar3;
        _SfList_AllocAndInsertItem_20(param_2,&local_324,uVar5 + 0x17,0xffffffff,0);
      }
      local_32c = local_32c + 1;
    } while (local_32c < iVar1);
    return *param_2;
  }
  return *param_2;
}


