/* Module: mp3plug.dll
   Function: FUN_5f6e2050
   Address: 5f6e2050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f6e2050(void *this,int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 *param_7,byte *param_8,int *param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_44;
  int local_38;
  int local_34;
  uint local_2c;
  
  iVar2 = FUN_5f6e2000(this,param_3);
  if (param_4 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 8;
  }
  iVar9 = iVar9 + iVar2;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = 0x1ff;
  }
  else {
    iVar2 = 0xff;
  }
  if ((0x1e00 < iVar9 + iVar2 * 8) &&
     (iVar2 = (int)(((uint)(-iVar9 + 0x1e00 >> 2) >> 0x1d) + 0x1e00 + -iVar9) >> 3, iVar2 < 0)) {
    iVar2 = 0;
  }
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_58 = 0;
    piVar5 = param_2;
    do {
      if (0 < *(int *)(param_1 + 0x1c)) {
        iVar3 = *piVar5;
        iVar6 = iVar3 + *(int *)(param_1 + 0x1c) * 4;
        iVar13 = (iVar6 - iVar3 & 0xfffffff8U) + iVar3;
        for (; iVar3 < iVar13; iVar3 = iVar3 + 8) {
          local_58 = local_58 + *(int *)(iVar3 + 0x8c) + *(int *)(iVar3 + 0x90);
        }
        for (; iVar3 < iVar6; iVar3 = iVar3 + 4) {
          local_58 = local_58 + *(int *)(iVar3 + 0x8c);
        }
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < (int)(param_2 + *(int *)(param_1 + 0x28)));
  }
  iVar6 = (iVar9 - *(int *)(param_1 + 0x30)) - local_58;
  local_2c = iVar6 + (*(int *)(param_1 + 0x40) - iVar2) * 8;
  if (param_9 == (int *)0x0) {
    local_34 = 0;
  }
  else {
    iVar2 = *param_9;
    if (iVar2 * 8 < 0x39) {
      local_34 = iVar2 * 8;
    }
    else {
      local_34 = 0x38;
    }
    if (local_34 < (int)local_2c) {
      uVar7 = local_2c + ((uint)((int)local_2c >> 2) >> 0x1d) & 0xfffffff8;
      if (iVar2 * 8 < (int)uVar7) {
        uVar7 = iVar2 * 8;
      }
      if ((int)uVar7 < 0x39) {
        if ((int)uVar7 < 1) {
          local_34 = (int)(((uint)((int)uVar7 >> 2) >> 0x1d) + uVar7) >> 3;
          goto LAB_5f6e2294;
        }
      }
      else {
        uVar7 = 0x38;
      }
      local_2c = local_2c - uVar7;
      local_58 = local_58 + uVar7;
      *param_9 = iVar2 - ((int)(((uint)((int)uVar7 >> 2) >> 0x1d) + uVar7) >> 3);
      local_34 = (int)(((uint)((int)uVar7 >> 2) >> 0x1d) + uVar7) >> 3;
    }
    else {
      if (iVar2 * 8 < 0x38) {
        local_38 = iVar2 * 8;
      }
      else {
        local_38 = 0x38;
      }
      if ((iVar6 - local_38) + *(int *)(param_1 + 0x40) < 0) {
        local_34 = 0;
      }
      else {
        if (iVar2 * 8 < 0x38) {
          iVar6 = iVar2 * 8;
        }
        else {
          iVar6 = 0x38;
        }
        if (iVar2 * 8 < iVar6) {
          iVar6 = iVar2 * 8;
        }
        if (iVar6 < 1) {
          local_34 = (int)(((uint)(iVar6 >> 2) >> 0x1d) + iVar6) >> 3;
        }
        else {
          local_58 = local_58 + iVar6;
          local_34 = (int)(((uint)(iVar6 >> 2) >> 0x1d) + iVar6) >> 3;
          *param_9 = iVar2 - local_34;
        }
      }
    }
  }
LAB_5f6e2294:
  if ((int)local_2c < 1) {
    iVar2 = -(local_58 - (((uint)(local_58 >> 2) >> 0x1d) + local_58 & 0xfffffff8));
    iVar6 = iVar2 + 8;
    local_2c = iVar6 - (((uint)(iVar6 >> 2) >> 0x1d) + 8 + iVar2 & 0xfffffff8);
  }
  else {
    iVar6 = 0;
    iVar2 = *(int *)(param_1 + 0x28);
    if (0 < iVar2) {
      local_54 = *(int *)(param_1 + 0x1c);
      do {
        iVar3 = *(int *)(param_1 + 0x30);
        if (0 < local_54) {
          local_4c = 0;
          iVar2 = param_2[iVar6];
          iVar13 = 0;
          do {
            iVar14 = *(int *)(iVar2 + 0x8c + iVar13 * 4);
            uVar7 = 0xffc - iVar14;
            if ((int)local_2c < (int)uVar7) {
              uVar7 = local_2c;
            }
            uVar8 = 0x1e00 - (iVar14 + iVar3);
            if ((int)uVar8 < (int)uVar7) {
              uVar7 = uVar8;
            }
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            uVar7 = ((uint)((int)uVar7 >> 1) >> 0x1e) + uVar7 & 0xfffffffc;
            *(uint *)(iVar2 + local_4c + 0x8c) = iVar14 + uVar7;
            iVar2 = param_2[iVar6];
            local_54 = *(int *)(param_1 + 0x1c);
            local_58 = local_58 + uVar7;
            local_4c = local_4c + 4;
            iVar3 = iVar3 + *(int *)(iVar2 + 0x8c + iVar13 * 4);
            iVar13 = iVar13 + 1;
            local_2c = local_2c - uVar7;
          } while (iVar13 < local_54);
          iVar2 = *(int *)(param_1 + 0x28);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
  }
  FUN_5f6f89e0(*(int *)(param_1 + 0x44));
  FUN_5f6e1db0(param_3,*(int *)(param_1 + 0xc));
  FUN_5f6e1f60(*(uint *)(param_1 + 0x40),*(int *)(param_1 + 0x3c));
  if ((*(int *)(param_1 + 0x20) == 0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar2 = 0;
    do {
      FUN_5f6f89f0(*(undefined4 *)(param_1 + 0x44),0,4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    do {
      iVar13 = 0;
      if (0 < iVar6) {
        do {
          uVar1 = *(undefined4 *)(param_1 + 0x44);
          iVar2 = *(int *)(param_1 + 0x20);
          iVar6 = param_2[iVar3];
          FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x8c + iVar13 * 4),0xc);
          iVar14 = iVar13 * 0x4c;
          FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xbc + iVar14),9);
          FUN_5f6f89f0(uVar1,*(int *)(iVar6 + 0x1c + iVar13 * 4) + 0x96,8);
          if (iVar2 == 0) {
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x44 + iVar13 * 4),4);
          }
          else {
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x44 + iVar13 * 4),9);
          }
          if (*(int *)(iVar6 + 0x9c + iVar13 * 4) == 0) {
            FUN_5f6f89f0(uVar1,0,1);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xcc + iVar14),5);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xd0 + iVar14),5);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xd4 + iVar14),5);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xc4 + iVar14),4);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 200 + iVar14),3);
          }
          else {
            FUN_5f6f89f0(uVar1,1,1);
            uVar7 = *(uint *)(iVar6 + 0x9c + iVar13 * 4);
            if (((uVar7 == 1) || (uVar7 == 2)) || (uVar7 == 3)) {
              FUN_5f6f89f0(uVar1,uVar7,2);
              FUN_5f6f89f0(uVar1,0,1);
            }
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xcc + iVar14),5);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xd0 + iVar14),5);
            iVar10 = iVar13 * 0xc;
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x24 + iVar10),3);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x28 + iVar10),3);
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x2c + iVar10),3);
          }
          if (iVar2 == 0) {
            FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x94 + iVar13 * 4),1);
          }
          FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0x3c + iVar13 * 4),1);
          FUN_5f6f89f0(uVar1,*(uint *)(iVar6 + 0xb4 + iVar14),1);
          iVar13 = iVar13 + 1;
          iVar6 = *(int *)(param_1 + 0x1c);
        } while (iVar13 < iVar6);
        iVar2 = *(int *)(param_1 + 0x28);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  FUN_5f6f89e0(*(int *)(param_1 + 0x48));
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    do {
      iVar13 = 0;
      if (0 < iVar6) {
        local_38 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x48);
          iVar6 = param_2[iVar3];
          iVar14 = FUN_5f6f89e0(iVar2);
          iVar10 = local_38 + iVar6;
          local_44 = 0;
          do {
            uVar7 = *(uint *)(iVar10 + 0x6c);
            if (uVar7 == 0) {
              iVar4 = *(int *)(iVar10 + 0x4c);
            }
            else {
              iVar12 = 0;
              iVar4 = *(int *)(iVar10 + 0x4c);
              iVar11 = local_44;
              if (0 < iVar4) {
                do {
                  FUN_5f6f89f0(iVar2,*(uint *)(*(int *)(iVar6 + 0x14 + iVar13 * 4) + iVar11 * 4),
                               uVar7);
                  iVar12 = iVar12 + 1;
                  iVar4 = *(int *)(iVar10 + 0x4c);
                  iVar11 = iVar11 + 1;
                } while (iVar12 < iVar4);
              }
            }
            iVar10 = iVar10 + 4;
            local_44 = iVar4 + local_44;
          } while (iVar10 < iVar6 + 0x10 + local_38);
          iVar11 = 0;
          iVar4 = iVar13 * 0x4c;
          local_5c = 0;
          iVar10 = *(int *)(iVar6 + 0xc0 + iVar4);
          if (0 < iVar10) {
            local_54 = iVar4 + iVar6;
            do {
              iVar12 = 0;
              if (0 < *(int *)(local_54 + 0xe4)) {
                do {
                  FUN_5f6fa000((int *)(*(int *)(iVar6 + 4 + iVar13 * 4) + iVar11 * 4),
                               *(int *)(local_54 + 0xcc),iVar2);
                  iVar12 = iVar12 + 1;
                  iVar11 = iVar11 + 2;
                } while (iVar12 < *(int *)(local_54 + 0xe4));
                iVar10 = *(int *)(iVar6 + 0xc0 + iVar4);
              }
              local_54 = local_54 + 4;
              local_5c = local_5c + 1;
            } while (local_5c < iVar10);
          }
          iVar10 = 0;
          if (0 < *(int *)(iVar6 + 0xb0 + iVar4)) {
            do {
              FUN_5f6fa070((uint *)(*(int *)(iVar6 + 4 + iVar13 * 4) + iVar11 * 4),
                           *(int *)(iVar6 + 0xb4 + iVar4),iVar2);
              iVar10 = iVar10 + 1;
              iVar11 = iVar11 + 4;
            } while (iVar10 < *(int *)(iVar6 + 0xb0 + iVar4));
          }
          iVar10 = FUN_5f6f89e0(iVar2);
          iVar10 = iVar10 - iVar14;
          iVar14 = *(int *)(iVar6 + 0x8c + iVar13 * 4);
          if (iVar10 + 0x10 <= iVar14) {
            iVar4 = iVar10 + 0x10;
            do {
              FUN_5f6f89f0(iVar2,0xffff,0x10);
              iVar10 = iVar10 + 0x10;
              iVar4 = iVar4 + 0x10;
              iVar14 = *(int *)(iVar6 + 0x8c + iVar13 * 4);
            } while (iVar4 <= iVar14);
          }
          FUN_5f6f89f0(iVar2,(1 << ((byte)(iVar14 - iVar10) & 0x1f)) - 1,iVar14 - iVar10);
          local_38 = local_38 + 0x10;
          iVar13 = iVar13 + 1;
          iVar6 = *(int *)(param_1 + 0x1c);
        } while (iVar13 < iVar6);
        iVar2 = *(int *)(param_1 + 0x28);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = iVar9 - *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x40) =
       (((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) -
       ((int)(local_58 + local_2c + ((uint)((int)(local_58 + local_2c) >> 2) >> 0x1d)) >> 3)) +
       *(int *)(param_1 + 0x40);
  for (; 0xf < (int)local_2c; local_2c = local_2c - 0x10) {
    FUN_5f6f89f0(*(undefined4 *)(param_1 + 0x48),0,0x10);
  }
  if (local_2c != 0) {
    FUN_5f6f89f0(*(undefined4 *)(param_1 + 0x48),0,local_2c);
  }
  if (0 < *(int *)(param_1 + 0x360)) {
    iVar2 = 0;
    do {
      FUN_5f6f89f0(*(undefined4 *)(param_1 + 0x48),0,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x360));
  }
  if (-1 < local_34 + -1) {
    pbVar15 = param_8 + local_34 + -1;
    do {
      FUN_5f6f89f0(*(undefined4 *)(param_1 + 0x48),(uint)*param_8,8);
      param_8 = param_8 + 1;
    } while ((int)param_8 <= (int)pbVar15);
  }
  FUN_5f6f89e0(*(int *)(param_1 + 0x48));
  pbVar15 = FUN_5f6fa0f0(param_1 + 0x4c,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x30),
                         iVar9 - *(int *)(param_1 + 0x30),param_6);
  *param_7 = pbVar15;
  return local_2c + *(int *)(param_1 + 0x30) + local_58;
}


