/* Module: extmondrv.dll
   Function: FUN_00408880
   Address: 00408880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004088d9) */

int FUN_00408880(int param_1,LPCRITICAL_SECTION param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  
  iVar4 = param_1;
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if (((int)param_2 < 0) || (iVar5 + -1 < (int)param_2)) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)(piVar1[1] * (int)param_2 + piVar1[2]);
  }
  if (puVar8 == (undefined4 *)0x0) {
    return -0x7ffb1ff6;
  }
  param_2 = (LPCRITICAL_SECTION)(param_1 + 0x6c);
  EnterCriticalSection(param_2);
  piVar1 = *(int **)(iVar4 + 0x88);
  if (((piVar1 == (int *)0x0) || (param_3 < 0)) || (*piVar1 + -1 < param_3)) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)(piVar1[1] * param_3 + piVar1[2]);
  }
  bVar6 = -(*(int *)(iVar4 + 0x9c) != 0) & 6;
  if (puVar7 == (undefined4 *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    iVar5 = (**(code **)(**(int **)(iVar4 + 0x44) + 0x40))
                      (*(int **)(iVar4 + 0x44),*puVar8,puVar8[1],bVar6,0,0,0,0,0,0);
    if (iVar5 != 1) goto LAB_00408a42;
    if (*(int *)(iVar4 + 0x9c) != 0) {
      *(undefined4 *)(iVar4 + 0x9c) = 0;
      iVar5 = (**(code **)(**(int **)(iVar4 + 0x44) + 0x40))
                        (*(int **)(iVar4 + 0x44),*puVar8,puVar8[1],0,0,0,0,0,0,0);
      goto LAB_00408a42;
    }
  }
  else {
    param_1 = 0;
    if ((*(int *)(iVar4 + 0x58) == 0x7076645f) || (*(int *)(iVar4 + 0x58) == 0x70766477)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    FUN_00406560(puVar7[2],puVar7[8],puVar7[9],iVar5,&param_1);
    lpCriticalSection = (LPCRITICAL_SECTION)puVar7[6];
    puVar9 = puVar7 + 1;
    iVar5 = (**(code **)(**(int **)(iVar4 + 0x44) + 0x40))
                      (*(int **)(iVar4 + 0x44),*puVar8,puVar8[1],bVar6 | 8,*puVar7,puVar9,
                       lpCriticalSection,puVar7[7],param_1,0);
    if (iVar5 == 1) {
      if (*(int *)(iVar4 + 0x9c) != 0) {
        *(undefined4 *)(iVar4 + 0x9c) = 0;
        iVar5 = (**(code **)(**(int **)(iVar4 + 0x44) + 0x40))
                          (*(int **)(iVar4 + 0x44),*puVar8,puVar8[1],8,*puVar7,puVar7 + 1,puVar7[6],
                           puVar7[7],puVar9,0);
        goto LAB_004089b6;
      }
    }
    else {
LAB_004089b6:
      if (iVar5 < 0) goto LAB_00408a64;
    }
    uVar2 = puVar7[6];
    uVar3 = puVar7[8];
    puVar7[6] = uVar2 + (int)puVar9;
    puVar7[8] = uVar3 + 1;
    puVar7[7] = puVar7[7] + (uint)CARRY4(uVar2,(uint)puVar9);
    puVar7[9] = puVar7[9] + (uint)(0xfffffffe < uVar3);
LAB_00408a42:
    if (iVar5 < 0) goto LAB_00408a64;
  }
  uVar2 = *(uint *)(iVar4 + 0x94);
  *(uint *)(iVar4 + 0x94) = uVar2 + 1;
  *(uint *)(iVar4 + 0x98) = *(int *)(iVar4 + 0x98) + (uint)(0xfffffffe < uVar2);
LAB_00408a64:
  LeaveCriticalSection(lpCriticalSection);
  return iVar5;
}


