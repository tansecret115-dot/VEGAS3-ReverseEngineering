/* Module: oggplug.dll
   Function: FUN_00434c80
   Address: 00434c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00434c80(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  int local_54;
  int *local_50;
  int local_4c;
  float local_48;
  float local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_3c = *param_1;
  local_4c = param_1[1];
  local_34 = 0;
  if (0 < *(int *)(param_2 + 0x4cc)) {
    local_50 = (int *)(param_2 + 0x8d0);
    iVar6 = param_7 * 0xe8;
    local_38 = iVar6;
    do {
      local_44 = *(float *)(*(int *)(local_4c + 0xd0) + iVar6);
      local_48 = *(float *)(*(int *)(local_4c + 0xd0) + iVar6 + 4);
      iVar5 = local_50[-0x100] * 4;
      if ((*(int *)(iVar5 + param_6) != 0) || (*(int *)(param_6 + *local_50 * 4) != 0)) {
        iVar6 = *local_50 * 4;
        local_30 = *(int *)(iVar5 + param_3);
        iVar2 = *(int *)(iVar6 + param_3);
        local_2c = *(int *)(iVar5 + param_4);
        local_24 = *(int *)(iVar6 + param_4);
        local_28 = *(int *)(iVar5 + param_5);
        local_20 = *(int *)(iVar6 + param_5);
        *(undefined4 *)(iVar5 + param_6) = 1;
        iVar5 = 0;
        *(undefined4 *)(param_6 + *local_50 * 4) = 1;
        iVar6 = local_38;
        if (0 < local_3c) {
          local_54 = 0;
          do {
            local_40 = (int *)(local_54 + local_38 + 8 + *(int *)(local_4c + 0xd0));
            if (iVar5 < *local_40) {
              local_18 = local_2c - iVar2;
              local_1c = local_30 - iVar2;
              local_14 = local_28 - iVar2;
              pfVar7 = (float *)(iVar2 + iVar5 * 4);
              local_10 = local_24 - iVar2;
              local_c = local_20 - iVar2;
              do {
                if (*param_1 <= iVar5) break;
                dVar8 = floor((double)(local_48 * *(float *)(local_1c + (int)pfVar7) + _DAT_0044d71c
                                      ));
                local_64 = (float)dVar8 * local_44;
                dVar8 = floor((double)(local_48 * *pfVar7 + _DAT_0044d71c));
                local_68 = (float)dVar8 * local_44;
                fVar4 = ABS(local_68);
                fVar3 = ABS(local_64);
                if (ABS(local_64) <= fVar4) {
                  fVar3 = fVar4;
                }
                _local_60 = CONCAT44((int)((ulonglong)(double)fVar4 >> 0x20),fVar3);
                if ((float)local_40[5] <= fVar3) {
                  if ((float)local_40[3] <= fVar3) {
                    if ((float)local_40[1] <= fVar3) {
                      FUN_00434f90(local_64,local_68,&local_58,&local_6c);
                    }
                    else {
                      FUN_00435020(local_64,local_68,&local_58,&local_6c);
                    }
                  }
                  else {
                    FUN_00435100(local_64,local_68,&local_58,&local_6c);
                  }
                }
                else {
                  FUN_004351d0(local_64,local_68,&local_58,&local_6c);
                }
                dVar8 = floor((double)(local_60 + _DAT_0044d71c));
                if ((float)dVar8 * _DAT_0044d798 < local_6c) {
                  local_6c = (float)dVar8 * _DAT_0044d794;
                }
                pfVar1 = (float *)(local_18 + (int)pfVar7);
                iVar5 = iVar5 + 1;
                pfVar7 = pfVar7 + 1;
                *(float *)(local_14 + -4 + (int)pfVar7) = local_58 - *pfVar1;
                *(float *)(local_c + -4 + (int)pfVar7) =
                     local_6c - *(float *)(local_10 + -4 + (int)pfVar7);
              } while (iVar5 < *local_40);
            }
            local_54 = local_54 + 0x1c;
            iVar6 = local_38;
          } while (iVar5 < local_3c);
        }
      }
      local_34 = local_34 + 1;
      local_50 = local_50 + 1;
    } while (local_34 < *(int *)(param_2 + 0x4cc));
  }
  return;
}


