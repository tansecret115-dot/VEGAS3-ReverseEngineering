/* Module: encn3260.dll
   Function: FUN_6648dc60
   Address: 6648dc60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648dc60(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char local_24c [512];
  char local_4c [32];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar10 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_14 = (int *)0x0;
    local_c = 0;
    local_10 = 0;
    local_18 = 0;
    local_8 = (int *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_24 = 0;
    local_28 = 0;
    iVar10 = FUN_6648d1b0(*(int *)(param_1 + 0x2c));
    if (iVar10 == 0) {
      return 0x80004005;
    }
    do {
      iVar4 = *(int *)(iVar10 + 0x1e);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
        FUN_66495a80(*(void **)(iVar10 + 0x16),&local_14,&local_c,&local_10,&local_18,&local_8,
                     &local_20,&local_1c,&local_24,&local_28);
        local_2c = (int)local_8 + (int)local_14;
        iVar10 = local_10 + local_c + local_2c;
        FUN_664d1300(*(void **)(iVar4 + 0x10),local_14);
        FUN_664d1300(*(void **)(iVar4 + 0x14),local_8);
        FUN_664d1300(*(void **)(iVar4 + 0x18),local_2c);
        FUN_664d1300(*(void **)(iVar4 + 0x1c),local_c);
        FUN_664d1300(*(void **)(iVar4 + 0x20),local_10);
        FUN_664d1300(*(void **)(iVar4 + 0x24),iVar10);
        FUN_664d1300(*(void **)(iVar4 + 0x28),local_28);
        FUN_664d1300(*(void **)(iVar4 + 0x2c),local_24);
        FUN_664d1300(*(void **)(iVar4 + 0x30),local_18);
        FUN_664d1300(*(void **)(iVar4 + 0x34),local_8);
        FUN_664d1300(*(void **)(iVar4 + 0x3c),local_20);
        FUN_664d1300(*(void **)(iVar4 + 0x40),local_1c);
      }
      iVar10 = FUN_6648d220(*(int *)(param_1 + 0x2c));
    } while (iVar10 != 0);
  }
  else {
    iVar4 = FUN_6648d1b0(*(int *)(param_1 + 0x2c));
    if (iVar4 == 0) {
      return 0x80004005;
    }
    iVar9 = 0;
    do {
      local_10 = 0;
      local_c = 0;
      if (*(void **)(iVar4 + 0x1a) != (void *)0x0) {
        FUN_664948c0(*(void **)(iVar4 + 0x1a),&local_10,&local_c);
      }
      iVar9 = iVar9 + local_10;
      iVar10 = iVar10 + local_c;
      iVar4 = FUN_6648d220(*(int *)(param_1 + 0x2c));
    } while (iVar4 != 0);
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != (int *)0x0) {
      local_20 = iVar9;
      local_18 = iVar10;
      iVar10 = (**(code **)(*piVar2 + 0x6c))(piVar2,*(undefined4 *)(param_1 + 0x34),&local_14);
      if (iVar10 == 0) {
        uVar5 = (**(code **)(*local_14 + 0x1c))(local_14);
        _i64toa(*(longlong *)(param_1 + 0x3c),local_4c,10);
        sprintf(local_24c,s____400s_PacketsSent_664e2fdc,uVar5);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
                  (*(int **)(param_1 + 0x18),local_24c,*(undefined4 *)(param_1 + 0x38));
        sprintf(local_24c,s____400s_BytesSent_664e2fc8,uVar5);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
                  (*(int **)(param_1 + 0x18),local_24c,*(undefined4 *)(param_1 + 0x3c));
        sprintf(local_24c,s____400s_TotalBytesSent_664e2fb0,uVar5);
        puVar6 = operator_new(0x28);
        if (puVar6 == (undefined4 *)0x0) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = (int *)FUN_664bad50(puVar6);
        }
        piVar2 = local_8;
        (**(code **)(*local_8 + 4))(local_8);
        piVar3 = local_8;
        uVar8 = 0xffffffff;
        pcVar11 = local_4c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        (**(code **)(*piVar2 + 0x10))(local_8,local_4c,~uVar8);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(*(int **)(param_1 + 0x18),local_24c,piVar3)
        ;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        sprintf(local_24c,s____400s_SendingTime_664e2f9c,uVar5);
        DVar7 = GetTickCount();
        if (DVar7 < *(uint *)(param_1 + 0x44)) {
          DVar7 = GetTickCount();
          uVar8 = (DVar7 - *(int *)(param_1 + 0x44)) - 1;
        }
        else {
          DVar7 = GetTickCount();
          uVar8 = DVar7 - *(int *)(param_1 + 0x44);
        }
        local_1c = **(int **)(param_1 + 0x18);
        (**(code **)(local_1c + 0x14))(*(int **)(param_1 + 0x18),local_24c,uVar8 / 1000);
        sprintf(local_24c,s____400s_ResendSuccess_664e2f84,uVar5);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
                  (*(int **)(param_1 + 0x18),local_24c,local_20);
        sprintf(local_24c,s____400s_ResendFailure_664e2f6c,uVar5);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
                  (*(int **)(param_1 + 0x18),local_24c,local_18);
        (**(code **)(*local_14 + 8))(local_14);
        return 0;
      }
    }
  }
  return 0;
}


