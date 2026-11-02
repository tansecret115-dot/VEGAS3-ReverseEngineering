/* Module: rmto3260.dll
   Function: FUN_662c8be0
   Address: 662c8be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c8be0(int *param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *local_18;
  uint *local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar3 = param_1;
  piVar11 = (int *)0x0;
  (**(code **)(*param_1 + 0x44))(param_1);
  if (piVar3[0x11] == 0) {
    piVar11 = (int *)0x80040007;
  }
  if (-1 < (int)piVar11) {
    puVar4 = operator_new(0x14);
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_662ed6f0(puVar4);
    }
    piVar3[0x12] = iVar5;
    if (iVar5 == 0) {
      piVar11 = (int *)0x8007000e;
    }
    if (-1 < (int)piVar11) {
      iVar5 = piVar3[0x11];
      if (iVar5 == 0) {
        local_c = 0;
      }
      else {
        local_c = *(undefined4 *)(iVar5 + 0x10);
      }
      local_14 = *(uint **)(iVar5 + 4);
      local_10 = 0;
      if ((ushort)local_c != 0) {
        do {
          if ((int)piVar11 < 0) {
            return (int)piVar11;
          }
          local_8 = (int *)0x0;
          param_1 = (int *)0x0;
          piVar6 = (int *)FUN_662ed930((int *)&local_14);
          iVar5 = *piVar6;
          if (iVar5 == 0) {
            piVar11 = (int *)0x80040081;
          }
          if ((-1 < (int)piVar11) &&
             (piVar11 = (int *)RMACreateRMFF2Reader(&param_1), -1 < (int)piVar11)) {
            piVar11 = (int *)(**(code **)*param_1)(param_1,&DAT_663069d8,&local_8);
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
          if ((-1 < (int)piVar11) &&
             (piVar11 = (int *)(**(code **)(*local_8 + 0x10))(local_8,iVar5), -1 < (int)piVar11)) {
            piVar11 = (int *)(**(code **)(*local_8 + 0x24))(local_8,&local_18);
            if (*(undefined4 **)((int)piVar3 + 0x62) < local_18) {
              *(undefined4 **)((int)piVar3 + 0x62) = local_18;
            }
            if (-1 < (int)piVar11) {
              FUN_662ed8a0((void *)piVar3[0x12],local_8);
            }
          }
          local_10 = local_10 + 1;
        } while ((ushort)local_10 < (ushort)local_c);
      }
      if (-1 < (int)piVar11) {
        if (*(void **)((int)piVar3 + 0x5e) != (void *)0x0) {
          operator_delete(*(void **)((int)piVar3 + 0x5e));
          *(undefined4 *)((int)piVar3 + 0x5e) = 0;
        }
        pvVar7 = operator_new(*(uint *)((int)piVar3 + 0x62));
        *(void **)((int)piVar3 + 0x5e) = pvVar7;
        if (pvVar7 == (void *)0x0) {
          piVar11 = (int *)0x8007000e;
        }
        if (-1 < (int)piVar11) {
          puVar4 = FUN_662eda80((void *)piVar3[0x12],0);
          piVar6 = (int *)FUN_662ed950((int)puVar4);
          iVar5 = *piVar6;
          piVar3[0x10] = iVar5;
          if (iVar5 == 0) {
            piVar11 = (int *)0x80040081;
          }
          if (-1 < (int)piVar11) {
            if ((void *)piVar3[0x20] != (void *)0x0) {
              operator_delete((void *)piVar3[0x20]);
              piVar3[0x20] = 0;
              piVar3[0x21] = 0;
            }
            if (piVar3[0x1c] == 0) {
              puVar10 = (uint *)(piVar3 + 0x21);
              local_14 = puVar10;
              piVar11 = (int *)(**(code **)(*(int *)piVar3[0x10] + 100))
                                         ((int *)piVar3[0x10],&local_18,puVar10);
              if (-1 < (int)piVar11) {
                param_1 = piVar11;
                pvVar7 = operator_new(*puVar10);
                piVar3[0x20] = (int)pvVar7;
                if (pvVar7 == (void *)0x0) {
                  piVar11 = (int *)0x8007000e;
                  param_1 = (int *)0x8007000e;
                }
                if (-1 < (int)piVar11) {
                  puVar2 = (undefined1 *)piVar3[0x20];
                  *puVar2 = (char)((uint)*local_18 >> 0x18);
                  puVar2[1] = (char)((uint)*local_18 >> 0x10);
                  puVar2[2] = (char)((uint)*local_18 >> 8);
                  puVar2[3] = *(undefined1 *)local_18;
                  puVar2[4] = (char)((uint)local_18[1] >> 0x18);
                  puVar2[5] = (char)((uint)local_18[1] >> 0x10);
                  puVar2[6] = (char)((uint)local_18[1] >> 8);
                  puVar2[7] = *(undefined1 *)(local_18 + 1);
                  puVar2[8] = *(undefined1 *)((int)local_18 + 9);
                  puVar2[9] = *(undefined1 *)(local_18 + 2);
                  puVar9 = puVar2 + 10;
                  if (*(short *)(local_18 + 2) == 0) {
                    puVar2[10] = *(undefined1 *)((int)local_18 + 0xb);
                    puVar2[0xb] = *(undefined1 *)((int)local_18 + 10);
                    uVar1 = *(ushort *)((int)local_18 + 10);
                    puVar4 = (undefined4 *)local_18[3];
                    puVar12 = (undefined4 *)(puVar2 + 0xc);
                    for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar9 = (undefined1 *)
                             ((int)(puVar2 + 0xc) + (uint)*(ushort *)((int)local_18 + 10));
                    *puVar9 = *(undefined1 *)((int)local_18 + 0x11);
                    puVar9[1] = *(undefined1 *)(local_18 + 4);
                    uVar1 = *(ushort *)(local_18 + 4);
                    puVar4 = *(undefined4 **)((int)local_18 + 0x12);
                    puVar12 = (undefined4 *)(puVar9 + 2);
                    for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar9 = (undefined1 *)((int)(puVar9 + 2) + (uint)*(ushort *)(local_18 + 4));
                    *puVar9 = *(undefined1 *)((int)local_18 + 0x17);
                    puVar9[1] = *(undefined1 *)((int)local_18 + 0x16);
                    uVar1 = *(ushort *)((int)local_18 + 0x16);
                    puVar4 = (undefined4 *)local_18[6];
                    puVar12 = (undefined4 *)(puVar9 + 2);
                    for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar9 = (undefined1 *)
                             ((int)(puVar9 + 2) + (uint)*(ushort *)((int)local_18 + 0x16));
                    *puVar9 = *(undefined1 *)((int)local_18 + 0x1d);
                    puVar9[1] = *(undefined1 *)(local_18 + 7);
                    uVar1 = *(ushort *)(local_18 + 7);
                    puVar4 = *(undefined4 **)((int)local_18 + 0x1e);
                    puVar12 = (undefined4 *)(puVar9 + 2);
                    for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar12 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    puVar9 = (undefined1 *)((int)(puVar9 + 2) + (uint)*(ushort *)(local_18 + 7));
                    puVar10 = local_14;
                    piVar11 = param_1;
                  }
                  *puVar10 = (int)puVar9 - (int)puVar2;
                }
              }
            }
            else {
              uVar8 = (**(code **)(**(int **)((int)piVar3 + 0x66) + 0xc))();
              uVar8 = uVar8 & 0xffff;
              piVar3[0x21] = uVar8;
              if (uVar8 != 0) {
                pvVar7 = operator_new(uVar8);
                piVar3[0x20] = (int)pvVar7;
                if (pvVar7 == (void *)0x0) {
                  piVar11 = (int *)0x8007000e;
                }
              }
              if (-1 < (int)piVar11) {
                iVar5 = (**(code **)(**(int **)((int)piVar3 + 0x66) + 0x18))
                                  (piVar3[0x20],piVar3[0x21]);
                return iVar5;
              }
            }
          }
        }
      }
    }
  }
  return (int)piVar11;
}


