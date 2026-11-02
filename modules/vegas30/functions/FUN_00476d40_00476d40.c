/* Module: vegas30.exe
   Function: FUN_00476d40
   Address: 00476d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047705b) */
/* WARNING: Removing unreachable block (ram,0x00476f30) */
/* WARNING: Removing unreachable block (ram,0x00476f45) */
/* WARNING: Removing unreachable block (ram,0x00476fb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00476d40(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  SHORT SVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 fVar15;
  longlong lVar16;
  undefined8 uVar17;
  int local_44;
  float local_40 [8];
  undefined8 local_20;
  uint local_18;
  int local_14;
  
  iVar4 = (int)(short)param_4;
  iVar1 = *(int *)(param_1 + 0xcec);
  iVar7 = (int)(short)((uint)param_4 >> 0x10);
  uVar10 = *(uint *)(param_1 + 0x174) & 0xff;
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_00647788 == 0) {
    param_4 = 0;
  }
  else {
    param_4 = FUN_0049d9a0();
  }
  if (0x203 < param_2) {
    if (param_2 != 0x204) {
      if (param_2 == 0x205) {
        if ((param_3 & 1) != 0) {
          return 0;
        }
        pHVar3 = GetCapture();
        if ((pHVar3 == *(HWND *)(param_1 + 4)) &&
           (ReleaseCapture(), *(int *)(param_1 + 0xa4) == 0xc)) {
          FUN_004777a0(param_1,iVar1,*(undefined4 *)(param_1 + 4),iVar4,iVar7,uVar10);
        }
        *(undefined4 *)(param_1 + 0xa4) = 0;
        return 0;
      }
      if (param_2 != 0x206) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    *(int *)(param_1 + 0x90) = iVar4;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffdffff;
    *(int *)(param_1 + 0x94) = iVar7;
    *(undefined4 *)(param_1 + 0xa4) = 0xc;
    goto LAB_004774b8;
  }
  if (param_2 != 0x203) {
    if (0x201 < param_2) {
      if (param_2 != 0x202) {
        return 0;
      }
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      if (*(int *)(param_1 + 0xa4) == 1) {
        switch(uVar10) {
        case 1:
        case 2:
        case 4:
          iVar4 = *(int *)(iVar1 + 0x7c);
          bVar14 = CARRY4(*(uint *)(iVar1 + 0x78),*(uint *)(iVar1 + 0x18));
          iVar7 = *(uint *)(iVar1 + 0x78) + *(uint *)(iVar1 + 0x18);
          break;
        case 3:
        case 5:
        case 9:
          uVar10 = *(uint *)(iVar1 + 0x20) - *(uint *)(iVar1 + 0x80);
          iVar4 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x84)) -
                  (uint)(*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x80));
          bVar14 = CARRY4(uVar10,*(uint *)(iVar1 + 0x18));
          iVar7 = uVar10 + *(uint *)(iVar1 + 0x18);
          break;
        default:
          goto switchD_00477182_caseD_6;
        }
        uVar17 = FUN_00494160(param_1,iVar7,iVar4 + *(int *)(iVar1 + 0x1c) + (uint)bVar14);
        FUN_00453340(param_1,uVar17,0,0,(param_3 & 4) << 2);
      }
      else if (*(int *)(param_1 + 0xa4) == 4) {
        FUN_004ea040(*(undefined4 *)(*(int *)(iVar1 + 8) + 8),0);
      }
switchD_00477182_caseD_6:
      ReleaseCapture();
      *(undefined4 *)(param_1 + 0xa4) = 0;
      FUN_00477740();
      return 0;
    }
    if (param_2 != 0x201) {
      if (param_2 == 0x1f) {
        if (*(int *)(param_1 + 0xa4) == 4) {
          FUN_004ea040(*(undefined4 *)(*(int *)(iVar1 + 8) + 8),1);
        }
        pHVar3 = GetCapture();
        if (pHVar3 == *(HWND *)(param_1 + 4)) {
          ReleaseCapture();
        }
        *(undefined4 *)(param_1 + 0xa4) = 0;
        InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
        FUN_00477740();
        return 0;
      }
      if (param_2 != 0x200) {
        return 0;
      }
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      *(int *)(param_1 + 0xa8) = iVar4;
      *(int *)(param_1 + 0xac) = iVar7;
      if (*(int *)(param_1 + 0xa4) == 1) {
        iVar5 = iVar4 - *(int *)(param_1 + 0x90);
        if ((((-2 < iVar5) && (iVar5 < 2)) && (iVar5 = iVar7 - *(int *)(param_1 + 0x94), -2 < iVar5)
            ) && (iVar5 < 2)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xa4) = 4;
        FUN_004e9f70(*(undefined4 *)(*(int *)(iVar1 + 8) + 8),0x2d,0);
        FUN_004ea750(*(undefined4 *)(*(int *)(iVar1 + 8) + 8),iVar1,2,0);
      }
      else if (*(int *)(param_1 + 0xa4) != 4) {
        return 0;
      }
      iVar5 = *(int *)(iVar1 + 0x218);
      pfVar8 = (float *)(iVar1 + 0x58);
      pfVar11 = local_40;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
      }
      iVar4 = *(int *)(param_1 + 0xb0) + iVar4;
      iVar6 = *(int *)(iVar5 + 0x20);
      if ((iVar4 < *(int *)(iVar5 + 0x20)) || (iVar6 = *(int *)(iVar5 + 0x28) + 1, iVar6 < iVar4)) {
        iVar4 = iVar6;
      }
      iVar7 = *(int *)(param_1 + 0xb4) + iVar7;
      local_44 = *(int *)(iVar5 + 0x24);
      if ((local_44 <= iVar7) && (local_44 = *(int *)(iVar5 + 0x2c) + 1, iVar7 <= local_44)) {
        local_44 = iVar7;
      }
      lVar16 = 0;
      if ((_DAT_0064be7c & 1) == 0) {
        lVar16 = FUN_00477540(iVar1,iVar4);
        if ((param_1 != 0) && (SVar2 = GetAsyncKeyState(0x10), -1 < SVar2)) {
          lVar16 = FUN_00495080(param_1,lVar16 + *(longlong *)(iVar1 + 0x18),iVar1);
          lVar16 = lVar16 - *(longlong *)(iVar1 + 0x18);
        }
        lVar16 = lVar16 - CONCAT44(DAT_0064be84,DAT_0064be80);
        iVar4 = DAT_0064be94;
        iVar7 = DAT_0064be90;
        if ((lVar16 < CONCAT44(DAT_0064be94,DAT_0064be90)) ||
           (iVar4 = DAT_0064be9c, iVar7 = DAT_0064be98, CONCAT44(DAT_0064be9c,DAT_0064be98) < lVar16
           )) {
          lVar16 = CONCAT44(iVar4,iVar7);
        }
      }
      iVar4 = (int)((ulonglong)lVar16 >> 0x20);
      uVar12 = (uint)lVar16;
      fVar15 = (float10)_DAT_0064be88;
      if ((_DAT_0064be7c & 2) == 0) {
        fVar15 = (float10)FUN_00477650(iVar1,local_44);
      }
      switch(uVar10) {
      case 1:
      case 2:
        uVar10 = *(uint *)(iVar1 + 0x20);
        local_20 = lVar16 + CONCAT44(DAT_0064bec4,DAT_0064bec0);
        if (*(longlong *)(iVar1 + 0x20) < local_20 + CONCAT44(local_14,local_18)) {
          local_18 = uVar10 - (uint)local_20;
          local_14 = (*(int *)(iVar1 + 0x24) - (int)((ulonglong)local_20 >> 0x20)) -
                     (uint)(uVar10 < (uint)local_20);
        }
        break;
      case 3:
      case 9:
        uVar10 = *(uint *)(iVar1 + 0x20);
        local_18 = DAT_0064bec8 - uVar12;
        local_14 = (DAT_0064becc - iVar4) - (uint)(DAT_0064bec8 < uVar12);
        iVar4 = *(int *)(iVar1 + 0x24);
        iVar7 = local_14 + local_20._4_4_ + (uint)CARRY4(local_18,(uint)local_20);
        local_20 = CONCAT44(local_20._4_4_,(uint)local_20);
        if ((iVar4 <= iVar7) &&
           ((iVar4 < iVar7 ||
            (local_20 = CONCAT44(local_20._4_4_,(uint)local_20), uVar10 < local_18 + (uint)local_20)
            ))) {
          local_20 = CONCAT44((iVar4 - local_14) - (uint)(uVar10 < local_18),uVar10 - local_18);
        }
        break;
      case 4:
        uVar10 = *(uint *)(iVar1 + 0x20);
        local_20 = lVar16 + CONCAT44(DAT_0064bec4,DAT_0064bec0);
        if (*(longlong *)(iVar1 + 0x20) < local_20 + CONCAT44(local_14,local_18)) {
          local_18 = uVar10 - (uint)local_20;
          local_14 = (*(int *)(iVar1 + 0x24) - (int)((ulonglong)local_20 >> 0x20)) -
                     (uint)(uVar10 < (uint)local_20);
        }
        local_40[2] = (float)fVar15;
        break;
      case 5:
        uVar10 = *(uint *)(iVar1 + 0x20);
        local_18 = DAT_0064bec8 - uVar12;
        local_14 = (DAT_0064becc - iVar4) - (uint)(DAT_0064bec8 < uVar12);
        iVar4 = *(int *)(iVar1 + 0x24);
        iVar7 = local_14 + local_20._4_4_ + (uint)CARRY4(local_18,(uint)local_20);
        if ((iVar4 <= iVar7) && ((iVar4 < iVar7 || (uVar10 < local_18 + (uint)local_20)))) {
          local_20._0_4_ = uVar10 - local_18;
          local_20._4_4_ = (iVar4 - local_14) - (uint)(uVar10 < local_18);
        }
      case 8:
        local_40[2] = (float)fVar15;
        break;
      default:
        local_20 = CONCAT44(local_20._4_4_,(uint)local_20);
      }
      FUN_005c7c50(iVar1,local_40);
      FUN_004eb2b0();
      FUN_00475c00();
      return 0;
    }
  }
  if ((param_3 & 2) != 0) {
    return 0;
  }
  if (uVar10 == 0) {
    return 0;
  }
  if (9 < uVar10) {
    return 0;
  }
  *(int *)(param_1 + 0x90) = iVar4;
  *(int *)(param_1 + 0xa8) = iVar4;
  DAT_0064be90 = 0;
  *(int *)(param_1 + 0x94) = iVar7;
  *(int *)(param_1 + 0xac) = iVar7;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(uint *)(param_1 + 0x18) =
       (uint)(param_2 == 0x203) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfffdffff;
  _DAT_0064be7c = 1;
  puVar9 = (undefined4 *)(iVar1 + 0x58);
  puVar13 = &DAT_0064bea0;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  DAT_0064be94 = 0;
  DAT_0064be98 = 0;
  DAT_0064be9c = 0;
  switch(uVar10) {
  case 1:
  case 2:
  case 4:
    _DAT_0064be88 = *(float *)(iVar1 + 0x60);
    DAT_0064be80 = *(int *)(iVar1 + 0x78);
    DAT_0064be84 = *(int *)(iVar1 + 0x7c);
    DAT_0064be90 = -*(int *)(iVar1 + 0x78);
    DAT_0064be94 = -(*(int *)(iVar1 + 0x7c) + (uint)(*(int *)(iVar1 + 0x78) != 0));
    DAT_0064be98 = *(uint *)(iVar1 + 0x20) - *(uint *)(iVar1 + 0x78);
    DAT_0064be9c = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x7c)) -
                   (uint)(*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x78));
    break;
  case 3:
  case 5:
  case 9:
    _DAT_0064be88 = *(float *)(iVar1 + 0x60);
    DAT_0064be80 = *(uint *)(iVar1 + 0x20) - *(uint *)(iVar1 + 0x80);
    DAT_0064be84 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x84)) -
                   (uint)(*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x80));
    DAT_0064be98 = *(int *)(iVar1 + 0x80);
    DAT_0064be9c = *(int *)(iVar1 + 0x84);
    if (param_4 == 0) {
      DAT_0064be90 = *(uint *)(iVar1 + 0x80) - *(uint *)(iVar1 + 0x20);
      DAT_0064be94 = (*(int *)(iVar1 + 0x84) - *(int *)(iVar1 + 0x24)) -
                     (uint)(*(uint *)(iVar1 + 0x80) < *(uint *)(iVar1 + 0x20));
    }
    else {
      uVar10 = *(uint *)(iVar1 + 0x78) - *(uint *)(iVar1 + 0x20);
      DAT_0064be90 = uVar10 + *(uint *)(iVar1 + 0x80);
      DAT_0064be94 = ((*(int *)(iVar1 + 0x7c) - *(int *)(iVar1 + 0x24)) -
                     (uint)(*(uint *)(iVar1 + 0x78) < *(uint *)(iVar1 + 0x20))) +
                     *(int *)(iVar1 + 0x84) + (uint)CARRY4(uVar10,*(uint *)(iVar1 + 0x80));
    }
    break;
  case 8:
    _DAT_0064be88 = *(float *)(iVar1 + 0x60);
    _DAT_0064be7c = 1;
  default:
    goto LAB_004773a0;
  }
  _DAT_0064be7c = 2;
  if ((-1 < DAT_0064be94) && ((0 < DAT_0064be94 || (DAT_0064be90 != 0)))) {
    DAT_0064be90 = 0;
    DAT_0064be94 = 0;
  }
LAB_004773a0:
  if ((DAT_0064be9c < 1) && (DAT_0064be9c < 0)) {
    DAT_0064be98 = 0;
    DAT_0064be9c = 0;
  }
  iVar5 = FUN_004775b0(iVar1,DAT_0064be80,DAT_0064be84);
  *(int *)(param_1 + 0xb0) = iVar5 - iVar4;
  iVar4 = FUN_00476330(iVar1,(double)_DAT_0064be88);
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(int *)(param_1 + 0xb4) = iVar4 - iVar7;
  FUN_004776d0(param_1,iVar1);
LAB_004774b8:
  SetCapture(*(HWND *)(param_1 + 4));
  return 0;
}


