/* Module: mp3plug.dll
   Function: FUN_5f6ea920
   Address: 5f6ea920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6ea920(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int *in_EAX;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_74 [7];
  undefined1 local_58 [4];
  int local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  undefined *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  undefined *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_14;
  
  local_38 = -1;
  iVar4 = in_EAX[1];
  if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 3)) || ((iVar4 == 4 || (iVar4 == 6)))) {
    local_20 = 0;
  }
  else if (iVar4 == 2) {
    local_20 = 1;
  }
  else {
    local_20 = param_1;
    if (iVar4 == 5) {
      local_20 = 2;
    }
  }
  if (in_EAX[0x8b] == 0) {
    if (in_EAX[0x58] == 0) {
      local_74[0] = 1;
      iVar4 = 2;
      local_74[1] = 2;
    }
    else {
      local_74[0] = 3;
      iVar4 = 1;
    }
  }
  else {
    local_74[0] = 4;
    iVar4 = 3;
    local_74[1] = 5;
    local_74[2] = 6;
  }
  local_34 = (undefined *)0x7fffffff;
  if (iVar4 != 0) {
    local_2c = local_20 * 0x10;
    local_24 = local_74;
    local_38 = -1;
    local_30 = local_74 + iVar4;
    local_48 = in_EAX;
    do {
      local_28 = *local_24 * 0x30;
      iVar5 = local_2c + local_28;
      local_44 = &DAT_5f741598 + iVar5;
      local_54 = *local_48;
      iVar10 = 0;
      local_4c = local_48 + 0x2a;
      iVar8 = -4;
      do {
        iVar7 = 0;
        bVar1 = false;
        if (local_48 + 0x2a == (int *)0x0) {
          local_50 = (int *)iVar10;
          local_14 = -1;
          if (iVar10 < iVar10 + *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5)) {
            local_58[0] = 0;
            local_3c = (int *)0x0;
            local_40 = local_48 + iVar10;
            do {
              if (iVar7 < local_40[3]) {
                iVar7 = local_40[3];
              }
              local_40 = local_40 + 1;
            } while ((int)local_40 <
                     (int)(local_48 + iVar10 + *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5)));
            bVar1 = false;
            local_14 = -1;
          }
        }
        else {
          local_40 = (int *)iVar10;
          local_14 = 0xffffffff;
          local_14 = -1;
          if (iVar10 < iVar10 + *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5)) {
            local_58[0] = 0;
            bVar1 = false;
            local_3c = (int *)0x0;
            local_50 = local_48 + iVar10;
            do {
              iVar6 = local_50[0x2a];
              if (iVar6 == 0) {
                if (iVar7 < local_50[3]) {
                  iVar7 = local_50[3];
                }
              }
              else if (iVar6 == 1) {
                if (local_14 < local_50[3]) {
                  local_14 = local_50[3];
                }
              }
              else if (iVar6 == 2) {
                local_58[0] = 1;
                bVar1 = true;
              }
              local_50 = local_50 + 1;
            } while ((int)local_50 <
                     (int)(local_48 + iVar10 + *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5)));
          }
        }
        iVar6 = 0;
        local_14 = local_14 + 1;
        if (local_14 < iVar7) {
          local_14 = iVar7;
        }
        if (bVar1) {
          if (local_54 == 0) {
            if (local_14 < 7) {
              local_14 = 7;
            }
          }
          else if (local_14 == 0) {
            local_14 = 1;
          }
        }
        for (; 7 < local_14; local_14 = local_14 >> 4) {
          iVar6 = iVar6 + 4;
        }
        if (local_14 < 2) {
          if (0 < local_14) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          if (local_14 < 4) {
            iVar7 = 2;
          }
          else {
            iVar7 = 3;
          }
          iVar6 = iVar6 + iVar7;
        }
        *(int *)(local_58 + iVar8 * 4) = iVar6;
        iVar10 = iVar10 + *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0);
      local_3c = (int *)CONCAT31(local_3c._1_3_,1);
      iVar8 = 0;
      do {
        if (*(int *)(&DAT_5f741774 + iVar8 * 4 + *local_24 * 0x10) < local_74[iVar8 + 3]) {
          bVar1 = false;
          goto LAB_5f6eab64;
        }
        if (3 < iVar8 + 1) {
          bVar1 = true;
          goto LAB_5f6eab64;
        }
        if (*(int *)(&DAT_5f741774 + (iVar8 + 1) * 4 + *local_24 * 0x10) < local_74[iVar8 + 4]) {
          bVar1 = false;
          goto LAB_5f6eab64;
        }
        iVar8 = iVar8 + 2;
      } while (iVar8 < 4);
      bVar1 = true;
LAB_5f6eab64:
      if (bVar1) {
        iVar8 = 0;
        iVar10 = 0;
        do {
          iVar6 = 0;
          iVar7 = *(int *)(local_44 + iVar10 * 4);
          if (0 < iVar7) {
            do {
              if (local_48[iVar8 + 0x2a] == 2) {
                local_48[iVar8 + 3] = (1 << ((byte)local_74[iVar10 + 3] & 0x1f)) + -1;
                iVar7 = *(int *)(local_44 + iVar10 * 4);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 1;
            } while (iVar6 < iVar7);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
        iVar8 = -4;
        local_3c = (int *)0x0;
        do {
          local_3c = (int *)((int)local_3c +
                            *(int *)(local_58 + iVar8 * 4) *
                            *(int *)(&DAT_5f7415a8 + iVar8 * 4 + iVar5));
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0);
        piVar9 = (int *)(&DAT_5f741598 + local_28 + local_2c);
        iVar5 = 0;
        do {
          iVar10 = 0;
          iVar8 = *piVar9;
          if (0 < iVar8) {
            do {
              if (local_48[iVar5 + 0x2a] == 2) {
                local_48[iVar5 + 3] = 0;
                iVar8 = *piVar9;
              }
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar10 < iVar8);
          }
          piVar9 = piVar9 + 1;
        } while ((int)piVar9 < (int)(&DAT_5f7415a8 + local_28 + local_2c));
        if ((int)local_3c < (int)local_34) {
          local_34 = (undefined *)local_3c;
          local_38 = *local_24;
        }
      }
      local_24 = local_24 + 1;
      in_EAX = local_48;
    } while ((int)local_24 < (int)(local_74 + iVar4));
  }
  iVar4 = local_20 * 0x10 + local_38 * 0x30;
  in_EAX[0x82] = *(int *)(&DAT_5f741598 + iVar4);
  local_30 = in_EAX + 0x2a;
  in_EAX[0x83] = *(int *)(iVar4 + 0x5f74159c);
  in_EAX[0x84] = *(int *)(iVar4 + 0x5f7415a0);
  in_EAX[0x85] = *(int *)(iVar4 + 0x5f7415a4);
  local_34 = &DAT_5f741598 + iVar4;
  local_28 = *in_EAX;
  iVar4 = 0;
  local_48 = in_EAX;
  local_40 = (int *)0xfffffffc;
  do {
    puVar2 = local_34;
    iVar8 = 0;
    iVar5 = -1;
    cVar3 = '\0';
    if (local_30 == (int *)0x0) {
      local_2c = iVar4;
      local_14 = 0;
      if (iVar4 < iVar4 + *(int *)(local_34 + (int)local_40 * 4 + 0x10)) {
        local_24 = (int *)((uint)local_24._1_3_ << 8);
        local_3c = local_48 + iVar4;
        do {
          if (iVar8 < local_3c[3]) {
            iVar8 = local_3c[3];
          }
          local_3c = local_3c + 1;
        } while ((int)local_3c <
                 (int)(local_48 + iVar4 + *(int *)(local_34 + (int)local_40 * 4 + 0x10)));
        cVar3 = '\0';
      }
    }
    else {
      local_2c = iVar4;
      local_14 = 0;
      if (iVar4 < iVar4 + *(int *)(local_34 + (int)local_40 * 4 + 0x10)) {
        local_24 = (int *)((uint)local_24._1_3_ << 8);
        local_3c = local_48 + iVar4;
        do {
          iVar10 = local_3c[0x2a];
          if (iVar10 == 0) {
            if (iVar8 < local_3c[3]) {
              iVar8 = local_3c[3];
            }
          }
          else if (iVar10 == 1) {
            if (iVar5 < local_3c[3]) {
              iVar5 = local_3c[3];
            }
          }
          else if (iVar10 == 2) {
            local_24 = (int *)CONCAT31(local_24._1_3_,1);
          }
          local_3c = local_3c + 1;
        } while ((int)local_3c <
                 (int)(local_48 + iVar4 + *(int *)(local_34 + (int)local_40 * 4 + 0x10)));
        cVar3 = (char)local_24;
      }
    }
    iVar10 = 0;
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
    if (cVar3 != '\0') {
      if (local_28 == 0) {
        if (iVar5 < 7) {
          iVar5 = 7;
        }
      }
      else if (iVar5 == 0) {
        iVar5 = 1;
      }
    }
    for (; 7 < iVar5; iVar5 = iVar5 >> 4) {
      iVar10 = iVar10 + 4;
    }
    if (iVar5 < 2) {
      if (0 < iVar5) {
        iVar10 = iVar10 + 1;
      }
    }
    else {
      if (iVar5 < 4) {
        iVar5 = 2;
      }
      else {
        iVar5 = 3;
      }
      iVar10 = iVar10 + iVar5;
    }
    *(int *)(local_58 + (int)local_40 * 4) = iVar10;
    iVar4 = iVar4 + *(int *)(puVar2 + (int)local_40 * 4 + 0x10);
    local_40 = (int *)((int)local_40 + 1);
  } while (local_40 != (int *)0x0);
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar10 = 0;
    iVar8 = *(int *)(puVar2 + iVar5 * 4);
    if (0 < iVar8) {
      do {
        if (local_48[iVar4 + 0x2a] == 2) {
          local_48[iVar4 + 3] = (1 << ((byte)local_74[iVar5 + 3] & 0x1f)) + -1;
          iVar8 = *(int *)(puVar2 + iVar5 * 4);
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar10 < iVar8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  local_48[0x86] = local_74[3];
  iVar4 = 0;
  local_48[0x87] = local_74[4];
  local_48[0x88] = local_74[5];
  local_48[0x89] = local_74[6];
  for (piVar9 = local_48;
      (int)piVar9 < (int)(((int)(local_48 + 4) - (int)local_48 & 0xfffffff8U) + (int)local_48);
      piVar9 = piVar9 + 2) {
    iVar4 = iVar4 + piVar9[0x86] * piVar9[0x82] + piVar9[0x87] * piVar9[0x83];
  }
  for (; (int)piVar9 < (int)(local_48 + 4); piVar9 = piVar9 + 1) {
    iVar4 = iVar4 + piVar9[0x86] * piVar9[0x82];
  }
  local_48[0x8a] = iVar4;
  local_48[0x81] = *(int *)(local_38 * 0x14 + 0x5f7416f8);
  iVar4 = local_38 * 0x14;
  local_48[0x81] = local_48[0x81] + local_74[3] * *(int *)(iVar4 + 0x5f7416e8);
  local_48[0x81] = local_48[0x81] + local_74[4] * *(int *)(iVar4 + 0x5f7416ec);
  local_48[0x81] = local_48[0x81] + local_74[5] * *(int *)(iVar4 + 0x5f7416f0);
  local_48[0x81] = local_48[0x81] + local_74[6] * *(int *)(iVar4 + 0x5f7416f4);
  if ((local_48[0x8b] != 0) && (local_48[0x81] = local_48[0x81] * 2, local_48[0x8c] != 0)) {
    local_48[0x81] = local_48[0x81] + 1;
  }
  return;
}


