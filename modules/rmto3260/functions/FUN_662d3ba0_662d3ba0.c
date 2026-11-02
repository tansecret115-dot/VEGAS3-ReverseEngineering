/* Module: rmto3260.dll
   Function: FUN_662d3ba0
   Address: 662d3ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d3ba0(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_1c;
  int local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  ushort local_6;
  
  iVar11 = param_1;
  piVar3 = *(int **)(param_1 + 0x38);
  piVar1 = (int *)(param_1 + 0x38);
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
  }
  iVar5 = RMACreateRMFF2Reader(&local_c);
  if (-1 < iVar5) {
    iVar5 = (**(code **)*local_c)(local_c,&DAT_663069c8,piVar1);
    if (-1 < iVar5) {
      iVar5 = (**(code **)*local_c)(local_c,&DAT_66306a68,&local_10);
      if (iVar5 == -0x7fffbffe) {
        iVar5 = 0;
        local_10 = (int *)0x0;
      }
    }
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,*(undefined4 *)(iVar11 + 0x14));
    if (-1 < iVar5) {
      if (local_10 != (int *)0x0) {
        if (*(int *)(iVar11 + 0x5e) == 0) {
          *(undefined4 *)(iVar11 + 0x5e) = 0;
        }
        iVar5 = (**(code **)(*local_10 + 0xc))(local_10,(undefined4 *)(iVar11 + 0x5e));
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
          local_10 = (int *)0x0;
        }
      }
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&local_18);
      }
    }
  }
  if (local_18 != 2) {
    piVar3 = (int *)*piVar1;
    iVar5 = -0x7ffbfffb;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar1 = 0;
    }
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*(int *)*piVar1 + 0x5c))((int *)*piVar1,iVar11 + 0x56);
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*(int *)*piVar1 + 0x68))((int *)*piVar1,iVar11 + 0x62);
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*(int *)*piVar1 + 0x4c))((int *)*piVar1,&local_6);
        if (-1 < iVar5) {
          iVar11 = 0;
          local_14 = (uint *)0x0;
          if (local_6 != 0) {
            do {
              if (iVar5 < 0) break;
              if (local_14 != (uint *)0x0) goto LAB_662d3d38;
              iVar5 = (**(code **)(*(int *)*piVar1 + 0x50))((int *)*piVar1,iVar11,&local_1c);
              if ((-1 < iVar5) && (*(int *)((int)local_1c + 0x12) != 0)) {
                local_14 = (uint *)0x1;
                *(short *)(param_1 + 0x58) = (short)iVar11;
              }
              iVar11 = iVar11 + 1;
            } while ((ushort)iVar11 < local_6);
          }
          if (local_14 == (uint *)0x0) {
            iVar5 = -0x7ffbff7f;
          }
LAB_662d3d38:
          iVar11 = param_1;
          if (-1 < iVar5) {
            iVar5 = (**(code **)(*(int *)*piVar1 + 0x60))((int *)*piVar1,&param_1);
            if ((-1 < iVar5) &&
               (*(undefined4 *)(iVar11 + 0x4c) = *(undefined4 *)(param_1 + 0x1e), -1 < iVar5)) {
              if (*(void **)(iVar11 + 0x2c) != (void *)0x0) {
                operator_delete(*(void **)(iVar11 + 0x2c));
                *(undefined4 *)(iVar11 + 0x2c) = 0;
                *(undefined4 *)(iVar11 + 0x30) = 0;
              }
              puVar9 = (uint *)(iVar11 + 0x30);
              local_14 = puVar9;
              iVar5 = (**(code **)(*(int *)*piVar1 + 100))((int *)*piVar1,&local_1c,puVar9);
              if (-1 < iVar5) {
                param_1 = iVar5;
                pvVar6 = operator_new(*puVar9);
                *(void **)(iVar11 + 0x2c) = pvVar6;
                if (pvVar6 == (void *)0x0) {
                  iVar5 = -0x7ff8fff2;
                  param_1 = -0x7ff8fff2;
                }
                if (-1 < iVar5) {
                  puVar4 = *(undefined1 **)(iVar11 + 0x2c);
                  *puVar4 = (char)((uint)*local_1c >> 0x18);
                  puVar4[1] = (char)((uint)*local_1c >> 0x10);
                  puVar4[2] = (char)((uint)*local_1c >> 8);
                  puVar4[3] = *(undefined1 *)local_1c;
                  puVar4[4] = (char)((uint)local_1c[1] >> 0x18);
                  puVar4[5] = (char)((uint)local_1c[1] >> 0x10);
                  puVar4[6] = (char)((uint)local_1c[1] >> 8);
                  puVar4[7] = *(undefined1 *)(local_1c + 1);
                  puVar4[8] = *(undefined1 *)((int)local_1c + 9);
                  puVar4[9] = *(undefined1 *)(local_1c + 2);
                  puVar7 = puVar4 + 10;
                  if (*(short *)(local_1c + 2) == 0) {
                    puVar4[10] = *(undefined1 *)((int)local_1c + 0xb);
                    puVar4[0xb] = *(undefined1 *)((int)local_1c + 10);
                    uVar2 = *(ushort *)((int)local_1c + 10);
                    puVar10 = (undefined4 *)local_1c[3];
                    puVar12 = (undefined4 *)(puVar4 + 0xc);
                    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar7 = (undefined1 *)
                             ((int)(puVar4 + 0xc) + (uint)*(ushort *)((int)local_1c + 10));
                    *puVar7 = *(undefined1 *)((int)local_1c + 0x11);
                    puVar7[1] = *(undefined1 *)(local_1c + 4);
                    uVar2 = *(ushort *)(local_1c + 4);
                    puVar10 = *(undefined4 **)((int)local_1c + 0x12);
                    puVar12 = (undefined4 *)(puVar7 + 2);
                    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar7 = (undefined1 *)((int)(puVar7 + 2) + (uint)*(ushort *)(local_1c + 4));
                    *puVar7 = *(undefined1 *)((int)local_1c + 0x17);
                    puVar7[1] = *(undefined1 *)((int)local_1c + 0x16);
                    uVar2 = *(ushort *)((int)local_1c + 0x16);
                    puVar10 = (undefined4 *)local_1c[6];
                    puVar12 = (undefined4 *)(puVar7 + 2);
                    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar7 = (undefined1 *)
                             ((int)(puVar7 + 2) + (uint)*(ushort *)((int)local_1c + 0x16));
                    *puVar7 = *(undefined1 *)((int)local_1c + 0x1d);
                    puVar7[1] = *(undefined1 *)(local_1c + 7);
                    uVar2 = *(ushort *)(local_1c + 7);
                    puVar10 = *(undefined4 **)((int)local_1c + 0x1e);
                    puVar12 = (undefined4 *)(puVar7 + 2);
                    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar7 = (undefined1 *)((int)(puVar7 + 2) + (uint)*(ushort *)(local_1c + 7));
                    puVar9 = local_14;
                    iVar5 = param_1;
                  }
                  *puVar9 = (int)puVar7 - (int)puVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}


