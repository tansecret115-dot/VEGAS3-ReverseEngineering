/* Module: extmondrv.dll
   Function: FUN_00402240
   Address: 00402240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402240(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4,int *param_5,
                int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_74 [2];
  int local_6c [9];
  undefined4 local_48 [11];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  LPCRITICAL_SECTION local_c;
  int *local_8;
  
  puVar2 = param_1;
  local_c = (LPCRITICAL_SECTION)(param_1 + 0x24);
  local_8 = (int *)0x0;
  EnterCriticalSection(local_c);
  if (puVar2[6] == 0) {
    iVar4 = -0x7ffbfdd9;
  }
  else if (param_3 < (int)puVar2[0xc]) {
LAB_004024c8:
    iVar4 = -0x7ffbfdf3;
  }
  else {
    local_1c = puVar2[0xe];
    local_18 = puVar2[0xf];
    local_14 = local_1c + 1;
    local_10 = local_18 + (uint)(0xfffffffe < local_1c);
    iVar4 = (**(code **)(**(int **)(puVar2[5] + 0xc4) + 0x1c))
                      (*(int **)(puVar2[5] + 0xc4),&local_8,&local_1c,&local_14,4);
    if (iVar4 == -0x7ffbfdd2) {
      if ((param_4 & 4) != 0) {
        iVar4 = 1;
        goto LAB_004024d4;
      }
      SetEvent((HANDLE)puVar2[0x20]);
      iVar4 = (**(code **)(**(int **)(puVar2[5] + 0xc4) + 0x1c))
                        (*(int **)(puVar2[5] + 0xc4),&local_8,&local_1c,&local_14,0);
    }
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*local_8 + 0x10))(local_8);
      if (iVar4 < (int)puVar2[0xc]) goto LAB_004024c8;
      iVar4 = (**(code **)(*local_8 + 0xc))(local_8,&param_1);
      if (-1 < iVar4) {
        uVar6 = puVar2[0xc];
        puVar8 = param_2;
        puVar10 = param_1;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar9 = &stack0xffffff80;
        (**(code **)(*local_8 + 0x30))(local_8,puVar2[0xc]);
        uVar3 = param_9;
        if ((param_4 & 1) == 0) {
          if ((param_4 & 8) != 0) {
            FUN_0044bbb0();
            param_3 = 0;
            iVar4 = (**(code **)(*param_5 + 0x3c))
                              (param_5,param_7,param_8,&stack0xffffff80,uVar3,&param_3);
            piVar11 = param_6;
            if (-1 < iVar4) {
              param_6 = (int *)FUN_00402150(local_74,local_48,(int)param_6);
              if (param_6 == (int *)0x0) {
                iVar4 = -0x7ffb1fcb;
              }
              else {
                if (0 < (int)param_6) {
                  piVar7 = local_6c;
                  uVar1 = *(ushort *)((int)piVar11 + 0xe);
                  piVar11 = param_6;
                  do {
                    piVar7[-1] = (int)puVar9;
                    *piVar7 = param_3;
                    puVar9 = puVar9 + (uVar1 >> 3);
                    piVar7 = piVar7 + 0xb;
                    piVar11 = (int *)((int)piVar11 + -1);
                  } while (piVar11 != (int *)0x0);
                }
                iVar4 = FUN_004066a0(local_74,(int *)((uint)local_48 & ((int)param_6 < 2) - 1),
                                     (uint)param_1,puVar2[0xc]);
                if (-1 < iVar4) goto LAB_00402445;
              }
            }
            goto LAB_004024d4;
          }
        }
        else {
          FUN_00401760((int)param_1,puVar2[0xe],puVar2[0xf],puVar2[0x17],puVar2[0x16],puVar2[0x10],
                       puVar2[0x12],puVar2[0x14],puVar2[0x13],puVar2[0x15]);
        }
LAB_00402445:
        (**(code **)(*local_8 + 0x20))(local_8,1);
        (**(code **)(*local_8 + 0x28))(local_8,0);
        iVar4 = (**(code **)(*local_8 + 0x38))(local_8,0);
        if (-1 < iVar4) {
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0x1a));
          param_6 = local_8;
          iVar4 = FUN_00415f10((int *)puVar2[0x19],-1,(int *)&param_6,1);
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0x1a));
          if (-1 < iVar4) {
            if ((param_4 & 2) == 0) {
              SetEvent((HANDLE)puVar2[0x20]);
            }
            local_8 = (int *)0x0;
            goto LAB_004024e1;
          }
        }
      }
    }
  }
LAB_004024d4:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
LAB_004024e1:
  LeaveCriticalSection(local_c);
  return iVar4;
}


