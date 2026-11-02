/* Module: oggplug.dll
   Function: FUN_0043a1f0
   Address: 0043a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043a1f0(int param_1,int *param_2,int param_3,int param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int local_10;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  uVar5 = (piVar1[1] - *piVar1) / iVar3;
  piVar6 = (int *)FUN_00430ed0(param_1,param_4 * 4);
  if (0 < param_4) {
    local_10 = param_4;
    piVar11 = piVar6;
    do {
      puVar7 = (undefined4 *)FUN_00430ed0(param_1,uVar5 << 2);
      *piVar11 = (int)puVar7;
      for (uVar9 = uVar5 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      piVar11 = piVar11 + 1;
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar10 = 0;
  if (0 < (int)uVar5) {
    param_1 = 0;
    do {
      if (0 < param_4) {
        local_10 = param_4;
        piVar11 = piVar6;
        do {
          uVar8 = (*(code *)param_5)(*(int *)((int)piVar11 + (param_3 - (int)piVar6)) +
                                     (*piVar1 + param_1) * 4,iVar3,param_2,iVar2,iVar10);
          iVar4 = *piVar11;
          piVar11 = piVar11 + 1;
          *(undefined4 *)(iVar4 + iVar10 * 4) = uVar8;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      iVar10 = iVar10 + 1;
      param_1 = param_1 + iVar3;
    } while (iVar10 < (int)uVar5);
  }
  param_2[0xb] = param_2[0xb] + 1;
  return;
}


