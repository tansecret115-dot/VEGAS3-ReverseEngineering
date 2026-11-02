/* Module: vegas30.exe
   Function: FUN_0047df40
   Address: 0047df40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047df54) */

undefined4 FUN_0047df40(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_10;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 0x44);
    if ((iVar7 < 0) || (*piVar1 + -1 < iVar7)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(piVar1[2] + iVar7 * 4);
    }
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0xc) & 4) == 0)) {
      puVar2 = *(uint **)(iVar7 + 0x30);
      iVar7 = 0;
      uVar8 = 0;
      local_10 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (*puVar2 != 0) {
        do {
          uVar3 = *(uint *)(puVar2[1] * uVar8 + puVar2[2]);
          iVar4 = *(int *)(puVar2[1] * uVar8 + puVar2[2] + 4);
          uVar6 = local_10;
          if ((param_3 <= iVar4) && ((param_3 < iVar4 || (param_2 <= uVar3)))) {
            iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar5 < iVar4) || ((iVar5 <= iVar4 && (param_2 + param_4 < uVar3)))) break;
            uVar6 = uVar8;
            if (local_10 != 0xffffffff) {
              iVar7 = (uVar8 - local_10) + 1;
              uVar6 = local_10;
            }
          }
          local_10 = uVar6;
          uVar8 = uVar8 + 1;
          uVar6 = local_10;
        } while (uVar8 < *puVar2);
      }
      if ((*(uint *)(param_1 + 0x48) != uVar6) || (*(int *)(param_1 + 0x4c) != iVar7)) {
        *(uint *)(param_1 + 0x48) = uVar6;
        *(int *)(param_1 + 0x4c) = iVar7;
        FUN_00479520(param_1);
      }
      return 0;
    }
  }
  return 1;
}


