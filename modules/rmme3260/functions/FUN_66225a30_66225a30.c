/* Module: rmme3260.dll
   Function: FUN_66225a30
   Address: 66225a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66225a30(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  pvVar5 = (void *)0x0;
  if (*(int *)((int)this + 0x13e) == 0) {
    if (*(short *)((int)this + 0x38) == 0) {
      local_8 = 0x40042;
    }
    else {
      local_8 = FUN_66228c30((int)this);
      if (local_8 == 0) {
        if (*(int *)((int)this + 0x1a) < (int)(uint)*(ushort *)((int)this + 0x14)) {
          local_8 = -0x7fffbffb;
        }
        else if (*(int *)((int)this + 0x40) < (int)(uint)*(ushort *)((int)this + 0x38)) {
          local_8 = -0x7fffbffb;
        }
        else if (*(int **)((int)this + 0x142) == (int *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        else {
          local_8 = (**(code **)(**(int **)((int)this + 0x142) + 0x10))(param_1,0x8302,0);
          if (-1 < local_8) {
            uVar2 = (**(code **)(*(int *)((int)this + 0xc0) + 0xc))();
            pvVar5 = operator_new(uVar2);
            if (pvVar5 == (void *)0x0) {
              local_8 = -0x7ff8fff2;
            }
            else {
              (**(code **)(*(int *)((int)this + 0xc0) + 0x18))(pvVar5,uVar2);
              uVar3 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar5,uVar2);
              if (uVar3 == uVar2) {
                operator_delete(pvVar5);
                uVar4 = (**(code **)(**(int **)((int)this + 0x142) + 0x24))();
                (**(code **)(*(int *)((int)this + 0xda) + 0x14))(uVar4);
                uVar2 = (**(code **)(*(int *)((int)this + 0xda) + 0xc))();
                pvVar5 = operator_new(uVar2);
                if (pvVar5 == (void *)0x0) {
                  local_8 = -0x7ff8fff2;
                }
                else {
                  (**(code **)(*(int *)((int)this + 0xda) + 0x18))(pvVar5,uVar2);
                  uVar3 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar5,uVar2);
                  if (uVar3 == uVar2) {
                    operator_delete(pvVar5);
                    local_c = 0;
                    if (*(short *)((int)this + 0x14) != 0) {
                      do {
                        uVar4 = (**(code **)(**(int **)((int)this + 0x142) + 0x24))();
                        piVar1 = *(int **)(*(int *)((int)this + 0x16) + local_c * 4);
                        if (piVar1 == (int *)0x0) goto LAB_66225dd4;
                        (**(code **)(*piVar1 + 0x14))(uVar4);
                        uVar2 = (**(code **)(*piVar1 + 0xc))();
                        pvVar5 = operator_new(uVar2);
                        if (pvVar5 == (void *)0x0) goto LAB_66225d5d;
                        (**(code **)(*piVar1 + 0x18))(pvVar5,uVar2);
                        if (*(int *)((int)this + 0x178) == 0) {
                          uVar3 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar5,uVar2);
                          if (uVar3 != uVar2) goto LAB_66225d88;
                        }
                        else {
                          local_8 = FUN_66225de0(this,(int)pvVar5,uVar2);
                          if (local_8 != 0) goto LAB_66225dad;
                        }
                        operator_delete(pvVar5);
                        local_c = local_c + 1;
                      } while (local_c < (int)(uint)*(ushort *)((int)this + 0x14));
                    }
                    local_c = 0;
                    if (*(short *)((int)this + 0x38) != 0) {
                      do {
                        uVar4 = (**(code **)(**(int **)((int)this + 0x142) + 0x24))();
                        piVar1 = *(int **)(*(int *)((int)this + 0x3c) + local_c * 4);
                        if (piVar1 == (int *)0x0) goto LAB_66225dd4;
                        FUN_66218020(piVar1,0);
                        (**(code **)(*piVar1 + 0x14))(uVar4);
                        uVar2 = (**(code **)(*piVar1 + 0xc))();
                        pvVar5 = operator_new(uVar2);
                        if (pvVar5 == (void *)0x0) goto LAB_66225d5d;
                        (**(code **)(*piVar1 + 0x18))(pvVar5,uVar2);
                        if (*(int *)((int)this + 0x178) == 0) {
                          uVar3 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar5,uVar2);
                          if (uVar3 != uVar2) goto LAB_66225d88;
                        }
                        else {
                          local_8 = FUN_66225de0(this,(int)pvVar5,uVar2);
                          if (local_8 != 0) goto LAB_66225dad;
                        }
                        operator_delete(pvVar5);
                        local_c = local_c + 1;
                      } while (local_c < (int)(uint)*(ushort *)((int)this + 0x38));
                    }
                    uVar2 = (**(code **)(*(int *)((int)this + 0x114) + 0xc))();
                    pvVar5 = operator_new(uVar2);
                    if (pvVar5 == (void *)0x0) {
LAB_66225d5d:
                      local_8 = -0x7ff8fff2;
                    }
                    else {
                      (**(code **)(*(int *)((int)this + 0x114) + 0x18))(pvVar5,uVar2);
                      uVar3 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar5,uVar2);
                      if (uVar3 == uVar2) {
                        operator_delete(pvVar5);
                        pvVar5 = (void *)0x0;
                        *(undefined4 *)((int)this + 0x13e) = 1;
                      }
                      else {
LAB_66225d88:
                        local_8 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
                      }
                    }
                  }
                  else {
                    local_8 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
                  }
                }
              }
              else {
                local_8 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
              }
            }
          }
        }
      }
    }
  }
  else {
    local_8 = -0x7ffbff7a;
  }
LAB_66225dad:
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (local_8 < 0) {
    *(undefined4 *)((int)this + 0x13e) = 0;
  }
  return;
LAB_66225dd4:
  pvVar5 = (void *)0x0;
  local_8 = -0x7fffbffb;
  goto LAB_66225dad;
}


