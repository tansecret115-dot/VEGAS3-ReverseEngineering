/* Module: rmme3260.dll
   Function: FUN_662133e0
   Address: 662133e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662133e0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  uint uVar8;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  short *local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  if (*(int *)((int)param_1 + 0x38a) == 0) {
    *(undefined4 *)((int)param_1 + 0x38a) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x38a)) {
  case 1:
    *(undefined4 *)((int)param_1 + 0x38e) = 0;
    *(undefined4 *)((int)param_1 + 0x392) = 0;
    param_1[0xe9] = 0;
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
    goto LAB_662136a3;
  case 2:
    iVar4 = param_1[0x44] + *(int *)((int)param_1 + 0x38e) * 0x2a;
    if ((*(int *)(iVar4 + 0x1e) != 0) || (*(int *)(iVar4 + 0x10) != 0)) {
LAB_6621361a:
      *(undefined4 *)((int)param_1 + 0x38a) = 4;
      FUN_662133e0(param_1);
      break;
    }
    uVar3 = *(undefined4 *)(iVar4 + 0x26);
    *(undefined4 *)(iVar4 + 0x26) = 1;
    goto LAB_662135cf;
  case 3:
    piVar7 = *(int **)(param_1[0x44] + 0x1e + *(int *)((int)param_1 + 0x38e) * 0x2a);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
      *(undefined4 *)(param_1[0x44] + 0x1e + *(int *)((int)param_1 + 0x38e) * 0x2a) = 0;
    }
    *(int *)(param_1[0x44] + 0x1e + *(int *)((int)param_1 + 0x38e) * 0x2a) = param_1[0xe8];
    piVar7 = (int *)param_1[0xe8];
    if (piVar7 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar7 + 0x18))(piVar7);
    }
    *(undefined4 *)(param_1[0x44] + 0x22 + *(int *)((int)param_1 + 0x38e) * 0x2a) = uVar3;
    puVar1 = (undefined4 *)(param_1[0x44] + 0x14 + *(int *)((int)param_1 + 0x38e) * 0x2a);
    *puVar1 = *(undefined4 *)((int)param_1 + 0x396);
    puVar1[1] = *(undefined4 *)((int)param_1 + 0x39a);
    *(undefined2 *)(puVar1 + 2) = *(undefined2 *)((int)param_1 + 0x39e);
    piVar7 = (int *)param_1[0xe8];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    iVar4 = param_1[0x44] + *(int *)((int)param_1 + 0x38e) * 0x2a;
    psVar6 = *(short **)(param_1[0x44] + *(int *)((int)param_1 + 0x38e) * 0x2a);
    if ((*(short *)(iVar4 + 0x18) == *psVar6) ||
       (piVar7 = *(int **)(iVar4 + 0x1e), piVar7 == (int *)0x0)) {
      if (*(int *)(iVar4 + 0x1e) == 0) {
        *(undefined4 *)(iVar4 + 0x10) = 1;
      }
      else if (*(int *)(psVar6 + 2) != 0) {
        if ((*(byte *)(iVar4 + 0x1c) & 2) == 0) {
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(psVar6 + 4);
        }
        else {
          *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(iVar4 + 0x14);
        }
      }
      goto LAB_6621361a;
    }
    (**(code **)(*piVar7 + 8))(piVar7);
    *(undefined4 *)(param_1[0x44] + 0x1e + *(int *)((int)param_1 + 0x38e) * 0x2a) = 0;
    *(undefined4 *)(param_1[0x44] + 0x22 + *(int *)((int)param_1 + 0x38e) * 0x2a) = 0;
    puVar1 = (undefined4 *)(param_1[0x44] + 0x26 + *(int *)((int)param_1 + 0x38e) * 0x2a);
    uVar3 = *puVar1;
    *puVar1 = 1;
LAB_662135cf:
    FUN_66213c60(param_1,*(undefined4 *)(param_1[0x44] + 4 + *(int *)((int)param_1 + 0x38e) * 0x2a),
                 uVar3);
    break;
  case 4:
    iVar5 = *(int *)((int)param_1 + 0x38e);
    iVar4 = param_1[0x44] + iVar5 * 0x2a;
    if (*(int *)(iVar4 + 0x1e) != 0) {
      uVar8 = *(uint *)(iVar4 + 0x14);
      if (*(int *)((int)param_1 + 0x392) == 0) {
        param_1[0xe9] = uVar8;
        param_1[0xea] = iVar5;
        *(undefined4 *)((int)param_1 + 0x392) = 1;
      }
      else if (uVar8 < (uint)param_1[0xe9]) {
        param_1[0xe9] = uVar8;
        param_1[0xea] = iVar5;
      }
    }
    if (*(int *)(iVar4 + 0x10) != 0) {
      param_1[0xeb] = param_1[0xeb] + 1;
    }
    *(uint *)((int)param_1 + 0x38e) = iVar5 + 1U;
    if ((uint)param_1[0x43] <= iVar5 + 1U) {
      *(undefined4 *)((int)param_1 + 0x38a) = 5;
      FUN_662133e0(param_1);
      break;
    }
LAB_662136a3:
    *(undefined4 *)((int)param_1 + 0x38a) = 2;
    FUN_662133e0(param_1);
    break;
  case 5:
    if (param_1[0xeb] == param_1[0x43]) {
      *(undefined4 *)((int)param_1 + 0x38a) = 6;
      FUN_662133e0(param_1);
    }
    else {
      FUN_66208c30(&local_1c);
      piVar7 = (int *)(param_1[0x44] + param_1[0xea] * 0x2a);
      local_1c = piVar7[5];
      local_14 = (undefined2)piVar7[7];
      local_18 = CONCAT22((short)((uint)piVar7[6] >> 0x10),*(undefined2 *)(*piVar7 + 2));
      piVar2 = *(int **)((int)piVar7 + 0x1e);
      *(undefined4 *)((int)piVar7 + 0x22) = 0;
      *(undefined4 *)(param_1[0x44] + 0x1e + param_1[0xea] * 0x2a) = 0;
      *(undefined4 *)((int)param_1 + 0x38a) = 0;
      FUN_66213bc0(param_1,0,&local_1c,piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    break;
  case 6:
  case 9:
    puVar1 = (undefined4 *)(param_1[0x42] + 0x14 + param_1[0x40] * 0x18);
    uVar3 = *puVar1;
    *puVar1 = 1;
    FUN_66213c60(param_1,*(undefined4 *)(param_1[0x42] + 8 + param_1[0x40] * 0x18),uVar3);
    break;
  case 7:
    FUN_66208c30(&local_1c);
    piVar7 = (int *)param_1[0xe8];
    local_8 = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x18))(piVar7);
    }
    uVar8 = 0xffffffff;
    local_1c = *(int *)((int)param_1 + 0x396);
    local_18 = *(undefined4 *)((int)param_1 + 0x39a);
    local_14 = *(undefined2 *)((int)param_1 + 0x39e);
    iVar5 = 0;
    piVar2 = (int *)(param_1[0x42] + param_1[0x40] * 0x18);
    iVar4 = *piVar2;
    if (0 < iVar4) {
      local_10 = (short *)piVar2[1];
      psVar6 = local_10;
      do {
        piVar7 = local_8;
        if (*psVar6 == (short)local_18) {
          uVar8 = (uint)(ushort)local_10[iVar5 * 2 + 1];
          break;
        }
        iVar5 = iVar5 + 1;
        psVar6 = psVar6 + 2;
      } while (iVar5 < iVar4);
    }
    if (uVar8 == *(uint *)(param_1[0x3b] + (uint)*(ushort *)((int)param_1 + 0xea) * 4)) {
      if (piVar7 != (int *)0x0) {
LAB_66213a90:
        *(undefined4 *)((int)param_1 + 0x38a) = 0xb;
        FUN_662133e0(param_1);
        break;
      }
    }
    else if (piVar7 != (int *)0x0) {
      piVar7 = (int *)param_1[0xe8];
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
        param_1[0xe8] = 0;
        uVar3 = *(undefined4 *)(param_1[0x42] + 0x14 + param_1[0x40] * 0x18);
        *(undefined4 *)(param_1[0x42] + 0x14 + param_1[0x40] * 0x18) = 1;
        FUN_66213c60(param_1,*(undefined4 *)(param_1[0x42] + 8 + param_1[0x40] * 0x18),uVar3);
        break;
      }
LAB_66213a4c:
      uVar3 = *(undefined4 *)(param_1[0x42] + 0x14 + param_1[0x40] * 0x18);
      *(undefined4 *)(param_1[0x42] + 0x14 + param_1[0x40] * 0x18) = 1;
      FUN_66213c60(param_1,*(undefined4 *)(param_1[0x42] + 8 + param_1[0x40] * 0x18),uVar3);
      break;
    }
    *(undefined4 *)((int)param_1 + 0x38a) = 8;
    FUN_662133e0(param_1);
    break;
  case 8:
    *(short *)((int)param_1 + 0xea) = *(short *)((int)param_1 + 0xea) + 1;
    uVar8 = (uint)*(ushort *)((int)param_1 + 0xea);
    if ((int)uVar8 < param_1[0x3c]) {
      do {
        iVar4 = FUN_66213370(param_1,*(uint *)(param_1[0x3b] + uVar8 * 4));
        if (iVar4 == 0) break;
        *(short *)((int)param_1 + 0xea) = *(short *)((int)param_1 + 0xea) + 1;
        uVar8 = (uint)*(ushort *)((int)param_1 + 0xea);
      } while ((int)uVar8 < param_1[0x3c]);
    }
    local_8 = (int *)0x0;
    if (((int)(uint)*(ushort *)((int)param_1 + 0xea) < param_1[0x3c]) &&
       (iVar4 = FUN_66214140(param_1,*(uint *)(param_1[0x3b] +
                                              (uint)*(ushort *)((int)param_1 + 0xea) * 4),
                             (ushort *)&local_8), iVar4 != 0)) {
      param_1[0x40] = (uint)local_8 & 0xffff;
      local_10 = (short *)0x0;
      local_c = (**(code **)(*param_1 + 0x18))(0,&local_10);
    }
    else {
      piVar7 = (int *)param_1[0xe8];
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
        param_1[0xe8] = 0;
      }
      *(undefined4 *)((int)param_1 + 0x38a) = 0xb;
      FUN_662133e0(param_1);
    }
    break;
  case 10:
    FUN_66208c30(&local_1c);
    local_8 = (int *)param_1[0xe8];
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x18))(local_8);
    }
    uVar8 = 0xffffffff;
    local_1c = *(int *)((int)param_1 + 0x396);
    local_18 = *(undefined4 *)((int)param_1 + 0x39a);
    local_14 = *(undefined2 *)((int)param_1 + 0x39e);
    iVar5 = 0;
    piVar7 = (int *)(param_1[0x42] + param_1[0x40] * 0x18);
    iVar4 = *piVar7;
    if (0 < iVar4) {
      local_10 = (short *)piVar7[1];
      psVar6 = local_10;
      do {
        if (*psVar6 == *(short *)((int)param_1 + 0x39a)) {
          uVar8 = (uint)(ushort)local_10[iVar5 * 2 + 1];
          break;
        }
        iVar5 = iVar5 + 1;
        psVar6 = psVar6 + 2;
      } while (iVar5 < iVar4);
    }
    if (uVar8 == *(uint *)(param_1[0x3b] + (uint)*(ushort *)((int)param_1 + 0xea) * 4)) {
      if (local_8 != (int *)0x0) goto LAB_66213a90;
    }
    else if (local_8 != (int *)0x0) {
      piVar7 = (int *)param_1[0xe8];
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
        param_1[0xe8] = 0;
      }
      goto LAB_66213a4c;
    }
    local_c = -0x7fffbffb;
    break;
  case 0xb:
    if (param_1[0xe8] != 0) {
      *(short *)((int)param_1 + 0x39a) =
           (short)*(undefined4 *)(param_1[0x3b] + (uint)*(ushort *)((int)param_1 + 0xea) * 4);
    }
    *(undefined4 *)((int)param_1 + 0x38a) = 0xc;
    FUN_662133e0(param_1);
    break;
  case 0xc:
    FUN_66208c30(&local_1c);
    piVar7 = (int *)param_1[0xe8];
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x18))(piVar7);
    }
    local_1c = *(int *)((int)param_1 + 0x396);
    local_18 = *(undefined4 *)((int)param_1 + 0x39a);
    local_14 = *(undefined2 *)((int)param_1 + 0x39e);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    piVar2 = (int *)param_1[0xe8];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[0xe8] = 0;
    }
    *(undefined4 *)((int)param_1 + 0x38a) = 0;
    FUN_66213bc0(param_1,0,&local_1c,piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    break;
  default:
    local_c = -0x7ffbfff7;
  }
  iVar4 = local_c;
  if (local_c < 0) {
    FUN_66208c30(&local_1c);
    param_1[9] = iVar4;
    FUN_66213bc0(param_1,iVar4,&local_1c,(int *)0x0);
  }
  return 0;
}


