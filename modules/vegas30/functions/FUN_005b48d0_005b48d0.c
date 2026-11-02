/* Module: vegas30.exe
   Function: FUN_005b48d0
   Address: 005b48d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005b4be2) */

int FUN_005b48d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint lDistanceToMove;
  DWORD lDistanceToMove_00;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 auStackY_60 [4];
  undefined4 uStackY_50;
  int local_2c;
  DWORD local_18;
  int local_14;
  LONG local_c;
  DWORD local_8;
  int local_4;
  
  iVar4 = FUN_005b51d0();
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_2[0x4d] == 0x10) && (DAT_0065ad70 != 0)) {
    *param_2 = *param_2 | 4;
    return 0x4e002;
  }
  iVar4 = FUN_005b7540();
  if (iVar4 < 0) {
    return iVar4;
  }
  if ((((*param_1 & 0x50) != 0) || ((*param_1 & 0x2f00) != 0)) &&
     (iVar5 = Transport_IsAnyOpen(), iVar5 != 0)) {
    *param_2 = *param_2 | 8;
    return 0x4e002;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  FUN_005b83b0();
  iVar4 = FUN_005b7230();
  if ((-1 < iVar4) && (iVar4 = FUN_005b7330(), -1 < iVar4)) {
    uVar1 = param_2[0x71];
    uVar2 = param_2[0x72];
    uVar3 = param_2[0x4f];
    if (uVar3 != 0) {
      iVar5 = uVar3 - 1;
      lDistanceToMove = 0;
      if (iVar5 != 0) {
        piVar6 = (int *)0x4;
        do {
          lDistanceToMove = lDistanceToMove + 8 + *piVar6;
          if ((lDistanceToMove & 1) != 0) {
            lDistanceToMove = lDistanceToMove + 1;
          }
          piVar6 = piVar6 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_c = 0;
      uStackY_50 = 0x5b4a1d;
      SetFilePointer((HANDLE)param_2[0x46],lDistanceToMove,&local_c,1);
      local_2c = uVar3 - 1;
      local_18 = 0xffffffff;
      local_14 = -1;
      lDistanceToMove_00 = 0xffffffff;
      if (-1 < local_2c) {
        puVar7 = (undefined4 *)(local_2c * 0x20);
        do {
          iVar4 = FUN_005b74c0();
          if (iVar4 < 0) goto LAB_005b4bc8;
          puVar8 = puVar7;
          puVar9 = auStackY_60;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          iVar4 = FUN_005b5af0();
          if ((iVar4 < 0) || (iVar4 = FUN_005b6620(), iVar4 < 0)) goto LAB_005b4bc8;
          if (local_2c != 0) {
            if (local_2c == uVar3 - 1) {
              local_c = 0;
              uStackY_50 = 0x5b4ae4;
              local_18 = SetFilePointer((HANDLE)param_2[0x46],0,&local_c,1);
              local_14 = local_c;
            }
            iVar5 = puVar7[-7] + 8;
            if ((((uVar1 - uVar2) + -0xac) - iVar5 & 1) != 0) {
              iVar5 = puVar7[-7] + 9;
            }
            local_8 = -iVar5;
            local_4 = -(uint)(iVar5 != 0);
            uStackY_50 = 0x5b4b39;
            SetFilePointer((HANDLE)param_2[0x46],local_8,&local_4,1);
          }
          local_2c = local_2c + -1;
          puVar7 = puVar7 + -8;
          lDistanceToMove_00 = local_18;
        } while (-1 < local_2c);
      }
      if (iVar4 < 0) goto LAB_005b4bc8;
      if (1 < uVar3) {
        local_4 = local_14;
        uStackY_50 = 0x5b4b7f;
        local_8 = lDistanceToMove_00;
        SetFilePointer((HANDLE)param_2[0x46],lDistanceToMove_00,&local_4,1);
      }
    }
    iVar4 = FUN_005b72a0();
    if ((-1 < iVar4) && (iVar4 = FUN_005b7360(), -1 < iVar4)) {
      FUN_005b3ea0();
    }
  }
LAB_005b4bc8:
  FUN_005b84d0();
  return iVar4;
}


