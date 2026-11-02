/* Module: rmto3260.dll
   Function: FUN_662dcba0
   Address: 662dcba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662dcba0(int param_1,int *param_2)

{
  byte bVar1;
  LPSTR lpBuffer;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte **this;
  byte *pbVar6;
  bool bVar7;
  LPSTR *lpFilePart;
  byte *local_64 [3];
  byte *local_58 [3];
  byte *local_4c [3];
  byte *local_40 [3];
  byte *local_34 [3];
  byte *local_28 [3];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    return -0x7fffbffb;
  }
  local_8 = 0;
  FUN_662eefd0(local_28);
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_662ef280(local_28,(int *)(param_1 + 8));
  }
  else {
    lpFilePart = (LPSTR *)0x0;
    lpBuffer = (LPSTR)FUN_662ef590(local_28,0x100);
    GetFullPathNameA((LPCSTR)piVar4,0xff,lpBuffer,lpFilePart);
    FUN_662ef610(local_28,-1);
  }
  pbVar6 = *(byte **)(param_1 + 8);
  pbVar2 = local_28[0];
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_662dcc32:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662dcc37;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_662dcc32;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662dcc37:
  local_10 = (uint)(iVar3 == 0);
  piVar4 = FUN_662f0880(0);
  if (piVar4 == (int *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  if (-1 < local_8) {
    local_8 = (**(code **)(*piVar4 + 0x14))(local_28[0],0x8002,0x20,0);
    if ((local_8 < 0) &&
       (local_8 = (**(code **)(*piVar4 + 0x14))(local_28[0],0x8102,0x20,0), -1 < local_8)) {
      (**(code **)(*piVar4 + 0x44))(local_28[0]);
    }
    if (local_8 < 0) {
      local_8 = -0x7ffbfc2a;
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)(1);
  }
  if (local_8 < 0) goto LAB_662dd461;
  FUN_662eeff0(local_58,(int *)(param_1 + 8));
  FUN_662eefd0(local_34);
  FUN_662eefd0(local_4c);
  FUN_662eefd0(local_40);
  FUN_662eefd0(local_64);
  local_8 = FUN_662f5900((int *)local_34,&DAT_6630a2dc,(char *)0x0);
  if ((((-1 < local_8) &&
       (local_8 = FUN_662f5900((int *)local_4c,&DAT_6630a2dc,(char *)0x0), -1 < local_8)) &&
      (local_8 = FUN_662f5900((int *)local_40,&DAT_6630a2dc,(char *)0x0), -1 < local_8)) &&
     (local_8 = FUN_662f5900((int *)local_64,&DAT_6630a2dc,(char *)0x0), pbVar6 = local_34[0],
     pbVar2 = local_4c[0], -1 < local_8)) {
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_662dcd87:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_662dcd8c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_662dcd87;
      pbVar6 = pbVar6 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_662dcd8c:
    pbVar6 = local_34[0];
    pbVar2 = local_40[0];
    if (iVar3 != 0) {
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_662dcdba:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_662dcdbf;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_662dcdba;
        pbVar6 = pbVar6 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_662dcdbf:
      pbVar6 = local_34[0];
      pbVar2 = local_64[0];
      if (iVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          bVar7 = bVar1 < *pbVar2;
          if (bVar1 != *pbVar2) {
LAB_662dcded:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_662dcdf2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar7 = bVar1 < pbVar2[1];
          if (bVar1 != pbVar2[1]) goto LAB_662dcded;
          pbVar6 = pbVar6 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_662dcdf2:
        if (iVar3 != 0) goto LAB_662dcdfd;
      }
    }
    local_8 = -0x7fffbffb;
  }
LAB_662dcdfd:
  if (local_10 == 0) {
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
      if (((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x28) == 0)) ||
         (*(int *)(param_1 + 0x4c) == 0)) {
        this = local_34;
      }
      else {
        this = local_4c;
      }
    }
    else {
      this = local_40;
    }
    FUN_662ef280(this,(int *)local_28);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  pbVar6 = local_34[0];
  pbVar2 = local_28[0];
  if (*(int *)(param_1 + 0x18) == 0) {
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_662dce6d:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_662dce72;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_662dce6d;
      pbVar6 = pbVar6 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_662dce72:
    if (iVar3 == 0) goto LAB_662dce76;
  }
  else {
LAB_662dce76:
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x50) = iVar3;
  }
  if (((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x28) != 0)) &&
     (*(int *)(param_1 + 0x4c) != 0)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
    else {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) * 2;
    }
  }
  local_14 = 0;
  local_18 = 0;
  if (((-1 < local_8) && ((*(int *)(param_1 + 0x24) != 0 || (*(int *)(param_1 + 0x28) != 0)))) &&
     (*(int *)(param_1 + 0x4c) != 0)) {
    if (*(int *)(param_1 + 0x24) != 0) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x68))
                          (*(int **)(param_1 + 0x2c),&local_14);
    }
    if (-1 < local_8) {
      if (*(int *)(param_1 + 0x28) != 0) {
        local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x6c))
                            (*(int **)(param_1 + 0x2c),&local_18);
      }
      if ((-1 < local_8) &&
         (local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))(*(int **)(param_1 + 0x2c),0),
         -1 < local_8)) {
        (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(*(int **)(param_1 + 0x2c),0);
      }
    }
  }
  pbVar6 = local_34[0];
  pbVar2 = local_28[0];
  if (*(int *)(param_1 + 0x18) == 0) {
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_662dcf51:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_662dcf56;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_662dcf51;
      pbVar6 = pbVar6 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_662dcf56:
    if (iVar3 == 0) goto LAB_662dcf5e;
  }
  else {
LAB_662dcf5e:
    if (-1 < local_8) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x48))
                          (*(int **)(param_1 + 0x2c),local_34[0]);
    }
    puVar5 = operator_new(0x30);
    if (puVar5 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_662dde00(puVar5);
    }
    (**(code **)(*piVar4 + 4))(piVar4);
    param_2 = *(int **)(param_1 + 0x4c);
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x1;
    }
    local_c = (int *)*piVar4;
    (*(code *)local_c[6])
              (piVar4,param_1 + 0x3c,
               (uint)(*(int *)(param_1 + 0x54) * 100) / *(uint *)(param_1 + 0x50),
               (uint)(((int)param_2 + *(int *)(param_1 + 0x54)) * 100) / *(uint *)(param_1 + 0x50),0
              );
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)param_2;
    if ((-1 < local_8) &&
       (local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x98))(*(int **)(param_1 + 0x2c),piVar4)
       , -1 < local_8)) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x94))(*(int **)(param_1 + 0x2c));
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x9c))(*(int **)(param_1 + 0x2c),piVar4);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    FUN_662ef280(local_58,(int *)local_34);
  }
  if (((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x28) != 0)) &&
     (*(int *)(param_1 + 0x4c) != 0)) {
    param_2 = (int *)0x0;
    local_c = (int *)0x0;
    iVar3 = RMACreateRMEdit(&local_c);
    if (-1 < iVar3) {
      local_8 = iVar3;
      iVar3 = (**(code **)*local_c)(local_c,&DAT_663069a8,&param_2);
    }
    local_8 = iVar3;
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (((-1 < iVar3) &&
        (local_8 = (**(code **)(*param_2 + 0x40))(param_2,local_58[0],1), -1 < local_8)) &&
       ((local_8 = (**(code **)(*param_2 + 0x34))(param_2,local_14), -1 < local_8 &&
        (local_8 = (**(code **)(*param_2 + 0x3c))(param_2,local_18), -1 < local_8)))) {
      local_8 = (**(code **)(*param_2 + 0x48))(param_2,local_4c[0]);
    }
    puVar5 = operator_new(0x30);
    if (puVar5 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_662dde00(puVar5);
    }
    (**(code **)(*piVar4 + 4))(piVar4);
    local_1c = *piVar4;
    (**(code **)(local_1c + 0x18))
              (piVar4,param_1 + 0x3c,
               (uint)(*(int *)(param_1 + 0x54) * 100) / *(uint *)(param_1 + 0x50),
               (uint)((*(int *)(param_1 + 0x54) + 1) * 100) / *(uint *)(param_1 + 0x50),0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if ((-1 < local_8) && (local_8 = (**(code **)(*param_2 + 0x98))(param_2,piVar4), -1 < local_8))
    {
      local_8 = (**(code **)(*param_2 + 0x94))(param_2);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*param_2 + 0x9c))(param_2,piVar4);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    FUN_662ef280(local_58,(int *)local_4c);
  }
  if ((*(int *)(param_1 + 0x1c) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    if ((-1 < local_8) &&
       (local_8 = (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
                            (*(int **)(param_1 + 0x34),local_58[0]), -1 < local_8)) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))
                          (*(int **)(param_1 + 0x34),local_40[0]);
    }
    puVar5 = operator_new(0x30);
    if (puVar5 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_662dde00(puVar5);
    }
    (**(code **)(*piVar4 + 4))(piVar4);
    (**(code **)(*piVar4 + 0x18))
              (piVar4,param_1 + 0x3c,
               (uint)(*(int *)(param_1 + 0x54) * 100) / *(uint *)(param_1 + 0x50),100,0);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x50);
    if ((-1 < local_8) &&
       (local_8 = (**(code **)(**(int **)(param_1 + 0x34) + 0x48))(*(int **)(param_1 + 0x34),piVar4)
       , -1 < local_8)) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(*(int **)(param_1 + 0x34));
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x4c))(*(int **)(param_1 + 0x34),piVar4);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    FUN_662ef280(local_58,(int *)local_40);
  }
  pbVar6 = local_34[0];
  pbVar2 = local_28[0];
  if (-1 < local_8) {
    if (local_10 != 0) {
      pbVar6 = *(byte **)(param_1 + 8);
      pbVar2 = local_58[0];
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_662dd29f:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_662dd2a4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_662dd29f;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_662dd2a4:
      if (iVar3 != 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        local_8 = -0x7fffbffb;
        if (puVar5 != (undefined4 *)0x0) {
          FUN_662f5c80(puVar5);
          operator_delete(puVar5);
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        piVar4 = *(int **)(param_1 + 0x30);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        piVar4 = *(int **)(param_1 + 0x2c);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        iVar3 = rename(*(char **)(param_1 + 8),(char *)local_64[0]);
        if (iVar3 == 0) {
          iVar3 = FUN_662f5bf0((LPCSTR)local_58[0],*(LPCSTR *)(param_1 + 8));
          if (iVar3 < 0) {
            rename((char *)local_64[0],*(char **)(param_1 + 8));
          }
          else {
            local_8 = 0;
          }
        }
      }
    }
    pbVar6 = local_34[0];
    pbVar2 = local_28[0];
    if (-1 < local_8) {
      local_8 = (**(code **)(*(int *)(param_1 + -0x10) + 0x24))(param_1 + -0x10,local_28[0]);
      pbVar6 = local_34[0];
      pbVar2 = local_28[0];
    }
  }
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_662dd36d:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662dd372;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_662dd36d;
    pbVar6 = pbVar6 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662dd372:
  pbVar6 = local_4c[0];
  pbVar2 = local_28[0];
  if (iVar3 != 0) {
    remove((char *)local_34[0]);
    pbVar6 = local_4c[0];
    pbVar2 = local_28[0];
  }
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_662dd3af:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662dd3b4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_662dd3af;
    pbVar6 = pbVar6 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662dd3b4:
  pbVar6 = local_40[0];
  pbVar2 = local_28[0];
  if (iVar3 != 0) {
    remove((char *)local_4c[0]);
    pbVar6 = local_40[0];
    pbVar2 = local_28[0];
  }
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_662dd3eb:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662dd3f0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_662dd3eb;
    pbVar6 = pbVar6 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662dd3f0:
  pbVar6 = local_64[0];
  if (iVar3 != 0) {
    remove((char *)local_40[0]);
    pbVar6 = local_64[0];
  }
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *local_28[0];
    if (bVar1 != *local_28[0]) {
LAB_662dd427:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_662dd42c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < local_28[0][1];
    if (bVar1 != local_28[0][1]) goto LAB_662dd427;
    local_28[0] = local_28[0] + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_662dd42c:
  if (iVar3 != 0) {
    remove((char *)local_64[0]);
  }
  FUN_662ef0f0((int *)local_64);
  FUN_662ef0f0((int *)local_40);
  FUN_662ef0f0((int *)local_4c);
  FUN_662ef0f0((int *)local_34);
  FUN_662ef0f0((int *)local_58);
LAB_662dd461:
  FUN_662ef0f0((int *)local_28);
  return local_8;
}


