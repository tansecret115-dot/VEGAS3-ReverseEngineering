/* Module: vegas30k.dll
   Function: FUN_01041250
   Address: 01041250
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01041250(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0x90) == 0)) {
    iVar2 = 0;
    while( true ) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x26);
      piVar1 = *(int **)(param_1 + 0x78);
      iVar8 = uVar5 * iVar2;
      iVar3 = piVar1[1] / (int)uVar5;
      iVar6 = param_3 - iVar2;
      if (iVar3 <= param_3 - iVar2) {
        iVar6 = iVar3;
      }
      if (iVar6 < 1) break;
      iVar2 = iVar2 + iVar6;
      puVar7 = (undefined4 *)((piVar1[2] - piVar1[1]) + *piVar1);
      puVar9 = (undefined4 *)(iVar8 + param_2);
      for (uVar4 = uVar5 * iVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 * iVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)(*(int *)(param_1 + 0x78) + 4) =
           *(int *)(*(int *)(param_1 + 0x78) + 4) - (uint)*(ushort *)(param_1 + 0x26) * iVar6;
      if (*(int *)(*(int *)(param_1 + 0x78) + 4) == 0) {
        FUN_01040fe0();
      }
      if (*(int *)(param_1 + 0x84) == 0) {
        return iVar2;
      }
      if (*(int *)(*(int *)(param_1 + 0x78) + 4) == 0) {
        return iVar2;
      }
      if (param_3 <= iVar2) {
        return iVar2;
      }
    }
  }
  return iVar2;
}


