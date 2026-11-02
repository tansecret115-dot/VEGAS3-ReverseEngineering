/* Module: erv23260.dll
   Function: FUN_63806830
   Address: 63806830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_63806830(int param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x80) * 0x77c;
  local_24 = *(uint *)(iVar2 + -0x6f4 + param_1);
  local_28 = *(uint *)(iVar2 + -0x6f0 + param_1);
  puVar6 = (undefined4 *)(param_1 + 0x8a0);
  local_20 = 1;
  do {
    piVar11 = (int *)*puVar6;
    if (piVar11 != (int *)0x0) {
      FUN_63809540(piVar11);
      FUN_637f2010(piVar11);
      *puVar6 = 0;
    }
    puVar6 = puVar6 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  piVar11 = (int *)0x0;
  local_20 = 0;
  pvVar3 = (void *)FUN_637f2000(0x10);
  if (pvVar3 != (void *)0x0) {
    piVar11 = FUN_638094b0(pvVar3,&local_8);
  }
  local_1c = (undefined4 *)(param_1 + 0x8a0);
  *local_1c = piVar11;
  if (piVar11 == (int *)0x0) {
    local_8 = 2;
  }
  else if (local_8 == 0) {
    local_10 = *(int *)(param_1 + 0x80) + -1;
    local_14 = 0;
    if (-1 < local_10) {
      puVar6 = (undefined4 *)(local_10 * 0x77c + 0x650 + param_1);
      do {
        local_18 = 0;
        local_2c = puVar6 + -0x173;
        *puVar6 = *local_1c;
        pvVar3 = (void *)FUN_637f2000(0x14);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_63809740(pvVar3,*puVar6,*local_2c,&local_8);
        }
        puVar6[1] = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_63806ec5;
        if (local_8 != 0) {
LAB_63806be2:
          if (puVar4 != (undefined4 *)0x0) {
            FUN_63809810((int)puVar4);
            FUN_637f2010(puVar4);
          }
          puVar6[1] = 0;
          goto LAB_63806c03;
        }
        pvVar3 = (void *)FUN_637f2000(0x14);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_63809740(pvVar3,*puVar6,*local_2c,&local_8);
        }
        puVar6[2] = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_63806ec5;
        if (local_8 != 0) {
LAB_63806c19:
          if (puVar4 != (undefined4 *)0x0) {
            FUN_63809810((int)puVar4);
            FUN_637f2010(puVar4);
          }
          puVar6[2] = 0;
          goto LAB_63806c03;
        }
        local_8 = FUN_63808f30(local_2c);
        if (local_8 != 0) goto LAB_63806c07;
        puVar6[0x40] = 0;
        if ((uint)puVar6[-0x172] < local_24) {
          puVar6[0x40] = 1;
        }
        if ((uint)puVar6[-0x171] < local_28) {
          puVar6[0x40] = puVar6[0x40] | 2;
        }
        iVar2 = local_14 + 1;
        local_14 = iVar2;
        if (puVar6[0x40] != 0) {
          iVar10 = *local_2c + 1;
          local_14 = 0;
          iVar2 = *local_2c + -1 + iVar2;
          if (0 < *(int *)(param_1 + 0x7c)) {
            do {
              bVar1 = false;
              if (iVar10 <= iVar2) {
                piVar11 = (int *)(param_1 + 0x144 + (iVar10 * 0x1df + local_14) * 4);
                iVar5 = (iVar2 - iVar10) + 1;
                do {
                  if (*piVar11 == 3) {
                    bVar1 = true;
                  }
                  piVar11 = piVar11 + 0x1df;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              if (bVar1) {
                local_18 = local_18 + 1;
              }
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(param_1 + 0x7c));
          }
          local_8 = FUN_63809670((void *)*local_1c,puVar6[0x6d],puVar6[0x6e],local_18 + 1,
                                 *(undefined4 *)(param_1 + 0x8bc));
          if (local_8 != 0) goto LAB_63806c07;
          local_24 = puVar6[-0x172];
          local_28 = puVar6[-0x171];
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_14 = 1;
          pvVar3 = (void *)FUN_637f2000(0x10);
          if (pvVar3 == (void *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = FUN_638094b0(pvVar3,&local_8);
          }
          *local_1c = piVar11;
          if (piVar11 == (int *)0x0) goto LAB_63806ec5;
          if (local_8 != 0) {
            if (piVar11 != (int *)0x0) {
              FUN_63809540(piVar11);
              FUN_637f2010(piVar11);
            }
            *(undefined4 *)(param_1 + 0x8a0 + local_20 * 4) = 0;
            goto LAB_63806c03;
          }
          *puVar6 = piVar11;
          pvVar3 = (void *)FUN_637f2000(0x14);
          if (pvVar3 == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_63809740(pvVar3,*puVar6,*local_2c,&local_8);
          }
          puVar6[1] = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_63806ec5;
          if (local_8 != 0) goto LAB_63806be2;
          pvVar3 = (void *)FUN_637f2000(0x14);
          if (pvVar3 == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_63809740(pvVar3,*puVar6,*local_2c,&local_8);
          }
          puVar6[2] = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_63806ec5;
          if (local_8 != 0) goto LAB_63806c19;
        }
        puVar6 = puVar6 + -0x1df;
        local_10 = local_10 + -1;
      } while (-1 < local_10);
    }
    iVar2 = local_14;
    local_18 = 0;
    iVar10 = *local_2c;
    local_14 = 0;
    iVar2 = iVar10 + -1 + iVar2;
    if (0 < *(int *)(param_1 + 0x7c)) {
      do {
        bVar1 = false;
        if (iVar10 <= iVar2) {
          piVar11 = (int *)(param_1 + 0x144 + (iVar10 * 0x1df + local_14) * 4);
          iVar5 = (iVar2 - iVar10) + 1;
          do {
            if (*piVar11 == 3) {
              bVar1 = true;
            }
            piVar11 = piVar11 + 0x1df;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          local_18 = local_18 + 1;
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x7c));
    }
    local_8 = FUN_63809670(*(void **)(param_1 + 0x8a0 + local_20 * 4),local_2c[1],local_2c[2],
                           local_18 + 1,*(undefined4 *)(param_1 + 0x8bc));
    if (local_8 != 0) goto LAB_63806c07;
    if (0 < *(int *)(param_1 + 0x80)) {
      piVar11 = (int *)(param_1 + 0x140);
      local_10 = 0;
      do {
        if (((*piVar11 == 3) || (*piVar11 == 7)) &&
           (iVar2 = piVar11[-0x20] * 0x77c + 0x84 + param_1,
           *(int *)(piVar11[-0x20] * 0x77c + 0x64c + param_1) == 0)) {
          pvVar3 = (void *)FUN_637f2000(0x24);
          if (pvVar3 == (void *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = FUN_63809340(pvVar3,0,piVar11[-0x2e],piVar11[-0x2d],
                                  *(undefined4 *)(param_1 + 0x8bc),&local_8);
          }
          *(undefined4 **)(iVar2 + 0x5c8) = puVar6;
          if (puVar6 == (undefined4 *)0x0) goto LAB_63806ec5;
          if (local_8 != 0) {
            if (puVar6 != (undefined4 *)0x0) {
              FUN_63809470(puVar6);
              FUN_637f2010(puVar6);
            }
            *(undefined4 *)(iVar2 + 0x5c8) = 0;
            goto LAB_63806c03;
          }
        }
        local_10 = local_10 + 1;
        piVar11 = piVar11 + 0x1df;
      } while (local_10 < *(int *)(param_1 + 0x80));
    }
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    local_10 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      piVar11 = (int *)(param_1 + 0x764);
      do {
        if (*(int *)(piVar11[-0x48] + 0x808) == 0) {
          pvVar3 = (void *)FUN_637f2000(0xcc);
          if (pvVar3 == (void *)0x0) goto LAB_63806e53;
          piVar13 = &local_8;
          iVar2 = *piVar11;
          iVar10 = ((int *)piVar11[-0x48])[0x22b];
          iVar7 = 0;
          iVar5 = piVar11[-1];
          uVar8 = (**(code **)(*(int *)piVar11[-0x48] + 0x5c))(piVar11[-0x1b7],piVar11[-0x1b6]);
          puVar6 = FUN_637fa300(pvVar3,*(undefined4 *)(param_1 + 8),uVar8,iVar5,iVar2,iVar10,iVar7,
                                piVar13);
        }
        else {
          pvVar3 = (void *)FUN_637f2000(0xcc);
          if (pvVar3 == (void *)0x0) {
LAB_63806e53:
            puVar6 = (undefined4 *)0x0;
          }
          else {
            piVar13 = &local_8;
            iVar2 = *piVar11;
            iVar10 = ((int *)piVar11[-0x48])[0x22b];
            iVar12 = 0;
            iVar5 = piVar11[-1];
            iVar7 = (**(code **)(*(int *)piVar11[-0x48] + 0x5c))(piVar11[-0x1b7],piVar11[-0x1b6]);
            puVar6 = FUN_637fa190(pvVar3,*(undefined4 *)(param_1 + 8),piVar11[-0x198],iVar7,iVar5,
                                  iVar2,iVar10,iVar12,piVar13);
          }
        }
        piVar11[-7] = (int)puVar6;
        if (puVar6 == (undefined4 *)0x0) goto LAB_63806ec5;
        if (local_8 != 0) {
          if ((undefined4 *)piVar11[-7] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)piVar11[-7])(1);
          }
          piVar11[-7] = 0;
          goto LAB_63806c03;
        }
        local_10 = local_10 + 1;
        piVar11 = piVar11 + 0x1df;
      } while (local_10 < *(int *)(param_1 + 0x80));
    }
    uVar9 = *(int *)(param_1 + 0x760) * *(int *)(param_1 + 0x764);
    *(uint *)(param_1 + 0x8c8) = uVar9;
    puVar6 = FUN_637f1030(uVar9,1);
    *(undefined4 **)(param_1 + 0x8c0) = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
LAB_63806ec5:
      local_8 = 2;
    }
  }
  else {
    if (piVar11 != (int *)0x0) {
      FUN_63809540(piVar11);
      FUN_637f2010(piVar11);
    }
    *local_1c = 0;
  }
LAB_63806c03:
  if (local_8 == 0) {
    return 0;
  }
LAB_63806c07:
  FUN_63806690(param_1);
  return local_8;
}


