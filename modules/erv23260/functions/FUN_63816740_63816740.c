/* Module: erv23260.dll
   Function: FUN_63816740
   Address: 63816740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63816740(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,uint param_8,int *param_9)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  
  iVar1 = param_4 * 4;
  puVar11 = (uint *)(param_1 + iVar1);
  puVar5 = (uint *)(param_2 + iVar1);
  piVar9 = (int *)(param_3 + iVar1);
  if (param_7 == 0) {
    iVar1 = *piVar9;
    iVar10 = *param_5;
    *puVar5 = iVar1 - iVar10;
    *puVar11 = iVar1 - iVar10;
  }
  else if (param_7 == 1) {
    param_4 = 8;
    piVar3 = param_5;
    do {
      iVar1 = *(int *)(((int)piVar9 - (int)param_5) + (int)piVar3) - *piVar3;
      piVar3 = piVar3 + 1;
      *(int *)((int)puVar5 + (-4 - (int)param_5) + (int)piVar3) = iVar1;
      *(int *)((int)puVar11 + (-4 - (int)param_5) + (int)piVar3) = iVar1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (param_7 == 2) {
    param_4 = 8;
    puVar6 = puVar5;
    piVar3 = param_5;
    do {
      uVar2 = *(int *)(((int)piVar9 - (int)puVar5) + (int)puVar6) - *piVar3;
      piVar3 = piVar3 + 1;
      *puVar6 = uVar2;
      *(uint *)((int)puVar11 + (-0x20 - (int)puVar5) + (int)(puVar6 + 8)) = uVar2;
      param_4 = param_4 + -1;
      puVar6 = puVar6 + 8;
    } while (param_4 != 0);
  }
  FUN_638172f0(this,param_7,param_8,(int *)puVar5,param_6,*(int *)((int)this + 400));
  iVar1 = FUN_63817400(this,puVar11,puVar5,param_8,param_7);
  *param_9 = *param_9 + iVar1;
  FUN_63817190((byte)param_8,(int *)puVar5,param_6,*(int *)((int)this + 400));
  if (param_7 == 0) {
    *puVar5 = *puVar5 + *param_5;
    *param_5 = 0;
  }
  else {
    if (param_7 == 1) {
      iVar10 = (int)puVar5 - (int)param_5;
      *puVar5 = *puVar5 + *param_5;
      iVar1 = 7;
      do {
        param_5 = param_5 + 1;
        iVar7 = *(int *)((int)param_5 + iVar10) + *param_5;
        iVar8 = 0x7ff;
        if (iVar7 < 0x800) {
          iVar8 = iVar7;
        }
        if (iVar8 < -0x800) {
          iVar7 = -0x800;
        }
        else if (0x7ff < iVar7) {
          iVar7 = 0x7ff;
        }
        *(int *)((int)param_5 + iVar10) = iVar7;
        *param_5 = 0;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_638171e0(puVar5);
      return;
    }
    if (param_7 == 2) {
      *puVar5 = *puVar5 + *param_5;
      iVar1 = 7;
      puVar11 = puVar5;
      do {
        param_5 = param_5 + 1;
        puVar11 = puVar11 + 8;
        uVar4 = *param_5 + *puVar11;
        uVar2 = 0x7ff;
        if ((int)uVar4 < 0x800) {
          uVar2 = uVar4;
        }
        if ((int)uVar2 < -0x800) {
          uVar4 = 0xfffff800;
        }
        else if (0x7ff < (int)uVar4) {
          uVar4 = 0x7ff;
        }
        *puVar11 = uVar4;
        *param_5 = 0;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_638171e0(puVar5);
      return;
    }
  }
  FUN_638171e0(puVar5);
  return;
}


