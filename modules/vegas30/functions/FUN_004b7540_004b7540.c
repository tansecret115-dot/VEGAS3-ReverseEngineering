/* Module: vegas30.exe
   Function: FUN_004b7540
   Address: 004b7540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004b7540(int param_1,double param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  float10 extraout_ST0;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        uVar5 = *(uint *)(param_1 + 0x10);
        uVar2 = ftol();
        if (uVar2 < uVar5) {
          *(undefined4 *)(param_1 + 0xc) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        else if (extraout_ST0 <= (float10)_DAT_00613688) {
          if (uVar5 < 0xb) {
            if (uVar5 < 6) {
              if (uVar5 < 3) {
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                *(uint *)(param_1 + 0x10) = uVar5;
              }
              else if ((float10)_DAT_006129a0 == extraout_ST0) {
                *(undefined4 *)(param_1 + 0x10) = 4;
              }
              else {
                *(undefined4 *)(param_1 + 0x10) = 5;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x10) = 10;
            }
          }
          else {
            uVar3 = ftol();
            *(undefined4 *)(param_1 + 0x10) = uVar3;
          }
        }
        else {
          uVar2 = ftol();
          if (uVar2 < uVar5) {
            uVar3 = ftol();
            *(undefined4 *)(param_1 + 0x10) = uVar3;
          }
          else {
            uVar2 = ftol();
            if (uVar2 < uVar5) {
              uVar3 = ftol();
              *(undefined4 *)(param_1 + 0x10) = uVar3;
            }
            else {
              uVar2 = ftol();
              if (uVar2 < uVar5) {
                uVar3 = ftol();
                *(undefined4 *)(param_1 + 0x10) = uVar3;
              }
              else {
                uVar2 = ftol();
                if (uVar2 < uVar5) {
                  uVar3 = ftol();
                  *(undefined4 *)(param_1 + 0x10) = uVar3;
                }
                else {
                  uVar2 = ftol();
                  if (uVar2 < uVar5) {
                    uVar3 = ftol();
                    *(undefined4 *)(param_1 + 0x10) = uVar3;
                  }
                  else {
                    uVar2 = ftol();
                    if (uVar2 < uVar5) {
                      uVar3 = ftol();
                      *(undefined4 *)(param_1 + 0x10) = uVar3;
                    }
                    else {
                      uVar2 = ftol();
                      if (uVar2 < uVar5) {
                        uVar3 = ftol();
                        *(undefined4 *)(param_1 + 0x10) = uVar3;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar5 = *(uint *)(param_1 + 0x10);
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          *(uint *)(param_1 + 0x10) = uVar5;
        }
      }
      else {
        uVar5 = ftol();
        if (uVar5 <= *(uint *)(param_1 + 0x10)) {
          *(int *)(param_1 + 0xc) = iVar1 + 1;
        }
        uVar5 = *(uint *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (uVar5 < 0x29) {
          if (uVar5 < 0x1a) {
            if (uVar5 < 0xb) {
              if (uVar5 < 6) {
                if (2 < uVar5) {
                  *(undefined4 *)(param_1 + 0xc) = 5;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0xc) = 10;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0xc) = 0xf;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xc) = 0x1e;
          }
        }
        else {
          *(undefined4 *)(param_1 + 8) = 1;
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
      }
    }
    else {
      if (0x14 < *(uint *)(param_1 + 0xc)) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      uVar5 = *(uint *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (uVar5 < 0x29) {
        if (uVar5 < 0x1a) {
          if (uVar5 < 0xb) {
            if (uVar5 < 6) {
              if (2 < uVar5) {
                *(undefined4 *)(param_1 + 8) = 5;
              }
            }
            else {
              *(undefined4 *)(param_1 + 8) = 10;
            }
          }
          else {
            *(undefined4 *)(param_1 + 8) = 0xf;
          }
        }
        else {
          *(undefined4 *)(param_1 + 8) = 0x1e;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 1;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
  }
  else {
    if (0x14 < *(uint *)(param_1 + 8)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    uVar5 = *(uint *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (uVar5 < 0xe) {
      if (uVar5 < 7) {
        if (uVar5 < 5) {
          if (2 < uVar5) {
            *(undefined4 *)(param_1 + 4) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 4) = 6;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xc;
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0x18;
    }
  }
  puVar4 = (uint *)(uint)(ushort)((ushort)(param_2 < _DAT_006106d0) << 8 |
                                  (ushort)(NAN(param_2) || NAN(_DAT_006106d0)) << 10 |
                                 (ushort)(param_2 == _DAT_006106d0) << 0xe);
  if (param_2 >= _DAT_006106d0 && (param_2 == _DAT_006106d0) == 0) {
    puVar4 = *(uint **)(param_1 + 0x10);
  }
  if (*(uint *)(param_1 + 0xc) != 0) {
    *param_3 = *(uint *)(param_1 + 0xc);
    return puVar4;
  }
  if (*(uint *)(param_1 + 8) != 0) {
    *param_3 = *(uint *)(param_1 + 8);
    return param_3;
  }
  if (*(uint *)(param_1 + 4) == 0) {
    uVar5 = *(uint *)(param_1 + 0x10);
    *param_3 = uVar5;
    while( true ) {
      if (uVar5 < 0x15) {
        return puVar4;
      }
      uVar5 = *param_3;
      if (uVar5 % 5 != 0) break;
      puVar4 = (uint *)(uVar5 * -0x33333333);
      uVar5 = uVar5 / 5;
      *param_3 = uVar5;
    }
    return (uint *)(uVar5 / 5);
  }
  *param_3 = *(uint *)(param_1 + 4);
  return puVar4;
}


