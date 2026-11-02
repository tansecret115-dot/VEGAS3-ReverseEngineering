/* Module: vegas30k.dll
   Function: FUN_011a7110
   Address: 011a7110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_011a7110(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x70) == 0)) {
    local_10 = 0;
    local_c = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x58);
      uVar3 = (uint)*(ushort *)(param_3 + 0xc);
      uVar2 = (uint)piVar1[1] / uVar3;
      uVar5 = param_4 - local_10;
      iVar4 = (param_5 - local_c) - (uint)(param_4 < local_10);
      if ((0 < iVar4) || ((-1 < iVar4 && (uVar2 <= uVar5)))) {
        iVar4 = 0;
        uVar5 = uVar2;
      }
      puVar6 = (undefined4 *)((piVar1[2] - piVar1[1]) + *piVar1);
      puVar7 = (undefined4 *)(uVar3 * local_10 + param_2);
      for (uVar2 = uVar3 * uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar2 = uVar3 * uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      bVar8 = CARRY4(local_10,uVar5);
      local_10 = local_10 + uVar5;
      *(uint *)(*(int *)(param_1 + 0x58) + 4) =
           *(int *)(*(int *)(param_1 + 0x58) + 4) - *(ushort *)(param_3 + 0xc) * uVar5;
      local_c = local_c + iVar4 + (uint)bVar8;
      if (*(int *)(*(int *)(param_1 + 0x58) + 4) == 0) {
        FUN_011a6e10();
      }
    } while (((*(int *)(param_1 + 100) != 0) && (*(int *)(*(int *)(param_1 + 0x58) + 0xc) != 0)) &&
            ((local_c < param_5 || ((local_c <= param_5 && (local_10 < param_4))))));
  }
  return CONCAT44(local_c,local_10);
}


