/* Module: rmbe3260.dll
   Function: FUN_6601e5b0
   Address: 6601e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601e5b0(int param_1)

{
  void *this;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  LSTATUS LVar4;
  uint uVar5;
  int iVar6;
  LPCSTR local_80 [3];
  LPCSTR local_74 [3];
  LPCSTR local_68 [3];
  LPCSTR local_5c [3];
  HKEY local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar6 = -0x7ffbfdaf;
  local_10 = 0;
  local_c = 0;
  local_1c = 0;
  local_20 = 0;
  local_40 = 0;
  local_18 = 0;
  local_14 = 0;
  if (((*(int *)(param_1 + 0xa8) != 0) &&
      (iVar6 = (**(code **)(**(int **)(param_1 + 0x84) + 0x34))(*(int **)(param_1 + 0x84),&local_10)
      , local_10 != 0)) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 0x84) + 0x38))(*(int **)(param_1 + 0x84),&local_14),
     local_14 != 0)) {
    local_18 = local_14;
  }
  if (((*(int *)(param_1 + 0xac) != 0) &&
      (iVar6 = (**(code **)(**(int **)(param_1 + 0x88) + 0x34))(*(int **)(param_1 + 0x88),&local_c),
      local_c != 0)) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 0x88) + 0x38))(*(int **)(param_1 + 0x88),&local_14),
     local_18 < local_14)) {
    local_18 = local_14;
  }
  if (((*(int *)(param_1 + 0xb0) != 0) &&
      (iVar6 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x34))(*(int **)(param_1 + 0x8c),&local_1c)
      , local_1c != 0)) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x38))(*(int **)(param_1 + 0x8c),&local_14),
     local_18 < local_14)) {
    local_18 = local_14;
  }
  if (((*(int *)(param_1 + 0xb4) != 0) &&
      (iVar6 = (**(code **)(**(int **)(param_1 + 0x90) + 0x34))(*(int **)(param_1 + 0x90),&local_20)
      , local_20 != 0)) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 0x90) + 0x38))(*(int **)(param_1 + 0x90),&local_14),
     local_18 < local_14)) {
    local_18 = local_14;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar6 = (**(code **)(**(int **)(param_1 + 0x94) + 0x34))(*(int **)(param_1 + 0x94),&local_40);
  }
  if (((local_10 == 0) && (local_c == 0)) && ((local_1c == 0 && (local_20 == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  if (local_10 == 0) {
    if (((local_c == 0) && (local_1c == 0)) && ((local_20 == 0 && (local_40 == 0)))) {
      iVar6 = -0x7ffbfd9f;
    }
    if ((((local_c == 0) && (local_1c == 0)) && (local_20 == 0)) && (local_40 != 0)) {
      return 0;
    }
  }
  FUN_6605b650(local_68);
  FUN_6605b650(local_5c);
  if (*(int *)(param_1 + 0xbc) == 0) {
    if (local_10 != 0) {
      FUN_6605b900(local_68,(int *)(param_1 + 0xf0));
    }
    if (local_c == 0) goto LAB_6601e7b8;
    piVar2 = (int *)(param_1 + 0xfc);
  }
  else {
    if (local_10 != 0) {
      FUN_6605b900(local_68,(int *)(param_1 + 0x108));
    }
    if (local_c == 0) goto LAB_6601e7b8;
    piVar2 = (int *)(param_1 + 0x108);
  }
  FUN_6605b900(local_5c,piVar2);
LAB_6601e7b8:
  if (-1 < iVar6) {
    local_28 = (int *)0x0;
    local_8 = (int *)0x0;
    iVar6 = FUN_6604ee00((void *)(param_1 + 0x148),1,s_RMACreateRM2Converter_6606dc44,(int)&local_28
                        );
    if ((-1 < iVar6) &&
       (iVar6 = (**(code **)*local_28)(local_28,&DAT_66066118,&local_8), local_28 != (int *)0x0)) {
      (**(code **)(*local_28 + 8))(local_28);
      local_28 = (int *)0x0;
    }
    local_24 = (int *)0x0;
    if ((-1 < iVar6) &&
       (iVar6 = (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))
                          (*(int **)(param_1 + 0x80),&local_24), -1 < iVar6)) {
      local_34 = (int *)0x0;
      iVar6 = (**(code **)(*local_24 + 0xc))(local_24,&local_34);
      while ((-1 < iVar6 && (iVar6 != 0x40012))) {
        FUN_660145d0(&local_38);
        FUN_660145f0(&local_38,local_34);
        local_2c = 0;
        local_30 = 0;
        local_4c = 0;
        local_48 = (int *)0x0;
        if (-1 < iVar6) {
          if (local_10 != 0) {
            piVar2 = (int *)FUN_660145e0(&local_38);
            iVar6 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_2c);
          }
          if ((-1 < iVar6) && (local_c != 0)) {
            piVar2 = (int *)FUN_660145e0(&local_38);
            iVar6 = (**(code **)(*piVar2 + 0x14))(piVar2,&local_30);
          }
        }
        if (((local_10 != 0) && (local_2c != 0)) && (-1 < iVar6)) {
          local_44 = (int *)0x0;
          iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x84))
                            (*(undefined4 **)(param_1 + 0x84),&DAT_66066108,&local_44);
          if (-1 < iVar6) {
            iVar6 = (**(code **)(*local_44 + 0x14))(local_44,local_2c,&local_4c);
            (**(code **)(*local_44 + 8))(local_44);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*local_8 + 0xc))(local_8,local_68[0],local_4c);
            }
          }
        }
        if (((local_c != 0) && (local_30 != 0)) && (-1 < iVar6)) {
          local_44 = (int *)0x0;
          iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x88))
                            (*(undefined4 **)(param_1 + 0x88),&DAT_66066108,&local_44);
          if (-1 < iVar6) {
            iVar6 = (**(code **)(*local_44 + 0x14))(local_44,local_30,&local_48);
            (**(code **)(*local_44 + 8))(local_44);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*local_8 + 0xc))(local_8,local_5c[0],local_48);
            }
          }
        }
        if (((local_10 != 0) && (local_c != 0)) &&
           ((local_2c != 0 && ((local_30 != 0 && (-1 < iVar6)))))) {
          iVar6 = (**(code **)(*local_8 + 0x28))(local_8,local_68[0],local_4c,local_5c[0],local_48);
        }
        (**(code **)(*local_34 + 8))(local_34);
        if (-1 < iVar6) {
          iVar6 = (**(code **)(*local_24 + 0x10))(local_24,&local_34);
        }
        thunk_FUN_66014790((int *)&local_38);
      }
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(local_24);
        local_24 = (int *)0x0;
      }
    }
    local_3c = (int *)0x0;
    if ((-1 < iVar6) &&
       (iVar6 = (**(code **)(**(int **)(param_1 + 0x80) + 0x40))
                          (*(int **)(param_1 + 0x80),&local_3c), -1 < iVar6)) {
      local_38 = (int *)0x0;
      iVar6 = (**(code **)(*local_3c + 0xc))(local_3c,&local_38);
      if ((-1 < iVar6) && (iVar6 != 0x40012)) {
        FUN_660145d0(&local_34);
        FUN_660145f0(&local_34,local_38);
        local_4c = 0;
        local_44 = (int *)0x0;
        local_30 = 0;
        local_2c = 0;
        if (local_10 != 0) {
          piVar2 = (int *)FUN_660145e0(&local_34);
          iVar6 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_4c);
        }
        if ((local_c != 0) && (-1 < iVar6)) {
          piVar2 = (int *)FUN_660145e0(&local_34);
          iVar6 = (**(code **)(*piVar2 + 0x14))(piVar2,&local_44);
        }
        if (((local_10 != 0) && (local_4c != 0)) && (-1 < iVar6)) {
          local_48 = (int *)0x0;
          iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x84))
                            (*(undefined4 **)(param_1 + 0x84),&DAT_66066108,&local_48);
          if (-1 < iVar6) {
            iVar6 = (**(code **)(*local_48 + 0x14))(local_48,local_4c,&local_30);
            (**(code **)(*local_48 + 8))(local_48);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*local_8 + 0x10))(local_8,local_68[0],local_30);
            }
          }
        }
        if (((local_c != 0) && (local_44 != (int *)0x0)) && (-1 < iVar6)) {
          local_48 = (int *)0x0;
          iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x88))
                            (*(undefined4 **)(param_1 + 0x88),&DAT_66066108,&local_48);
          if (-1 < iVar6) {
            iVar6 = (**(code **)(*local_48 + 0x14))(local_48,local_44,&local_2c);
            (**(code **)(*local_48 + 8))(local_48);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*local_8 + 0x10))(local_8,local_5c[0],local_2c);
            }
          }
        }
        if (local_38 != (int *)0x0) {
          (**(code **)(*local_38 + 8))(local_38);
          local_38 = (int *)0x0;
        }
        thunk_FUN_66014790((int *)&local_34);
      }
      if (local_3c != (int *)0x0) {
        (**(code **)(*local_3c + 8))(local_3c);
        local_3c = (int *)0x0;
      }
      if (-1 < iVar6) {
        if (local_1c != 0) {
          (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x114),0);
          (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(param_1 + 0x114),0);
        }
        if (-1 < iVar6) {
          if (local_20 != 0) {
            (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x120),0);
            (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(param_1 + 0x120),0);
          }
          if (-1 < iVar6) {
            local_38 = (int *)0x0;
            iVar3 = (**(code **)*local_8)(local_8,&DAT_66066138,&local_38);
            if (-1 < iVar3) {
              if (local_18 != 0) {
                (**(code **)(*local_38 + 0xc))(local_38,local_18);
              }
              iVar6 = (**(code **)(*local_38 + 0x10))(local_38,*(undefined4 *)(param_1 + 0x1d6));
              if (local_38 != (int *)0x0) {
                (**(code **)(*local_38 + 8))(local_38);
              }
            }
            if (-1 < iVar6) {
              local_38 = (int *)0x0;
              iVar3 = -0x7fffbffb;
              if (((0 < *(int *)(param_1 + 0x1ca)) &&
                  (iVar3 = (**(code **)*local_8)(local_8,&DAT_66066298,&local_38), -1 < iVar3)) &&
                 (iVar6 = 0, 0 < *(int *)(param_1 + 0x1ca))) {
                do {
                  (**(code **)(*local_38 + 0xc))
                            (local_38,0,*(undefined4 *)(*(int *)(param_1 + 0x1c6) + iVar6 * 4));
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(param_1 + 0x1ca));
              }
              iVar6 = (**(code **)(*local_8 + 0x2c))(local_8,*(undefined4 *)(param_1 + 0xe4));
              if (-1 < iVar3) {
                iVar3 = 0;
                if (0 < *(int *)(param_1 + 0x1ca)) {
                  do {
                    (**(code **)(*local_38 + 0x10))
                              (local_38,0,*(undefined4 *)(*(int *)(param_1 + 0x1c6) + iVar3 * 4));
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < *(int *)(param_1 + 0x1ca));
                }
                (**(code **)(*local_38 + 8))(local_38);
              }
            }
          }
        }
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealProducer_SpecialKey_6606dc10,0,0xf003f,
                        &local_50);
  RegCloseKey(local_50);
  if (LVar4 == 0) {
    this = (void *)(param_1 + 0xe4);
    uVar5 = FUN_6605bfa0(this,&DAT_6606dbd4);
    FUN_6605bf20(this,local_80,uVar5);
    FUN_6605bba0(local_80,s__audio_interleaved_rm_6606dbf8);
    FUN_6605bf20(this,local_74,uVar5);
    FUN_6605bba0(local_74,s__video_interleaved_rm_6606dbe0);
    if (local_10 != 0) {
      CopyFileA(local_68[0],local_80[0],0);
    }
    if (local_c != 0) {
      CopyFileA(local_5c[0],local_74[0],0);
    }
    FUN_6605b770((int *)local_74);
    FUN_6605b770((int *)local_80);
  }
  if (((iVar6 < 0) && (iVar6 != -0x7ffbfd9f)) && (iVar6 != -0x7ffbfd9e)) {
    iVar6 = -0x7ffbfda5;
  }
  FUN_6605b770((int *)local_5c);
  FUN_6605b770((int *)local_68);
  return iVar6;
}


