/* Module: mp3plug.dll
   Function: FUN_5f6f70e0
   Address: 5f6f70e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_5f6f70e0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined4 *param_6
            )

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_3c [4];
  int local_2c [4];
  int local_1c;
  int local_18;
  
  iVar6 = param_1 * 3;
  iVar5 = param_1 * 3 + 3;
  local_2c[0] = -1;
  local_2c[2] = 0x7fffffff;
  local_2c[1] = -1;
  if (iVar6 < iVar5) {
    local_18 = param_1 * 0x90;
    local_2c[3] = iVar5;
    do {
      if (*(int *)(&DAT_5f741e10 + iVar6 * 4) == param_4) {
        FUN_5f6d5b90((undefined4 *)(&DAT_5f741cf0 + (uint)(param_2 == 2) * 0x10 + local_18),param_5,
                     4);
        iVar7 = 0;
        iVar5 = -4;
        do {
          iVar2 = param_5[iVar5 + 4];
          if (iVar2 == 0) break;
          iVar4 = -0x80000000;
          piVar3 = (int *)(param_3 + iVar7 * 4);
          if (iVar2 < 1) {
LAB_5f6f7440:
            iVar4 = 0;
          }
          else {
            piVar1 = piVar3 + iVar2;
            do {
              iVar2 = *piVar3;
              if ((iVar2 != -9999) && (iVar4 < iVar2)) {
                iVar4 = iVar2;
              }
              piVar3 = piVar3 + 1;
            } while ((int)piVar3 < (int)piVar1);
            if (iVar4 == -0x80000000) goto LAB_5f6f7440;
          }
          local_2c[iVar5] = (&DAT_5f741c10)[iVar4];
          if ((param_1 != 0) && (local_2c[iVar5] == 0)) {
            local_2c[iVar5] = 1;
          }
          iVar7 = iVar7 + param_5[iVar5 + 4];
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0);
        iVar5 = 0;
        while (iVar7 = iVar5, local_1c = iVar6, param_5[iVar5] != 0) {
          if (*(int *)(&DAT_5f741c90 + iVar5 * 4 + iVar6 * 0x10) < local_3c[iVar5])
          goto LAB_5f6f7264;
          iVar7 = iVar5 + 1;
          if ((3 < iVar7) || (param_5[iVar7] == 0)) break;
          if (*(int *)(&DAT_5f741c90 + iVar7 * 4 + iVar6 * 0x10) < local_3c[iVar7])
          goto LAB_5f6f7264;
          iVar5 = iVar5 + 2;
          iVar7 = iVar5;
          if (3 < iVar5) break;
        }
        if (iVar7 != 4) {
LAB_5f6f7264:
          if (param_5[iVar7] != 0) goto LAB_5f6f7273;
        }
        iVar7 = 0;
        iVar5 = -4;
        do {
          if (param_5[iVar5 + 4] == 0) break;
          iVar7 = iVar7 + param_5[iVar5 + 4] * local_2c[iVar5];
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0);
        if (iVar7 < local_2c[2]) {
          if (iVar6 == 0) {
            local_2c[1] = local_3c[3] + (local_3c[2] + (local_3c[0] * 5 + local_3c[1]) * 4) * 4;
          }
          else if (iVar6 == 1) {
            local_2c[1] = local_3c[2] + (local_3c[0] * 5 + local_3c[1]) * 4 + 400;
          }
          else if (iVar6 == 2) {
            local_2c[1] = local_3c[0] * 3 + 500 + local_3c[1];
          }
          else if (iVar6 == 3) {
            local_2c[1] = ((local_3c[0] * 6 + local_3c[1]) * 6 + local_3c[2]) * 2;
          }
          else if (iVar6 == 4) {
            local_2c[1] = (local_3c[2] + 0xb4 + (local_3c[1] + local_3c[0] * 4) * 4) * 2;
          }
          else if (iVar6 == 5) {
            local_2c[1] = (local_3c[0] * 3 + 0xf4 + local_3c[1]) * 2;
          }
          else {
            local_2c[1] = 0;
          }
          local_2c[0] = iVar6;
          local_2c[2] = iVar7;
          FUN_5f6d5b90(local_3c,param_6,4);
        }
      }
LAB_5f6f7273:
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 0x30;
    } while (iVar6 < local_2c[3]);
  }
  FUN_5f6d5b90((undefined4 *)(&DAT_5f741cf0 + (uint)(param_2 == 2) * 0x10 + local_2c[0] * 0x30),
               param_5,4);
  return local_2c[1];
}


