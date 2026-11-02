/* Module: erv23260.dll
   Function: FUN_63816940
   Address: 63816940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63816940(void *this,int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar8;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  bool bVar9;
  int *piVar10;
  int *local_5c [8];
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  byte local_5;
  
  local_10 = *(int **)((int)this + 0x10c);
  local_c = *(int **)((int)this + 0x110);
  local_14 = (int *)(*(int *)((int)this + 0x108) + (*param_1 >> 4) * 0x80);
  local_1c = local_c + 0x180;
  local_18 = local_c + 0x300;
  local_3c = local_c + 0x480;
  local_5 = 0;
  local_2c = local_c + 0x600;
  local_28 = local_c + 0x780;
  piVar6 = param_2;
  piVar4 = local_3c;
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar6 = param_2;
  piVar4 = local_2c;
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar6 = param_2;
  piVar4 = local_28;
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar5 = (int)local_c - (int)param_2;
  piVar6 = param_2;
  do {
    FUN_63817260(this,(uint)*(byte *)(param_1 + 0x1b),(int)piVar6,(int *)((int)piVar6 + iVar5),
                 (uint)(3 < local_5),*(int *)((int)this + 400));
    piVar6 = piVar6 + 0x40;
    local_5 = local_5 + 1;
  } while (local_5 < 6);
  piVar6 = local_c;
  piVar4 = local_1c;
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar7 = 0;
  piVar6 = local_c;
  piVar4 = local_18;
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  local_20 = (int *)0x0;
  bVar9 = (*(byte *)(param_1 + 0x19) & 1) != 0;
  if (bVar9) {
    local_20 = (int *)0x1;
  }
  local_20 = (int *)(uint)bVar9;
  if (((*(byte *)(param_1 + 0x19) & 4) != 0) ||
     (*(char *)((param_1[1] >> 4) + *(int *)((int)this + 0xc4)) != '\0')) {
    bVar1 = true;
  }
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  ppiVar3 = local_5c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar3 = (int *)0x0;
    ppiVar3 = ppiVar3 + 1;
  }
  local_30 = 0;
  do {
    piVar6 = (int *)0x400;
    if (local_30 == 0) {
      if (local_20 == (int *)0x0) {
LAB_63816b36:
        if (bVar1) {
          piVar6 = (int *)*local_10;
          local_5c[0] = piVar6;
        }
        else {
          local_5c[0] = (int *)((*local_14 + *local_10) / 2);
          piVar6 = local_10;
        }
      }
      else if (bVar1) {
        local_5c[0] = (int *)0x400;
      }
      else {
        if (local_20 == (int *)0x0) goto LAB_63816b36;
        piVar6 = local_14;
        local_5c[0] = (int *)*local_14;
      }
      piVar4 = &local_34;
      uVar2 = CONCAT31((int3)((uint)piVar6 >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar6 = local_3c;
      piVar10 = local_c;
LAB_63816b79:
      FUN_63816740(this,(int)piVar6,(int)piVar10,(int)param_2,0,(int *)local_5c,0,iVar5,uVar2,piVar4
                  );
      piVar6 = extraout_ECX;
      uVar7 = extraout_EDX;
    }
    else {
      if (local_30 == 1) {
        if (bVar1) {
          local_5c[0] = (int *)0x400;
        }
        else {
          iVar5 = (int)local_14 - (int)local_5c;
          ppiVar3 = local_5c;
          iVar8 = 8;
          do {
            *ppiVar3 = *(int **)(iVar5 + (int)ppiVar3);
            ppiVar3 = ppiVar3 + 1;
            iVar8 = iVar8 + -1;
            uVar7 = 0;
          } while (iVar8 != 0);
        }
        piVar4 = &local_38;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 1;
        piVar6 = local_2c;
        piVar10 = local_1c;
        goto LAB_63816b79;
      }
      if (local_30 == 2) {
        if (local_20 == (int *)0x0) {
          iVar5 = (int)local_10 - (int)local_5c;
          ppiVar3 = local_5c;
          iVar8 = 8;
          do {
            *ppiVar3 = *(int **)(iVar5 + (int)ppiVar3);
            ppiVar3 = ppiVar3 + 1;
            iVar8 = iVar8 + -1;
            uVar7 = 0;
          } while (iVar8 != 0);
        }
        else {
          local_5c[0] = (int *)0x400;
        }
        piVar4 = &local_24;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 2;
        piVar6 = local_28;
        piVar10 = local_18;
        goto LAB_63816b79;
      }
    }
    if (local_30 == 0) {
      if (bVar1) {
        local_5c[0] = (int *)*local_c;
      }
      else {
        local_5c[0] = (int *)((local_14[8] + *local_c) / 2);
      }
      piVar6 = &local_34;
      uVar2 = CONCAT31((int3)((uint)local_c >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar4 = local_3c;
      piVar10 = local_c;
LAB_63816c63:
      FUN_63816740(this,(int)piVar4,(int)piVar10,(int)param_2,0x40,(int *)local_5c,0,iVar5,uVar2,
                   piVar6);
      piVar6 = extraout_ECX_00;
      uVar7 = extraout_EDX_00;
    }
    else {
      if (local_30 == 1) {
        if (bVar1) {
          local_5c[0] = (int *)0x400;
        }
        else {
          ppiVar3 = local_5c;
          piVar6 = local_14 + 8;
          iVar5 = 8;
          do {
            piVar4 = (int *)*piVar6;
            piVar6 = piVar6 + 1;
            *ppiVar3 = piVar4;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
            uVar7 = 0;
          } while (iVar5 != 0);
        }
        piVar6 = &local_38;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 1;
        piVar4 = local_2c;
        piVar10 = local_1c;
        goto LAB_63816c63;
      }
      if (local_30 == 2) {
        ppiVar3 = local_5c;
        iVar5 = 8;
        piVar6 = local_18;
        do {
          piVar4 = (int *)*piVar6;
          piVar6 = piVar6 + 8;
          *ppiVar3 = piVar4;
          ppiVar3 = ppiVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        piVar6 = &local_24;
        uVar2 = (uint)*(byte *)(param_1 + 0x1b);
        iVar5 = 2;
        piVar4 = local_28;
        piVar10 = local_18;
        goto LAB_63816c63;
      }
    }
    if (local_30 == 0) {
      if (local_20 == (int *)0x0) {
        local_5c[0] = (int *)((local_10[8] + *local_c) / 2);
      }
      else {
        local_5c[0] = (int *)*local_c;
      }
      piVar6 = &local_34;
      uVar2 = CONCAT31((int3)((uint)local_c >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar4 = local_3c;
      piVar10 = local_c;
LAB_63816d5f:
      FUN_63816740(this,(int)piVar4,(int)piVar10,(int)param_2,0x80,(int *)local_5c,0,iVar5,uVar2,
                   piVar6);
      piVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX_01;
    }
    else {
      if (local_30 == 1) {
        iVar5 = (int)local_1c - (int)local_5c;
        ppiVar3 = local_5c;
        iVar8 = 8;
        do {
          *ppiVar3 = *(int **)(iVar5 + (int)ppiVar3);
          ppiVar3 = ppiVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        piVar6 = &local_38;
        uVar2 = (uint)*(byte *)(param_1 + 0x1b);
        iVar5 = 1;
        piVar4 = local_2c;
        piVar10 = local_1c;
        goto LAB_63816d5f;
      }
      if (local_30 == 2) {
        if (local_20 == (int *)0x0) {
          ppiVar3 = local_5c;
          piVar4 = local_10 + 8;
          iVar5 = 8;
          do {
            piVar6 = (int *)*piVar4;
            piVar4 = piVar4 + 1;
            *ppiVar3 = piVar6;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        else {
          local_5c[0] = (int *)0x400;
          piVar4 = local_20;
        }
        piVar6 = &local_24;
        uVar2 = CONCAT31((int3)((uint)piVar4 >> 8),(char)param_1[0x1b]);
        iVar5 = 2;
        piVar4 = local_28;
        piVar10 = local_18;
        goto LAB_63816d5f;
      }
    }
    if (local_30 == 0) {
      piVar6 = &local_34;
      local_5c[0] = (int *)((local_c[0x80] + local_c[0x40]) / 2);
      uVar2 = CONCAT31((int3)((uint)piVar6 >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar4 = local_3c;
      piVar10 = local_c;
LAB_63816e3c:
      FUN_63816740(this,(int)piVar4,(int)piVar10,(int)param_2,0xc0,(int *)local_5c,0,iVar5,uVar2,
                   piVar6);
      piVar6 = extraout_ECX_02;
      uVar7 = extraout_EDX_02;
    }
    else {
      if (local_30 == 1) {
        ppiVar3 = local_5c;
        piVar6 = local_1c + 0x40;
        iVar5 = 8;
        do {
          piVar4 = (int *)*piVar6;
          piVar6 = piVar6 + 1;
          *ppiVar3 = piVar4;
          ppiVar3 = ppiVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        piVar6 = &local_38;
        uVar2 = (uint)*(byte *)(param_1 + 0x1b);
        iVar5 = 1;
        piVar4 = local_2c;
        piVar10 = local_1c;
        goto LAB_63816e3c;
      }
      if (local_30 == 2) {
        ppiVar3 = local_5c;
        piVar4 = local_18 + 0x80;
        iVar5 = 8;
        do {
          piVar6 = (int *)*piVar4;
          piVar4 = piVar4 + 8;
          *ppiVar3 = piVar6;
          ppiVar3 = ppiVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        piVar6 = &local_24;
        uVar2 = CONCAT31((int3)((uint)piVar4 >> 8),(char)param_1[0x1b]);
        iVar5 = 2;
        piVar4 = local_28;
        piVar10 = local_18;
        goto LAB_63816e3c;
      }
    }
    if (local_30 == 0) {
      if (local_20 == (int *)0x0) {
LAB_63816f1e:
        if (bVar1) {
          local_5c[0] = (int *)local_10[0x10];
          piVar6 = local_5c[0];
        }
        else {
          local_5c[0] = (int *)((local_10[0x10] + local_14[0x10]) / 2);
          piVar6 = local_14;
        }
      }
      else if (bVar1) {
        local_5c[0] = (int *)0x400;
      }
      else {
        if (local_20 == (int *)0x0) goto LAB_63816f1e;
        local_5c[0] = (int *)local_14[0x10];
        piVar6 = local_14;
      }
      piVar4 = &local_34;
      uVar2 = CONCAT31((int3)((uint)piVar6 >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar6 = local_3c;
      piVar10 = local_c;
LAB_63816f67:
      FUN_63816740(this,(int)piVar6,(int)piVar10,(int)param_2,0x100,(int *)local_5c,1,iVar5,uVar2,
                   piVar4);
      piVar6 = extraout_ECX_03;
      uVar7 = extraout_EDX_03;
    }
    else {
      if (local_30 == 1) {
        if (bVar1) {
          local_5c[0] = (int *)0x400;
        }
        else {
          ppiVar3 = local_5c;
          piVar6 = local_14 + 0x10;
          iVar5 = 8;
          do {
            piVar4 = (int *)*piVar6;
            piVar6 = piVar6 + 1;
            *ppiVar3 = piVar4;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
            uVar7 = 0;
          } while (iVar5 != 0);
        }
        piVar4 = &local_38;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 1;
        piVar6 = local_2c;
        piVar10 = local_1c;
        goto LAB_63816f67;
      }
      if (local_30 == 2) {
        if (local_20 == (int *)0x0) {
          ppiVar3 = local_5c;
          piVar6 = local_10 + 0x10;
          iVar5 = 8;
          do {
            piVar4 = (int *)*piVar6;
            piVar6 = piVar6 + 1;
            *ppiVar3 = piVar4;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
            uVar7 = 0;
          } while (iVar5 != 0);
        }
        else {
          local_5c[0] = (int *)0x400;
        }
        piVar4 = &local_24;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 2;
        piVar6 = local_28;
        piVar10 = local_18;
        goto LAB_63816f67;
      }
    }
    if (local_30 == 0) {
      if (local_20 == (int *)0x0) {
LAB_63817049:
        if (bVar1) {
          local_5c[0] = (int *)local_10[0x18];
          piVar6 = local_5c[0];
        }
        else {
          local_5c[0] = (int *)((local_10[0x18] + local_14[0x18]) / 2);
          piVar6 = local_14;
        }
      }
      else if (bVar1) {
        local_5c[0] = (int *)0x400;
      }
      else {
        if (local_20 == (int *)0x0) goto LAB_63817049;
        local_5c[0] = (int *)local_14[0x18];
        piVar6 = local_14;
      }
      piVar4 = &local_34;
      uVar2 = CONCAT31((int3)((uint)piVar6 >> 8),(char)param_1[0x1b]);
      iVar5 = 0;
      piVar6 = local_3c;
      piVar10 = local_c;
LAB_63817092:
      FUN_63816740(this,(int)piVar6,(int)piVar10,(int)param_2,0x140,(int *)local_5c,1,iVar5,uVar2,
                   piVar4);
      uVar7 = extraout_EDX_04;
    }
    else {
      if (local_30 == 1) {
        if (bVar1) {
          local_5c[0] = (int *)0x400;
        }
        else {
          ppiVar3 = local_5c;
          piVar6 = local_14 + 0x18;
          iVar5 = 8;
          do {
            piVar4 = (int *)*piVar6;
            piVar6 = piVar6 + 1;
            *ppiVar3 = piVar4;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
            uVar7 = 0;
          } while (iVar5 != 0);
        }
        piVar4 = &local_38;
        uVar2 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[0x1b]);
        iVar5 = 1;
        piVar6 = local_2c;
        piVar10 = local_1c;
        goto LAB_63817092;
      }
      if (local_30 == 2) {
        if (local_20 == (int *)0x0) {
          ppiVar3 = local_5c;
          piVar6 = local_10 + 0x18;
          iVar5 = 8;
          do {
            piVar4 = (int *)*piVar6;
            piVar6 = piVar6 + 1;
            *ppiVar3 = piVar4;
            ppiVar3 = ppiVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        else {
          local_5c[0] = (int *)0x400;
          piVar6 = local_20;
        }
        piVar4 = &local_24;
        uVar2 = CONCAT31((int3)((uint)piVar6 >> 8),(char)param_1[0x1b]);
        iVar5 = 2;
        piVar6 = local_28;
        piVar10 = local_18;
        goto LAB_63817092;
      }
    }
    local_30 = local_30 + 1;
  } while (local_30 < 3);
  if (local_38 < local_34) {
LAB_638170c7:
    if (local_38 < local_24) {
      *param_3 = 1;
      goto LAB_638170e0;
    }
  }
  else {
    if (local_34 <= local_24) {
      *param_3 = 0;
      goto LAB_638170e0;
    }
    if (local_38 < local_34) goto LAB_638170c7;
  }
  *param_3 = 2;
LAB_638170e0:
  iVar5 = *param_3;
  if (((iVar5 != 0) && (local_c = local_1c, local_3c = local_2c, iVar5 != 1)) &&
     (local_c = param_1, local_3c = param_1, iVar5 == 2)) {
    local_c = local_18;
    local_3c = local_28;
  }
  for (iVar5 = 0x180; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *local_3c;
    local_3c = local_3c + 1;
    param_2 = param_2 + 1;
  }
  local_10 = local_10 + 0x10;
  iVar5 = 8;
  piVar6 = local_c + 0xc0;
  do {
    local_10[-0x10] = piVar6[-0x80];
    local_10[-8] = *piVar6;
    *local_10 = piVar6[0x40];
    local_10[8] = piVar6[0x80];
    local_10 = local_10 + 1;
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 8;
  } while (iVar5 != 0);
  local_14 = local_14 + 0x10;
  iVar5 = 8;
  piVar6 = local_c + 0xc0;
  do {
    local_14[-0x10] = piVar6[-0x40];
    local_14[-8] = *piVar6;
    *local_14 = piVar6[0x40];
    local_14[8] = piVar6[0x80];
    local_14 = local_14 + 1;
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar5 != 0);
  return;
}


