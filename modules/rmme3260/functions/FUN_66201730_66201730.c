/* Module: rmme3260.dll
   Function: FUN_66201730
   Address: 66201730
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_66201730(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  char *pcVar15;
  char *pcVar16;
  int *piVar17;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  void *local_3c;
  byte *local_38;
  int *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_1c = 0;
  local_8 = this;
  local_30 = operator_new((int)param_2 * 4);
  local_28 = operator_new((int)param_2 * 4);
  local_38 = (byte *)0x0;
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_3c = *(void **)(*(int *)(*(int *)((int)this + 4) + 0xa4) + 0x14);
  local_14 = (int *)0x0;
  local_24 = (int *)0x0;
  local_48 = (int *)0x0;
  if (*(int *)this != 0) {
    return *(int *)this;
  }
  local_20 = 0;
  if (0 < (int)param_2) {
    local_2c = local_30;
    puVar5 = param_1;
    param_1 = local_28;
    do {
      pcVar2 = strrchr((char *)*puVar5,0x2e);
      if (pcVar2 == (char *)0x0) {
        *local_8 = -0x7fffbffb;
        piVar4 = local_14;
        goto LAB_66201cfd;
      }
      iVar3 = _stricmp(pcVar2,&DAT_6626f0c0);
      if (iVar3 == 0) {
        piVar4 = FUN_662090e0((char *)*puVar5);
        if (piVar4 == (int *)0x0) {
          *local_8 = -0x7fffbffb;
          piVar4 = local_14;
          goto LAB_66201cfd;
        }
        (**(code **)*piVar4)(1);
        uVar10 = 0xffffffff;
        pcVar2 = (char *)*puVar5;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = operator_new(~uVar10);
        *param_1 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          *local_8 = -0x7ff8fff2;
          piVar4 = local_14;
          goto LAB_66201cfd;
        }
        uVar10 = 0xffffffff;
        pcVar15 = (char *)*puVar5;
        do {
          pcVar16 = pcVar15;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar16 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar15 = pcVar16 + -uVar10;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar2 = pcVar2 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar2 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar2 = pcVar2 + 1;
        }
        local_c = local_c + 1;
        param_1 = param_1 + 1;
      }
      else {
        uVar10 = 0xffffffff;
        pcVar2 = (char *)*puVar5;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = operator_new(~uVar10);
        *local_2c = pcVar2;
        if (pcVar2 == (char *)0x0) {
          *local_8 = -0x7ff8fff2;
          piVar4 = local_14;
          goto LAB_66201cfd;
        }
        uVar10 = 0xffffffff;
        pcVar15 = (char *)*puVar5;
        do {
          pcVar16 = pcVar15;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar16 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar15 = pcVar16 + -uVar10;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar2 = pcVar2 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar2 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar2 = pcVar2 + 1;
        }
        local_1c = local_1c + 1;
        local_2c = local_2c + 1;
      }
      local_20 = local_20 + 1;
      puVar5 = puVar5 + 1;
      this = local_8;
    } while (local_20 < (int)param_2);
  }
  local_20 = 0;
  piVar4 = local_14;
  if (0 < local_1c) {
    piVar8 = (int *)((int)this + 0x14);
    param_2 = local_30;
    local_2c = local_28 + local_c;
LAB_662018e0:
    piVar13 = local_8;
    iVar3 = (**(code **)(*(int *)local_8[4] + 0x14))((int *)local_8[4],piVar8);
    if ((iVar3 != 0) ||
       (iVar3 = (*(code *)**(undefined4 **)*piVar8)((undefined4 *)*piVar8,&DAT_6626a998,&local_34),
       iVar3 != 0)) goto LAB_66201c21;
    puVar5 = operator_new(0x20);
    if (puVar5 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_662643f0(puVar5);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6,*param_2);
    iVar3 = (**(code **)(*local_34 + 0xc))(local_34,piVar6);
    *piVar13 = iVar3;
    (**(code **)(*local_34 + 8))(local_34);
    if (*piVar13 != 0) goto LAB_66201cfd;
    pcVar2 = strrchr((char *)*param_2,0x2e);
    if (pcVar2 == (char *)0x0) {
LAB_66201c05:
      *local_8 = -0x7fffbffb;
      goto LAB_66201cfd;
    }
    iVar3 = -1;
    pcVar15 = pcVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -3) goto LAB_66201cf4;
    iVar3 = FUN_66261a50(local_3c,pcVar2 + 1,&local_38);
    if (iVar3 == 0) {
      piVar6 = local_8 + 3;
      iVar3 = FUN_66261990(local_3c,local_38,pcVar2 + 1,piVar6);
      if (iVar3 != 0) goto LAB_66201c05;
      FUN_66263580((void *)*piVar6,&local_18);
      iVar3 = (**(code **)*local_18)(local_18,&DAT_6626aa88,&local_10);
      if (iVar3 != 0) goto LAB_66201cf4;
      iVar3 = (**(code **)*local_10)(local_10,&DAT_6626ab08,&local_4c);
      piVar13 = local_8;
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*local_4c + 0x10))(local_4c,local_8[1]);
        if (iVar3 == 0) {
          puVar7 = operator_new(0x100);
          puVar5 = local_2c;
          *local_2c = puVar7;
          if (puVar7 == (undefined4 *)0x0) {
            *local_8 = -0x7ff8fff2;
            goto LAB_66201cfd;
          }
          for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          sprintf((char *)*local_2c,s_RMTEMP_d_6626f0b4,local_c);
          piVar4 = FUN_66209140((char *)*puVar5);
          piVar13 = local_8;
          piVar17 = (int *)0x0;
          local_14 = piVar4;
          if (piVar4 == (int *)0x0) goto LAB_66201cd9;
          iVar12 = 0x10;
          iVar3 = local_8[1];
          puVar5 = (undefined4 *)(iVar3 + 100);
          do {
            puVar5[-0x11] = 0;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          *(int **)(iVar3 + 0x1c) = piVar4;
          iVar3 = (*(code *)**(undefined4 **)*piVar8)((undefined4 *)*piVar8,&DAT_6626a898,&local_40)
          ;
          if (iVar3 == 0) {
            puVar5 = operator_new(0x20);
            if (puVar5 != (undefined4 *)0x0) {
              piVar17 = (int *)FUN_662643f0(puVar5);
            }
            (**(code **)(*piVar17 + 0x1c))(piVar17,*param_2);
            iVar3 = (**(code **)(*local_10 + 0x10))(local_10,piVar17,piVar13[1],local_40);
            *piVar13 = iVar3;
            (**(code **)(*local_40 + 8))(local_40);
            if (*piVar13 == 0) {
              iVar3 = (**(code **)(*local_10 + 0x14))(local_10);
              piVar13 = local_8;
              if (iVar3 == 0) {
                iVar3 = 0;
                local_44 = *(int *)(local_8[1] + 0x60);
                if (0 < local_44) {
                  do {
                    iVar12 = (**(code **)(*local_10 + 0x18))(local_10,iVar3);
                    if (iVar12 != 0) {
                      *piVar13 = -0x7fffbffb;
                      goto LAB_66201cfd;
                    }
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < local_44);
                }
                (**(code **)(*piVar4 + 0x20))();
                do {
                  piVar17 = local_8;
                  iVar3 = local_44;
                  iVar12 = 0;
                  bVar14 = true;
                  uVar10 = (uint)*(ushort *)(piVar13[1] + 0x60);
                  if (uVar10 != 0) {
                    piVar13 = (int *)(piVar13[1] + 100);
                    do {
                      if (*piVar13 == 0) {
                        bVar14 = false;
                        break;
                      }
                      iVar12 = iVar12 + 1;
                      piVar13 = piVar13 + 1;
                    } while (iVar12 < (int)uVar10);
                  }
                  if (bVar14) goto LAB_66201b8e;
                  uVar10 = 0;
                  if (0 < local_44) {
                    do {
                      if (*(int *)(piVar17[1] + 0x20 + (uVar10 & 0xffff) * 4) == 0) {
                        (**(code **)(*local_10 + 0x1c))(local_10,uVar10);
                      }
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < iVar3);
                  }
                  FUN_662013e0(piVar17[1]);
                  piVar4 = local_14;
                  piVar13 = local_8;
                } while( true );
              }
              goto LAB_66201c2c;
            }
            goto LAB_66201cfd;
          }
        }
LAB_66201c21:
        *piVar13 = -0x7fffbffb;
        goto LAB_66201cfd;
      }
    }
LAB_66201c2c:
    *local_8 = -0x7fffbffb;
    goto LAB_66201cfd;
  }
LAB_66201c45:
  if (param_4 == 0) {
    local_24 = FUN_662091d0();
  }
  else {
    local_24 = FUN_66209220();
  }
  if (local_24 == (int *)0x0) {
    *(int *)this = -0x7ff8fff2;
  }
  else {
    piVar8 = operator_new(local_c * 4);
    local_48 = piVar8;
    if (piVar8 == (int *)0x0) {
      *(int *)this = -0x7ff8fff2;
    }
    else {
      iVar3 = 0;
      if (0 < local_c) {
        iVar12 = (int)local_28 - (int)piVar8;
        do {
          piVar13 = FUN_662090e0(*(char **)(iVar12 + (int)piVar8));
          *piVar8 = (int)piVar13;
          if (piVar13 == (int *)0x0) {
            *local_8 = -0x7ffbff7e;
            goto LAB_66201cfd;
          }
          iVar9 = (**(code **)(*local_24 + 0x44))(piVar13);
          if (iVar9 != 0) goto LAB_66201cd9;
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar3 < local_c);
      }
      iVar3 = (**(code **)(*local_24 + 0x50))(param_3);
      if (iVar3 != 0) {
LAB_66201cf4:
        *local_8 = -0x7fffbffb;
      }
    }
  }
LAB_66201cfd:
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
    local_18 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)(1);
  }
  piVar4 = local_48;
  if (local_48 != (int *)0x0) {
    piVar8 = local_48;
    iVar3 = local_c;
    if (0 < local_c) {
      do {
        if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar8)(1);
        }
        iVar3 = iVar3 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar3 != 0);
    }
    operator_delete(piVar4);
  }
  if (local_24 != (int *)0x0) {
    (**(code **)*local_24)(1);
  }
  iVar3 = local_c - local_1c;
  if (-1 < iVar3) {
    puVar5 = local_28 + iVar3;
    do {
      if (local_c <= iVar3) break;
      remove((char *)*puVar5);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar3);
  }
  puVar5 = local_30;
  if (local_30 != (undefined4 *)0x0) {
    puVar7 = local_30;
    iVar3 = local_1c;
    if (0 < local_1c) {
      do {
        if ((void *)*puVar7 != (void *)0x0) {
          operator_delete((void *)*puVar7);
        }
        iVar3 = iVar3 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar3 != 0);
    }
    operator_delete(puVar5);
  }
  if (local_28 != (undefined4 *)0x0) {
    puVar5 = local_28;
    iVar3 = local_c;
    if (0 < local_c) {
      do {
        if ((void *)*puVar5 != (void *)0x0) {
          operator_delete((void *)*puVar5);
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete(local_28);
  }
  return *local_8;
LAB_66201b8e:
  (**(code **)(*piVar4 + 0x24))();
  (**(code **)(*(int *)*piVar8 + 8))((int *)*piVar8);
  *piVar8 = 0;
  (**(code **)(*local_18 + 8))(local_18);
  local_18 = (int *)0x0;
  (**(code **)(*local_10 + 8))(local_10);
  local_10 = (int *)0x0;
  FUN_66268160();
  *piVar6 = 0;
  (**(code **)*piVar4)(1);
  piVar4 = (int *)0x0;
  local_c = local_c + 1;
  local_2c = local_2c + 1;
  param_2 = param_2 + 1;
  local_20 = local_20 + 1;
  this = local_8;
  if (local_1c <= local_20) goto LAB_66201c45;
  goto LAB_662018e0;
LAB_66201cd9:
  *local_8 = -0x7ff8fff2;
  goto LAB_66201cfd;
}


