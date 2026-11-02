/* Module: vegas30.exe
   Function: FUN_0044b150
   Address: 0044b150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b150(int *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_1;
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      if (param_1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *param_1;
      }
      if ((local_4 < 0) || (iVar3 + -1 < local_4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[2] + local_4 * 4);
      }
      if (*(int *)(iVar3 + 0x14) != 0) {
        iVar6 = 0;
        local_c = **(int **)(iVar3 + 0x60);
        if (0 < local_c) {
          do {
            puVar7 = (uint *)(*(int *)(*(int *)(iVar3 + 0x60) + 4) * iVar6 +
                             *(int *)(*(int *)(iVar3 + 0x60) + 8));
            if (param_6 == 0) {
              uVar1 = puVar7[1];
              if ((param_3 <= (int)uVar1) && ((param_3 < (int)uVar1 || (param_2 <= *puVar7)))) {
                iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
                if (((int)uVar1 <= iVar5) && (((int)uVar1 < iVar5 || (*puVar7 < param_2 + param_4)))
                   ) {
                  if ((LPCVOID)puVar7[5] != (LPCVOID)0x0) {
                    pvVar4 = GlobalHandle((LPCVOID)puVar7[5]);
                    GlobalUnlock(pvVar4);
                    pvVar4 = GlobalHandle((LPCVOID)puVar7[5]);
                    GlobalFree(pvVar4);
                  }
                  _SfList_DeleteList_16(*(undefined4 *)(iVar3 + 0x60),iVar6,1,0);
                  iVar6 = iVar6 + -1;
                  local_c = local_c + -1;
                }
              }
            }
            else if (param_6 == 1) {
              uVar1 = puVar7[1];
              uVar2 = *puVar7;
              if ((param_3 <= (int)uVar1) && ((param_3 < (int)uVar1 || (param_2 <= uVar2)))) {
                iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
                if (((int)uVar1 <= iVar5) && (((int)uVar1 < iVar5 || (uVar2 < param_2 + param_4))))
                {
                  if ((LPCVOID)puVar7[5] != (LPCVOID)0x0) {
                    pvVar4 = GlobalHandle((LPCVOID)puVar7[5]);
                    GlobalUnlock(pvVar4);
                    pvVar4 = GlobalHandle((LPCVOID)puVar7[5]);
                    GlobalFree(pvVar4);
                  }
                  _SfList_DeleteList_16(*(undefined4 *)(iVar3 + 0x60),iVar6,1,0);
                  iVar6 = iVar6 + -1;
                  local_c = local_c + -1;
                  goto LAB_0044b2ad;
                }
              }
              iVar5 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
              if ((iVar5 <= (int)uVar1) && ((iVar5 < (int)uVar1 || (param_2 + param_4 <= uVar2)))) {
                *puVar7 = uVar2 - param_4;
                puVar7[1] = (uVar1 - param_5) - (uint)(uVar2 < param_4);
              }
            }
            else if (param_6 == 2) {
              uVar1 = puVar7[1];
              uVar2 = *puVar7;
              if ((param_3 <= (int)uVar1) && ((param_3 < (int)uVar1 || (param_2 <= uVar2)))) {
                *puVar7 = uVar2 + param_4;
                puVar7[1] = uVar1 + param_5 + (uint)CARRY4(uVar2,param_4);
              }
            }
LAB_0044b2ad:
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_c);
        }
        if (**(int **)(iVar3 + 0x60) == 0) {
          _SfVideoKeyframe_InsertSmart_20(iVar3,0,0,0xffffffff,0xffffffff);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  FUN_00453250(DAT_00647630,0);
  return 0;
}


