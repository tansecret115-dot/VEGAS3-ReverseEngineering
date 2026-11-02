/* Module: mp3rw.dll
   Function: FUN_0043f0f0
   Address: 0043f0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0043f0f0(int *param_1,int *param_2,int param_3,uint param_4,uint *param_5,int param_6,
            undefined *param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_18;
  uint local_10;
  int *local_8;
  
  FUN_0043f4d0(param_2,0,0);
  FUN_0043eae0(param_1,0x3d,0x1d5);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 == 0) {
    FUN_004538c0((int)param_1,param_2);
    iVar1 = FUN_0043ec40(param_1,'\0');
    if (((iVar1 == 1) && (param_5 != (uint *)0x0)) && (0 < (int)param_4)) {
      uVar7 = param_4 & 0x80000001;
      bVar10 = uVar7 == 0;
      if ((int)uVar7 < 0) {
        bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar10) {
        FUN_004534a0(param_1);
        uVar7 = *(int *)((int)param_1 + 0x9a) * *(int *)((int)param_1 + 0x8e) + -1 + param_4 &
                ~(param_4 - 1);
        *param_5 = uVar7;
        local_10 = *(uint *)((int)param_1 + 0x92) / 100;
        if (local_10 == 0) {
          local_10 = 1;
        }
        piVar2 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,uVar7,10);
        uVar7 = *(uint *)((int)param_1 + 0x92);
        uVar5 = *(uint *)((int)param_1 + 0xaa);
        if (uVar5 < uVar7) {
          do {
            uVar6 = uVar7 - uVar5;
            if (9 < uVar7 - uVar5) {
              uVar6 = 10;
            }
            puVar3 = FUN_00453650(param_1,piVar2,uVar6);
            local_18 = 0;
            local_8 = piVar2;
            if (0 < (int)puVar3) {
              do {
                iVar1 = (local_18 - (int)puVar3) + *(int *)((int)param_1 + 0xaa);
                uVar7 = 0;
                iVar8 = ((*(int *)((int)param_1 + 0x92) - iVar1) + -1) * *param_5;
                if (*(int *)((int)param_1 + 0x55) != 0) {
                  iVar9 = 0;
                  puVar4 = (undefined1 *)(param_3 + iVar8 + 2);
                  do {
                    if (*(int *)((int)param_1 + 0x96) == 1) {
                      *(undefined1 *)(param_3 + iVar8 + uVar7) = *(undefined1 *)(*piVar2 + uVar7);
                    }
                    else if (*(int *)((int)param_1 + 0x96) == 3) {
                      puVar4[-2] = *(undefined1 *)(*local_8 + 2 + iVar9);
                      puVar4[-1] = *(undefined1 *)(*local_8 + 1 + iVar9);
                      *puVar4 = *(undefined1 *)(*local_8 + iVar9);
                    }
                    uVar7 = uVar7 + 1;
                    iVar9 = iVar9 + 3;
                    puVar4 = puVar4 + 3;
                  } while (uVar7 < *(uint *)((int)param_1 + 0x55));
                }
                uVar5 = *(int *)((int)param_1 + 0x96) * *(int *)((int)param_1 + 0x55);
                uVar7 = *param_5;
                uVar6 = 0;
                if (uVar7 != uVar5) {
                  do {
                    iVar9 = *(int *)((int)param_1 + 0x96) * *(int *)((int)param_1 + 0x55) + uVar6;
                    uVar6 = uVar6 + 1;
                    *(undefined1 *)(iVar9 + iVar8 + param_3) = 0;
                  } while (uVar6 < uVar7 - uVar5);
                }
                if (((param_6 != 0) && (iVar1 % (int)local_10 == 0)) &&
                   (iVar1 = (*(code *)param_7)(param_6,(float)iVar1 /
                                                       (float)*(uint *)((int)param_1 + 0x92)),
                   iVar1 == 0)) {
                  return 0xffffffff;
                }
                local_18 = local_18 + 1;
                local_8 = local_8 + 1;
              } while (local_18 < (int)puVar3);
            }
            uVar5 = *(uint *)((int)param_1 + 0xaa);
            uVar7 = *(uint *)((int)param_1 + 0x92);
          } while (uVar5 < uVar7);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}


