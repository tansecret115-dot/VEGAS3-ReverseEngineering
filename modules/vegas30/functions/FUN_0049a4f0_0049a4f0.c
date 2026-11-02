/* Module: vegas30.exe
   Function: FUN_0049a4f0
   Address: 0049a4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049a4f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_18;
  undefined4 local_14;
  int local_c;
  undefined1 local_8 [8];
  
  uVar11 = *(uint *)(param_1 + 0xce4);
  iVar12 = *(int *)(param_1 + 0xcec);
  if (uVar11 == 0) {
    return 0;
  }
  if (iVar12 == 0) {
    return 0;
  }
  if ((*(uint *)(iVar12 + 0x10) & 8) != 0) {
    return 0;
  }
  if ((*(uint *)(iVar12 + 0x10) & 0x100000) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(uint *)(iVar12 + 0x10) = *(uint *)(iVar12 + 0x10) & 0xfeffffff | 0x800000;
  local_68 = uVar11;
  if (param_3 != 0) {
    FUN_00499f20(param_1,iVar12,param_1 + 0xcd8,1);
  }
  FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd8));
  *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 0x100000;
  iVar7 = *(int *)(iVar12 + 0x218);
  *(undefined4 *)(iVar7 + 0x80) = *(undefined4 *)(iVar12 + 0x18);
  *(undefined4 *)(iVar7 + 0x84) = *(undefined4 *)(iVar12 + 0x1c);
  *(undefined4 *)(iVar7 + 0x90) = *(undefined4 *)(iVar12 + 0x20);
  *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(iVar12 + 0x24);
  *(undefined4 *)(iVar7 + 0x98) = *(undefined4 *)(iVar12 + 0x28);
  *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar12 + 0x2c);
  *(undefined4 *)(iVar7 + 0x70) = *(undefined4 *)(iVar12 + 0x78);
  *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(iVar12 + 0x7c);
  *(undefined4 *)(iVar7 + 0x78) = *(undefined4 *)(iVar12 + 0x80);
  *(undefined4 *)(iVar7 + 0x7c) = *(undefined4 *)(iVar12 + 0x84);
  *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(iVar12 + 0x3c);
  iVar4 = *(int *)(iVar12 + 0x50);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar7 + 0x88) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x8c) = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar7 + 0x88) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar7 + 0x8c) = *(undefined4 *)(iVar4 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
  *(undefined4 *)(param_1 + 0x1ac) = 0xc0000000;
  FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar12,0,&local_40,local_8,1);
  FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar12,0,&local_38,&local_30,0);
  if ((((*(uint *)(iVar12 + 0x10) & 0x100) == 0) && (-1 < local_34)) && (-1 < local_3c)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  iVar4 = *(int *)(param_1 + 0xce8);
  piVar8 = *(int **)(uVar11 + 0x24);
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  local_4c = 0;
  local_58 = 0;
  local_54 = 0x20000000;
  if (0 < iVar4) {
    iVar9 = *(int *)(piVar8[2] + -4 + iVar4 * 4);
    local_60 = *(uint *)(iVar9 + 0x18);
    local_5c = *(int *)(iVar9 + 0x1c);
    local_50 = *(uint *)(iVar9 + 0x20);
    local_4c = *(int *)(iVar9 + 0x24);
  }
  if (iVar4 + 1 < *piVar8) {
    iVar4 = *(int *)(piVar8[2] + (iVar4 + 1) * 4);
    local_58 = *(uint *)(iVar4 + 0x18);
    local_54 = *(int *)(iVar4 + 0x1c);
  }
  switch(param_2) {
  case 5:
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x2b,0);
    if (*(int **)(param_1 + 0xcd8) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **(int **)(param_1 + 0xcd8);
    }
    param_2 = 0;
    if (iVar7 != -1 && -1 < iVar7 + 1) {
      do {
        iVar4 = iVar12;
        if (param_2 != iVar7) {
          iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd8) + 8) + param_2 * 4);
        }
        iVar9 = *(int *)(iVar4 + 0x218);
        FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar4,0,&local_68,&local_28,1);
        FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar4,0,&local_60,&local_18,0);
        local_20 = local_60 - local_68;
        local_c = (local_5c - local_64) - (uint)(local_60 < local_68);
        local_50 = local_20 - local_28;
        local_4c = (local_c - local_24) - (uint)(local_20 < local_28);
        local_48 = *(uint *)(param_1 + 0x1a8);
        local_44 = *(int *)(param_1 + 0x1ac);
        uVar11 = local_50;
        uVar10 = local_50;
        local_54 = local_4c;
        if ((local_4c <= local_44) && ((local_4c < local_44 || (local_50 < local_48)))) {
          uVar11 = local_48;
          uVar10 = local_58;
          local_54 = local_44;
        }
        local_58 = uVar10;
        *(uint *)(param_1 + 0x1a8) = uVar11;
        *(int *)(param_1 + 0x1ac) = local_54;
        iVar1 = *(int *)(param_1 + 0x1b4);
        iVar3 = local_c;
        uVar11 = local_20;
        if ((iVar1 <= local_c) && ((iVar1 < local_c || (*(uint *)(param_1 + 0x1b0) < local_20)))) {
          iVar3 = iVar1;
          uVar11 = *(uint *)(param_1 + 0x1b0);
        }
        *(uint *)(param_1 + 0x1b0) = uVar11;
        *(int *)(param_1 + 0x1b4) = iVar3;
        *(uint *)(iVar9 + 0x80) = local_60;
        *(int *)(iVar9 + 0x84) = local_5c;
        *(uint *)(iVar9 + 0x90) = local_18;
        *(undefined4 *)(iVar9 + 0x94) = local_14;
        *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(iVar9 + 0xa4) = *(undefined4 *)(iVar4 + 0x3c);
        *(uint *)(iVar9 + 0x68) = *(uint *)(iVar9 + 0x68) | 0x1000;
        FUN_004ea750(*(undefined4 *)(param_1 + 0xbc8),iVar4,2,0);
        param_2 = param_2 + 1;
      } while (param_2 < iVar7 + 1);
    }
    goto switchD_0049a727_caseD_8;
  case 6:
  case 0x19:
  case 0x1b:
  case 0x1c:
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x1a,0);
    uVar11 = *(uint *)(param_1 + 0x98);
    uVar10 = *(uint *)(iVar12 + 0x18);
    iVar4 = *(int *)(iVar12 + 0x1c);
    *(uint *)(param_1 + 0x1a0) = uVar11 - uVar10;
    *(uint *)(param_1 + 0x1a4) = (*(int *)(param_1 + 0x9c) - iVar4) - (uint)(uVar11 < uVar10);
    if (param_2 == 0x19) {
      uVar10 = *(uint *)(iVar12 + 0x18);
      iVar4 = *(int *)(iVar12 + 0x1c);
      *(uint *)(param_1 + 0x1a0) = uVar11 - uVar10;
      *(uint *)(param_1 + 0x1a4) = (*(int *)(param_1 + 0x9c) - iVar4) - (uint)(uVar11 < uVar10);
      FUN_0049a2b0(param_1,*(undefined4 *)(param_1 + 0xcd8),iVar12,param_1 + 0x1a8,param_1 + 0x1b0,1
                  );
      uVar11 = *(uint *)(iVar7 + 0x68) | 0x2000;
      goto LAB_0049aeea;
    }
    if (param_2 == 0x1b) {
      FUN_0049a0c0(param_1,*(undefined4 *)(param_1 + 0xcd8),iVar12,param_1 + 0x1a8,param_1 + 0x1b0);
LAB_0049aee4:
      uVar11 = *(uint *)(iVar7 + 0x68) | 0x1000;
      goto LAB_0049aeea;
    }
    if (param_2 != 0x1c) {
      if (bVar14) {
        local_68 = 0;
        local_64 = -0x40000000;
      }
      else {
        local_68 = local_40 - local_38;
        local_64 = (local_3c - local_34) - (uint)(local_40 < local_38);
      }
      uVar11 = *(uint *)(iVar12 + 0x18);
      local_48 = local_60 - uVar11;
      local_44 = (local_5c - *(int *)(iVar12 + 0x1c)) - (uint)(local_60 < uVar11);
      if (bVar14) {
        local_30 = *(int *)(iVar12 + 0x20);
        local_2c = *(int *)(iVar12 + 0x24);
      }
      local_50 = local_30 - 1;
      local_2c = local_2c - (uint)(local_30 == 0);
      local_18 = (local_58 - uVar11) - 1;
      iVar9 = ((local_54 - *(int *)(iVar12 + 0x1c)) - (uint)(local_58 < uVar11)) -
              (uint)(local_58 - uVar11 == 0);
      iVar4 = local_44;
      uVar11 = local_48;
      if ((local_44 <= local_64) && ((local_44 < local_64 || (local_48 < local_68)))) {
        iVar4 = local_64;
        uVar11 = local_68;
      }
      *(uint *)(param_1 + 0x1a8) = uVar11;
      *(int *)(param_1 + 0x1ac) = iVar4;
      if ((iVar9 < local_2c) || ((iVar9 <= local_2c && (local_18 <= local_50)))) {
        *(uint *)(param_1 + 0x1b0) = local_18;
        *(int *)(param_1 + 0x1b4) = iVar9;
      }
      else {
        *(uint *)(param_1 + 0x1b0) = local_50;
        *(int *)(param_1 + 0x1b4) = local_2c;
      }
      goto LAB_0049aee4;
    }
    if (bVar14) {
      local_48 = 0;
      local_44 = -0x40000000;
    }
    else {
      local_48 = local_40 - local_38;
      local_44 = (local_3c - local_34) - (uint)(local_40 < local_38);
    }
    uVar10 = local_60 - *(uint *)(iVar12 + 0x18);
    uVar11 = uVar10 + 1;
    iVar4 = ((local_5c - *(int *)(iVar12 + 0x1c)) - (uint)(local_60 < *(uint *)(iVar12 + 0x18))) +
            (uint)(0xfffffffe < uVar10);
    iVar9 = -(uint)(1 < local_50) - local_4c;
    if ((iVar4 <= local_44) && ((iVar4 < local_44 || (uVar11 < local_48)))) {
      iVar4 = local_44;
      uVar11 = local_48;
    }
    *(uint *)(param_1 + 0x1a8) = uVar11;
    *(int *)(param_1 + 0x1ac) = iVar4;
    uVar11 = *(uint *)(param_1 + 0x1a8);
    if ((iVar4 < iVar9) || ((iVar4 <= iVar9 && (uVar11 <= 1 - local_50)))) {
      iVar4 = iVar9;
      uVar11 = 1 - local_50;
    }
    *(uint *)(param_1 + 0x1a8) = uVar11;
    *(int *)(param_1 + 0x1ac) = iVar4;
    if (bVar14) {
      local_30 = *(int *)(iVar12 + 0x20);
      local_2c = *(int *)(iVar12 + 0x24);
    }
    local_48 = local_30 - 1;
    local_44 = local_2c - (uint)(local_30 == 0);
    uVar11 = *(uint *)(iVar12 + 0x18);
    local_18 = (local_58 - uVar11) - 1;
    iVar9 = ((local_54 - *(int *)(iVar12 + 0x1c)) - (uint)(local_58 < uVar11)) -
            (uint)(local_58 - uVar11 == 0);
    uVar5 = (uVar11 - local_50) - local_60;
    iVar4 = uVar5 + *(uint *)(iVar12 + 0x20);
    uVar10 = iVar4 - 1;
    iVar4 = (((((*(int *)(iVar12 + 0x1c) - local_4c) - (uint)(uVar11 < local_50)) - local_5c) -
             (uint)(uVar11 - local_50 < local_60)) + *(int *)(iVar12 + 0x24) +
            (uint)CARRY4(uVar5,*(uint *)(iVar12 + 0x20))) - (uint)(iVar4 == 0);
    if ((iVar4 < 1) && ((iVar4 < 0 || (uVar10 == 0)))) {
      uVar10 = 0;
      iVar4 = 0x20000000;
    }
    uVar11 = local_18;
    if ((local_44 <= iVar9) && ((local_44 < iVar9 || (local_48 < local_18)))) {
      uVar11 = local_48;
      iVar9 = local_44;
    }
    *(uint *)(param_1 + 0x1b0) = uVar11;
    *(int *)(param_1 + 0x1b4) = iVar9;
    iVar9 = *(int *)(param_1 + 0x1b4);
    if ((iVar9 <= iVar4) && ((iVar9 < iVar4 || (*(uint *)(param_1 + 0x1b0) < uVar10)))) {
      uVar10 = *(uint *)(param_1 + 0x1b0);
      iVar4 = iVar9;
    }
    *(uint *)(param_1 + 0x1b0) = uVar10;
    *(int *)(param_1 + 0x1b4) = iVar4;
    iVar4 = FUN_0049b050(iVar12);
    *(int *)(param_1 + 0x1b8) = iVar4;
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x10) & 8) != 0)) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
    }
    *(uint *)(iVar7 + 0x68) = *(uint *)(iVar7 + 0x68) | 0x1000;
    iVar7 = *(int *)(param_1 + 0x1b8);
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x218);
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar7 + 0x18);
      *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iVar7 + 0x1c);
      iVar7 = *(int *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar7 + 0x24);
      iVar7 = *(int *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar7 + 0x28);
      *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar7 + 0x2c);
      iVar7 = *(int *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar7 + 0x78);
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar7 + 0x7c);
      iVar7 = *(int *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar7 + 0x80);
      *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar7 + 0x84);
      *(undefined4 *)(iVar4 + 0xa4) = *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0x3c);
      iVar7 = *(int *)(*(int *)(param_1 + 0x1b8) + 0x50);
      if (iVar7 == 0) {
        uVar6 = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x88) = 0xffffffff;
      }
      else {
        *(undefined4 *)(iVar4 + 0x88) = *(undefined4 *)(iVar7 + 8);
        uVar6 = *(undefined4 *)(iVar7 + 0xc);
      }
      *(undefined4 *)(iVar4 + 0x8c) = uVar6;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1b8) + 0x218);
      *(uint *)(iVar7 + 0x68) = *(uint *)(iVar7 + 0x68) | 0x2000;
      if (param_3 != 0) {
        piVar2 = *(int **)(param_1 + 0xcd8);
        piVar8 = (int *)(param_1 + 0xcd8);
        if (((piVar2 == (int *)0x0) || (*piVar2 == 0)) ||
           (iVar7 = _SfList_FindSpecificItemRange_16
                              (piVar2,0,0xffffffff,*(undefined4 *)(param_1 + 0x1b8)), iVar7 < 0)) {
          uVar6 = 0;
          if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)*piVar8;
          }
          *(undefined4 *)(param_1 + 0xcdc) = uVar6;
          FUN_00499f20(param_1,*(undefined4 *)(param_1 + 0x1b8),piVar8,1);
          FUN_0046ba30(param_1,*piVar8);
          *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 0x100000;
        }
        else {
          FUN_0049b100(param_1,piVar8);
        }
      }
    }
    break;
  case 7:
  case 0x1a:
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x1a,0);
    uVar11 = *(uint *)(param_1 + 0x98);
    uVar10 = *(uint *)(iVar12 + 0x20);
    uVar13 = uVar11 - uVar10;
    iVar4 = *(int *)(iVar12 + 0x24);
    uVar5 = *(uint *)(iVar12 + 0x18);
    iVar9 = *(int *)(iVar12 + 0x1c);
    *(uint *)(param_1 + 0x1a0) = uVar13 - *(uint *)(iVar12 + 0x18);
    *(uint *)(param_1 + 0x1a4) =
         (((*(int *)(param_1 + 0x9c) - iVar4) - (uint)(uVar11 < uVar10)) - iVar9) -
         (uint)(uVar13 < uVar5);
    if (param_2 == 0x1a) {
      uVar10 = *(uint *)(iVar12 + 0x20);
      iVar4 = *(int *)(iVar12 + 0x24);
      uVar13 = uVar11 - uVar10;
      uVar5 = *(uint *)(iVar12 + 0x18);
      iVar9 = *(int *)(iVar12 + 0x1c);
      *(uint *)(param_1 + 0x1a0) = uVar13 - uVar5;
      *(uint *)(param_1 + 0x1a4) =
           (((*(int *)(param_1 + 0x9c) - iVar4) - (uint)(uVar11 < uVar10)) - iVar9) -
           (uint)(uVar13 < uVar5);
      FUN_0049a2b0(param_1,*(undefined4 *)(param_1 + 0xcd8),iVar12,param_1 + 0x1a8,param_1 + 0x1b0,0
                  );
      goto LAB_0049aee4;
    }
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
    uVar11 = *(uint *)(iVar12 + 0x20);
    iVar4 = *(int *)(iVar12 + 0x24);
    *(uint *)(param_1 + 0x1a8) = 1 - uVar11;
    *(uint *)(param_1 + 0x1ac) = -(uint)(1 < uVar11) - iVar4;
    uVar11 = *(uint *)(iVar7 + 0x68) | 0x2000;
LAB_0049aeea:
    *(uint *)(iVar7 + 0x68) = uVar11;
    break;
  default:
    goto switchD_0049a727_caseD_8;
  case 0x15:
  case 0x16:
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x20,0);
    uVar11 = *(uint *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0xc0000000;
    *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
    if (param_2 == 0x15) {
      iVar7 = *(int *)(param_1 + 0x9c);
      bVar14 = uVar11 < *(uint *)(iVar12 + 0x18);
      iVar4 = uVar11 - *(uint *)(iVar12 + 0x18);
    }
    else {
      uVar10 = uVar11 - *(uint *)(iVar12 + 0x20);
      iVar7 = (*(int *)(param_1 + 0x9c) - *(int *)(iVar12 + 0x24)) -
              (uint)(uVar11 < *(uint *)(iVar12 + 0x20));
      bVar14 = uVar10 < *(uint *)(iVar12 + 0x18);
      iVar4 = uVar10 - *(uint *)(iVar12 + 0x18);
    }
    iVar9 = *(int *)(iVar12 + 0x1c);
    *(int *)(param_1 + 0x1a0) = iVar4;
    *(uint *)(param_1 + 0x1a4) = (iVar7 - iVar9) - (uint)bVar14;
    FUN_0046bad0(param_1);
    goto LAB_0049aef5;
  }
  FUN_0046bad0(param_1);
LAB_0049aef5:
  FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(iVar12 + 8),1,0);
switchD_0049a727_caseD_8:
  iVar12 = *(int *)(param_1 + 0x1b8);
  if (iVar12 != 0) {
    iVar7 = *(int *)(iVar12 + 0x218);
    *(undefined4 *)(iVar7 + 0x90) = *(undefined4 *)(iVar12 + 0x20);
    *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(iVar12 + 0x24);
  }
  iVar12 = *(int *)(param_1 + 0x1b4);
  uVar6 = *(undefined4 *)(param_1 + 0x1b0);
  if ((iVar12 < 1) && (iVar12 < 0)) {
    uVar6 = 0;
    iVar12 = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = uVar6;
  iVar7 = *(int *)(param_1 + 0x1ac);
  *(int *)(param_1 + 0x1b4) = iVar12;
  iVar12 = *(int *)(param_1 + 0x1a8);
  if ((-1 < iVar7) && ((0 < iVar7 || (iVar12 != 0)))) {
    iVar12 = 0;
    iVar7 = 0;
  }
  *(int *)(param_1 + 0x1a8) = iVar12;
  *(int *)(param_1 + 0x1ac) = iVar7;
  if ((*(int *)(param_1 + 0x1b0) == *(int *)(param_1 + 0x1a8)) &&
     (*(int *)(param_1 + 0x1b4) == *(int *)(param_1 + 0x1ac))) {
    FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),1);
    return 0;
  }
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar12 = *piVar8;
  iVar7 = 0;
  if (0 < iVar12) {
    do {
      iVar4 = *(int *)(piVar8[2] + iVar7 * 4);
      if ((*(uint *)(iVar4 + 0x10) & 0x100000) != 0) {
        if (DAT_00647788 != 0) {
          FUN_005ce720(iVar4);
        }
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar4,1,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar12);
  }
  return 1;
}


