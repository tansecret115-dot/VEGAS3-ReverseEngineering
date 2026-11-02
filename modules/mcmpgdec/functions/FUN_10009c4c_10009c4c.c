/* Module: mcmpgdec.dll
   Function: FUN_10009c4c
   Address: 10009c4c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10009c4c(int param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 auStack_48 [9];
  
  if ((int)param_4 < 4) {
    if (*(int *)(param_1 + 0x5f0) != 3) {
      iVar3 = (param_4 & 2) * 4;
      iVar7 = *(int *)(param_1 + 0xfc) * 2;
      iVar4 = (param_4 & 1) * 8;
      puVar9 = (undefined8 *)
               (iVar4 + (iVar3 + param_6) * iVar7 + *(int *)(param_1 + 0xb0) + param_5);
      iVar7 = iVar7 + -8;
      puVar1 = (undefined8 *)(iVar4 + iVar3 * param_3 * 2 + *param_2);
      iVar6 = param_3 * 2 + -8;
      goto LAB_10009e9a;
    }
    if (param_7 != 0) {
      iVar3 = (int)(param_4 & 2) >> 1;
      iVar4 = (param_4 & 1) * 8;
      iVar7 = *(int *)(param_1 + 0xfc) * 2 + -8;
      puVar9 = (undefined8 *)
               (iVar4 + (iVar3 + param_6) * *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xb0) +
                        param_5);
      puVar1 = (undefined8 *)(iVar4 + iVar3 * param_3 + *param_2);
      iVar6 = param_3 * 2 + -8;
      goto LAB_10009e9a;
    }
    iVar4 = (param_4 & 2) * 4;
    iVar7 = *(int *)(param_1 + 0xfc);
    uVar2 = (param_4 & 1) * 8;
    puVar9 = (undefined8 *)(uVar2 + (iVar4 + param_6) * iVar7 + *(int *)(param_1 + 0xb0) + param_5);
    iVar4 = iVar4 * param_3 + *param_2;
LAB_10009e91:
    puVar1 = (undefined8 *)(uVar2 + iVar4);
  }
  else {
    iVar4 = (param_4 & 1) + 1;
    iVar3 = param_6 >> 1;
    iVar7 = param_5 >> 1;
    if (*(int *)(param_1 + 0x5f0) != 3) {
      if ((*(int *)(param_1 + 0x590) != 1) && (iVar3 = param_6, *(int *)(param_1 + 0x590) != 3)) {
        param_5 = iVar7;
      }
      iVar6 = (param_4 & 2) * 4;
      iVar7 = *(int *)(param_1 + 0x104) * 2;
      uVar2 = param_4 & 8;
      puVar9 = (undefined8 *)
               (uVar2 + (iVar6 + iVar3) * iVar7 + *(int *)(param_1 + 0xb0 + iVar4 * 4) + param_5);
      iVar4 = iVar6 * param_3 + param_2[iVar4];
      goto LAB_10009e91;
    }
    iVar6 = param_3 >> 1;
    iVar8 = iVar7;
    if (*(int *)(param_1 + 0x590) == 1) {
LAB_10009e00:
      iVar5 = (param_4 & 2) * 4;
      iVar7 = *(int *)(param_1 + 0x104) + -8;
      puVar9 = (undefined8 *)
               ((param_4 & 8) +
               (iVar5 + iVar3) * *(int *)(param_1 + 0x104) + *(int *)(param_1 + 0xb0 + iVar4 * 4) +
               iVar8);
      puVar1 = (undefined8 *)((param_4 & 8) + iVar5 * iVar6 + param_2[iVar4]);
      iVar6 = iVar6 + -8;
      goto LAB_10009e9a;
    }
    iVar8 = param_5;
    if (*(int *)(param_1 + 0x590) != 3) {
      iVar8 = iVar7;
    }
    iVar3 = param_6;
    if (param_7 == 0) goto LAB_10009e00;
    iVar3 = (int)(param_4 & 2) >> 1;
    iVar7 = *(int *)(param_1 + 0x104) * 2;
    puVar9 = (undefined8 *)
             ((param_4 & 8) +
             (iVar3 + param_6) * *(int *)(param_1 + 0x104) + *(int *)(param_1 + 0xb0 + iVar4 * 4) +
             iVar8);
    puVar1 = (undefined8 *)((param_4 & 8) + iVar6 * iVar3 + param_2[iVar4]);
  }
  iVar7 = iVar7 + -8;
  iVar6 = param_3 + -8;
LAB_10009e9a:
  if ((*(int *)(param_1 + 0x5c0) == 3) && (*(int *)(param_1 + 0x690) == 0)) {
    iVar7 = -8;
    puVar9 = auStack_48;
  }
  if (param_8 == 0) {
    FUN_10006838(puVar1,iVar6 + 8,puVar9,iVar7 + 8,param_9);
  }
  else {
    FUN_100068cc(puVar1,iVar6 + 8,puVar9,iVar7 + 8,param_9);
  }
  return;
}


