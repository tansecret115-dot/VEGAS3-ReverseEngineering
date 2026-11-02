/* Module: vegas30.exe
   Function: FUN_00569c70
   Address: 00569c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00569c70(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  
  iVar1 = **(int **)(param_1 + 0x2b0);
  if (param_3 < 0) {
    return;
  }
  if (iVar1 <= param_3) {
    return;
  }
  iVar2 = *(int *)((*(int **)(param_1 + 0x2b0))[2] + param_3 * 4);
  if (iVar2 == 0) {
    return;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 8) != 0) {
      uVar10 = 0;
      uVar9 = ~*(uint *)(iVar2 + 0x1c) & 1;
      goto LAB_00569dda;
    }
  }
  else if ((param_4 & 8) == 0) {
    iVar5 = FUN_00569a00();
    if (-1 < iVar5) {
      uVar9 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          uVar6 = (uint)(iVar7 == param_3);
          if (iVar7 == iVar5) {
            uVar6 = uVar6 + 1;
          }
          if ((uVar6 & uVar9 == 0) != 0) {
            uVar9 = 1;
            uVar6 = uVar6 - 1;
          }
          iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar7 * 4);
          if ((*(uint *)(iVar3 + 0x1c) & 1) != uVar9) {
            FUN_00569aa0(iVar3,uVar9,0);
          }
          if ((uVar9 & uVar6) != 0) {
            uVar9 = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      goto LAB_00569d3c;
    }
  }
  else {
    iVar5 = FUN_00569a00();
    if (-1 < iVar5) {
      bVar4 = false;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          bVar8 = iVar7 == param_3;
          if (iVar7 == iVar5) {
            bVar8 = !(bool)bVar8;
          }
          if ((bool)(bVar8 & !bVar4)) {
            bVar4 = true;
            bVar8 = bVar8 + 1;
LAB_00569d07:
            iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar7 * 4);
            if ((*(byte *)(iVar3 + 0x1c) & 1) == 0) {
              FUN_00569aa0(iVar3,1,0);
            }
          }
          else if (bVar4) goto LAB_00569d07;
          if ((bool)(bVar4 & bVar8)) {
            bVar4 = false;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
LAB_00569d3c:
      FUN_00569990(iVar2);
      return;
    }
  }
  uVar10 = 1;
  uVar9 = 1;
LAB_00569dda:
  FUN_00569aa0(iVar2,uVar9,uVar10);
  FUN_00569a70(iVar2);
  FUN_00569990(iVar2);
  return;
}


