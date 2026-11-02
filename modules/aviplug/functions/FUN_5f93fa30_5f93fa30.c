/* Module: aviplug.dll
   Function: FUN_5f93fa30
   Address: 5f93fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f93fa30(void *this,int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  void *local_4;
  
  if ((param_1[0x1e] == -1) && (param_1[0x1f] == -1)) {
    uVar1 = *(uint *)(param_1[6] + 4);
    uVar1 = ((uVar1 & 1) - param_1[4]) + uVar1 + param_1[6] + 0x14 + param_3;
    uVar1 = uVar1 + (uVar1 & 1);
    uVar5 = uVar1 + 0x7ff & 0xfffff800;
    if ((uVar5 == uVar1) || (SVar2 = uVar5 + 0x800, 7 < uVar5 - uVar1)) {
      SVar2 = uVar5;
    }
    if (param_1[2] != 0) {
      SVar2 = *(int *)(param_1[0xb] + 4) + 8 + SVar2;
    }
    local_4 = this;
    if (param_1[1] < (int)SVar2) {
      puVar3 = FUN_5f943000((undefined4 *)*param_1,SVar2,0,1,(SIZE_T *)&local_4,(SIZE_T *)0x0);
      if (puVar3 == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      puVar9 = (undefined4 *)*param_1;
      if (puVar3 != puVar9) {
        iVar6 = (int)puVar3 + (param_1[4] - (int)puVar9);
        param_1[4] = iVar6;
        param_1[0xc] = iVar6;
        param_1[6] = (int)puVar3 + (param_1[6] - (int)puVar9);
        param_1[7] = (int)puVar3 + (param_1[7] - (int)puVar9);
        if (param_1[2] != 0) {
          param_1[0xb] = (int)puVar3;
          param_1[8] = (int)puVar3 + (param_1[8] - (int)puVar9);
          param_1[9] = (int)puVar3 + (param_1[9] - (int)puVar9);
        }
        param_1[10] = (int)puVar3 + (param_1[10] - (int)puVar9);
        FUN_5f93e950((int)param_1,(int)puVar9,(int)puVar3);
        *param_1 = (int)puVar3;
      }
      param_1[1] = (int)local_4;
    }
    iVar6 = param_1[6];
    iVar7 = (*(uint *)(iVar6 + 4) & 1) + *(uint *)(iVar6 + 4);
    piVar8 = (int *)(iVar7 + 8 + iVar6);
    if (*(int *)(iVar7 + 8 + iVar6) == 0x584e4653) {
      piVar8 = (int *)((piVar8[1] & 1U) + piVar8[1] + 8 + (int)piVar8);
    }
    if (*piVar8 == 0x4b4e554a) {
      *piVar8 = 0;
      piVar8[1] = 0;
    }
    puVar9 = (undefined4 *)param_1[10];
    puVar3 = (undefined4 *)(*param_1 + -0xc + SVar2);
    if (puVar9 != puVar3) {
      memmove(puVar3,puVar9,0xc);
      uVar1 = (int)puVar3 - (int)puVar9;
      if (0xc < (int)uVar1) {
        uVar1 = 0xc;
      }
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    param_1[10] = (int)puVar3;
    puVar4 = (undefined1 *)((int)puVar3 + (0xc - param_1[4]));
    param_1[5] = (int)puVar4;
    *(undefined1 **)(param_1[0xd] + 0x10) = puVar4;
    *(int *)(param_1[4] + 4) = (int)puVar3 - param_1[4];
    *(int *)(param_1[4] + 4) = *(int *)(param_1[4] + 4) + 4;
    piVar10 = piVar8;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *piVar10 = *param_2;
      param_2 = param_2 + 1;
      piVar10 = piVar10 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)piVar10 = (char)*param_2;
      param_2 = (int *)((int)param_2 + 1);
      piVar10 = (int *)((int)piVar10 + 1);
    }
    iVar6 = param_1[10];
    puVar3 = (undefined4 *)((int)piVar8 + (param_3 & 1) + param_3);
    if (iVar6 - (int)puVar3 != 0) {
      *puVar3 = 0x4b4e554a;
      puVar3[1] = (iVar6 - (int)puVar3) + -8;
    }
    iVar6 = FUN_5f93f6e0((uint)param_1);
    return iVar6;
  }
  return -0x7fff0001;
}


