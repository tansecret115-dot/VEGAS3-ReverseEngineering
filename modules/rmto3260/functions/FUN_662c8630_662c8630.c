/* Module: rmto3260.dll
   Function: FUN_662c8630
   Address: 662c8630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c8630(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_44 [6];
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_662f2c60(local_44);
  iVar2 = FUN_662f56a0(local_44,1,s_RMACreateRM2Converter_6630a2b0,(int)&local_c);
  bVar6 = iVar2 < 0;
  if (!bVar6) {
    iVar2 = (**(code **)*local_c)(local_c,&DAT_66306a18,&local_8);
    bVar6 = iVar2 < 0;
    if (!bVar6) {
      iVar2 = (**(code **)*local_c)(local_c,&DAT_66306a88,&local_18);
      bVar6 = iVar2 < 0;
      if (!bVar6) {
        iVar2 = (**(code **)*local_c)(local_c,&DAT_66306988,&local_1c);
        bVar6 = iVar2 < 0;
      }
    }
  }
  piVar1 = param_1;
  if ((!bVar6) && (iVar3 = (**(code **)*local_c)(local_c,&DAT_66306ae8,&local_14), -1 < iVar3)) {
    puVar4 = operator_new(0x30);
    if (puVar4 == (undefined4 *)0x0) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = FUN_662dde00(puVar4);
    }
    piVar5 = local_10;
    (**(code **)(*local_10 + 4))(local_10);
    (**(code **)(*piVar5 + 0x18))(piVar5,piVar1 + 0x25,0x32,100,0);
    (**(code **)(*local_14 + 0xc))(local_14,0,piVar5);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (-1 < iVar2) {
    if ((piVar1[10] != 0) && (local_1c != (int *)0x0)) {
      iVar2 = (**(code **)(*local_1c + 0xc))(local_1c,piVar1[10]);
    }
    if (-1 < iVar2) {
      if (local_18 != (int *)0x0) {
        iVar2 = 0;
        if (piVar1[0x12] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(piVar1[0x12] + 0x10);
        }
        if (iVar3 < 2) {
          if (piVar1[0xc] != 0) {
            iVar2 = piVar1[0xc] - piVar1[0xd];
          }
        }
        else {
          iVar2 = piVar1[0x22];
        }
        iVar2 = (**(code **)(*local_18 + 0xc))(local_18,iVar2);
      }
      if (-1 < iVar2) {
        iVar3 = piVar1[0x14];
        if (iVar3 == 0) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(iVar3 + 0x10);
        }
        local_24 = *(int *)(iVar3 + 4);
        local_20 = 0;
        if ((ushort)param_1 != 0) {
          do {
            if (iVar2 < 0) goto LAB_662c88f9;
            piVar5 = (int *)FUN_662ed930(&local_24);
            puVar4 = (undefined4 *)*piVar5;
            if ((puVar4 != (undefined4 *)0x0) && (*(int *)((int)puVar4 + 0xe) == 0)) {
              if (*(int *)((int)puVar4 + 10) != 0) {
                iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*puVar4,0);
              }
              if ((-1 < iVar2) && (*(int *)((int)puVar4 + 6) != 0)) {
                iVar2 = (**(code **)(*local_8 + 0x10))(local_8,*puVar4,0);
              }
            }
            local_20 = local_20 + 1;
          } while ((ushort)local_20 < (ushort)param_1);
        }
        iVar3 = 0;
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x44))
                              ((int *)piVar1[0x10],(int)&param_1 + 2), -1 < iVar2)) {
          if ((param_1._2_2_ != 0) && (param_1._2_2_ != 0)) {
            do {
              if (iVar2 < 0) break;
              iVar2 = (**(code **)(*(int *)piVar1[0x10] + 0x48))
                                ((int *)piVar1[0x10],iVar3,&local_24,&local_20);
              if (((-1 < iVar2) &&
                  (iVar2 = (**(code **)(*piVar1 + 0x74))(piVar1,local_24,&local_2c), -1 < iVar2)) &&
                 (iVar2 = (**(code **)(*piVar1 + 0x74))(piVar1,local_20,&local_28), -1 < iVar2)) {
                iVar2 = (**(code **)(*local_8 + 0x28))(local_8,*local_2c,0,*local_28,0);
              }
              iVar3 = iVar3 + 1;
            } while ((ushort)iVar3 < param_1._2_2_);
          }
          if (-1 < iVar2) {
            if (piVar1[0x1f] != 0) {
              param_1 = (int *)0x0;
              iVar3 = (**(code **)*local_8)(local_8,&DAT_66306a78,&param_1);
              if (-1 < iVar3) {
                iVar2 = (**(code **)(*param_1 + 0x10))(param_1,piVar1[0x1f]);
              }
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
              }
            }
            if (-1 < iVar2) {
              iVar2 = (**(code **)(*local_8 + 0x2c))(local_8,piVar1[8]);
            }
          }
        }
      }
    }
  }
LAB_662c88f9:
  if (local_10 != (int *)0x0) {
    iVar3 = (**(code **)(*local_14 + 0x10))(local_14,0,local_10);
    (**(code **)(*local_10 + 8))(local_10);
    if (-1 < iVar2) {
      iVar2 = iVar3;
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
    local_18 = (int *)0x0;
  }
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
    local_1c = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  FUN_662f2e40(local_44);
  FUN_662f2c80(local_44);
  return iVar2;
}


