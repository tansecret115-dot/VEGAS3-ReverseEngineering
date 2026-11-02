/* Module: rmbe3260.dll
   Function: FUN_6602b200
   Address: 6602b200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6602b200(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *local_8;
  
  iVar3 = 0;
  local_8 = param_1;
  if (*(int *)((int)param_1 + 0x60) != 0) {
    iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 100),*(undefined4 *)((int)param_1 + 0x24),0,
                         *(undefined4 *)((int)param_1 + 0x28),*(undefined4 *)((int)param_1 + 0x2c),0
                         ,0,*(undefined4 *)((int)param_1 + 0x28),
                         *(undefined4 *)((int)param_1 + 0x2c));
  }
  if (-1 < iVar3) {
    if (*(int *)((int)param_1 + 0x68) != 0) {
      iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 0x6c),0,0x10,
                           *(undefined4 *)((int)param_1 + 0x28),*(undefined4 *)((int)param_1 + 0x2c)
                           ,*(undefined4 *)((int)param_1 + 0x30),
                           *(undefined4 *)((int)param_1 + 0x34),*(undefined4 *)((int)param_1 + 0x38)
                           ,*(undefined4 *)((int)param_1 + 0x3c));
    }
    if (-1 < iVar3) {
      if (*(int *)((int)param_1 + 0x70) != 0) {
        iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 0x74),
                             *(undefined4 *)((int)param_1 + 0x24),0x10,
                             *(undefined4 *)((int)param_1 + 0x28),
                             *(undefined4 *)((int)param_1 + 0x2c),0,0,
                             *(undefined4 *)((int)param_1 + 0x28),
                             *(undefined4 *)((int)param_1 + 0x2c));
      }
      if (-1 < iVar3) {
        if (*(int *)((int)param_1 + 0x78) != 0) {
          iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 0x7c),
                               *(undefined4 *)((int)param_1 + 0x24),0x10,
                               *(undefined4 *)((int)param_1 + 0x28),
                               *(undefined4 *)((int)param_1 + 0x2c),
                               *(undefined4 *)((int)param_1 + 0x30),
                               *(undefined4 *)((int)param_1 + 0x34),
                               *(undefined4 *)((int)param_1 + 0x38),
                               *(undefined4 *)((int)param_1 + 0x3c));
        }
        if (-1 < iVar3) {
          if (*(int *)((int)param_1 + 0x80) != 0) {
            iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 0x84),0x10,0x10,
                                 *(undefined4 *)((int)param_1 + 0x28),
                                 *(undefined4 *)((int)param_1 + 0x2c),
                                 *(undefined4 *)((int)param_1 + 0x30),
                                 *(undefined4 *)((int)param_1 + 0x34),
                                 *(undefined4 *)((int)param_1 + 0x38),
                                 *(undefined4 *)((int)param_1 + 0x3c));
          }
          if (-1 < iVar3) {
            if (*(int *)((int)param_1 + 0x88) != 0) {
              iVar3 = FUN_6602b0f0(param_1,(int *)((int)param_1 + 0x8c),0x10,0,
                                   *(undefined4 *)((int)param_1 + 0x28),
                                   *(undefined4 *)((int)param_1 + 0x2c),0,0,
                                   *(undefined4 *)((int)param_1 + 0x28),
                                   *(undefined4 *)((int)param_1 + 0x2c));
            }
            if (-1 < iVar3) {
              if (*(int *)((int)param_1 + 0x48) != 0) {
                piVar1 = *(int **)((int)param_1 + 100);
                local_8 = (void *)0x0;
                if (piVar1 != (int *)0x0) {
                  iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,&local_8);
                }
                if (iVar3 < 0) goto LAB_6602b464;
                if (0 < (int)local_8) {
                  iVar3 = FUN_6602b1c0((int *)((int)param_1 + 0x4c),(uint)local_8);
                }
              }
              if (-1 < iVar3) {
                if (*(int *)((int)param_1 + 0x50) != 0) {
                  piVar1 = *(int **)((int)param_1 + 0x7c);
                  pvVar4 = (void *)0x0;
                  if (piVar1 != (int *)0x0) {
                    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,&local_8);
                    if (iVar3 < 0) goto LAB_6602b464;
                    if (0 < (int)local_8) {
                      pvVar4 = local_8;
                    }
                  }
                  if (iVar3 < 0) goto LAB_6602b464;
                  piVar1 = *(int **)((int)param_1 + 0x84);
                  if (piVar1 != (int *)0x0) {
                    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,&local_8);
                    if (iVar3 < 0) goto LAB_6602b464;
                    if ((int)pvVar4 < (int)local_8) {
                      pvVar4 = local_8;
                    }
                  }
                  if (iVar3 < 0) goto LAB_6602b464;
                  piVar1 = *(int **)((int)param_1 + 0x6c);
                  if (piVar1 != (int *)0x0) {
                    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,&local_8);
                    if (iVar3 < 0) goto LAB_6602b464;
                    if ((int)pvVar4 < (int)local_8) {
                      pvVar4 = local_8;
                    }
                  }
                  if (iVar3 < 0) goto LAB_6602b464;
                  if (0 < (int)pvVar4) {
                    iVar3 = FUN_6602b1c0((int *)((int)param_1 + 0x54),(uint)pvVar4);
                  }
                }
                if ((-1 < iVar3) && (*(int *)((int)param_1 + 0x58) != 0)) {
                  piVar1 = *(int **)((int)param_1 + 0x74);
                  local_8 = (void *)0x0;
                  if (piVar1 != (int *)0x0) {
                    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,&local_8);
                  }
                  if ((-1 < iVar3) && (0 < (int)local_8)) {
                    iVar3 = FUN_6602b1c0((int *)((int)param_1 + 0x5c),(uint)local_8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_6602b464:
  iVar2 = *(int *)((int)param_1 + 0x38) * *(int *)((int)param_1 + 0x3c) * 0xc;
  *(int *)((int)param_1 + 0x44) = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  return iVar3;
}


