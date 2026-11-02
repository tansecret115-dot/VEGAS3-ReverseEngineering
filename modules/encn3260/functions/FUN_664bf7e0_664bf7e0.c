/* Module: encn3260.dll
   Function: FUN_664bf7e0
   Address: 664bf7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_664bf7e0(int *param_1)

{
  char *_Str1;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_5c [7];
  undefined4 local_40 [5];
  int local_2c [4];
  char *local_1c [3];
  int local_10;
  long local_c [2];
  
  FUN_664c4610(local_40,param_1);
  FUN_664c4750(local_5c,local_40);
  FUN_664c4790(local_5c,local_1c,(char *)0x0);
  _Str1 = local_1c[0];
  iVar1 = _stricmp(local_1c[0],s_SETUP_664e2468);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x40);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_66485c20(puVar2);
      *puVar2 = &PTR_FUN_664de040;
      goto LAB_664bfa82;
    }
  }
  else {
    iVar1 = _stricmp(_Str1,s_REDIRECT_664ef9a8);
    if (iVar1 == 0) {
      puVar2 = operator_new(0x40);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_66485c20(puVar2);
        *puVar2 = &PTR_FUN_664df6e8;
        goto LAB_664bfa82;
      }
    }
    else {
      iVar1 = _stricmp(_Str1,&DAT_664e2478);
      if (iVar1 == 0) {
        puVar2 = operator_new(0x40);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_66485c20(puVar2);
          *puVar2 = &PTR_FUN_664de058;
          goto LAB_664bfa82;
        }
      }
      else {
        iVar1 = _stricmp(_Str1,s_PAUSE_664e24bc);
        if (iVar1 == 0) {
          puVar2 = operator_new(0x40);
          if (puVar2 != (undefined4 *)0x0) {
            FUN_66485c20(puVar2);
            *puVar2 = &PTR_FUN_664de0a0;
            goto LAB_664bfa82;
          }
        }
        else {
          iVar1 = _stricmp(_Str1,s_SET_PARAMETER_664e24dc);
          if (iVar1 == 0) {
            puVar2 = operator_new(0x40);
            if (puVar2 != (undefined4 *)0x0) {
              FUN_66485c20(puVar2);
              *puVar2 = &PTR_FUN_664de0d0;
              goto LAB_664bfa82;
            }
          }
          else {
            iVar1 = _stricmp(_Str1,s_GET_PARAMETER_664e2518);
            if (iVar1 == 0) {
              puVar2 = operator_new(0x40);
              if (puVar2 != (undefined4 *)0x0) {
                FUN_66485c20(puVar2);
                *puVar2 = &PTR_FUN_664de0e8;
                goto LAB_664bfa82;
              }
            }
            else {
              iVar1 = _stricmp(_Str1,s_TEARDOWN_664e24c4);
              if (iVar1 == 0) {
                puVar2 = operator_new(0x40);
                if (puVar2 != (undefined4 *)0x0) {
                  FUN_66485c20(puVar2);
                  *puVar2 = &PTR_FUN_664de0b8;
                  goto LAB_664bfa82;
                }
              }
              else {
                iVar1 = _stricmp(_Str1,s_DESCRIBE_664e2374);
                if (iVar1 == 0) {
                  puVar2 = operator_new(0x40);
                  if (puVar2 != (undefined4 *)0x0) {
                    FUN_66485c20(puVar2);
                    *puVar2 = &PTR_FUN_664de010;
                    goto LAB_664bfa82;
                  }
                }
                else {
                  iVar1 = _stricmp(_Str1,s_OPTIONS_664e25c8);
                  if (iVar1 == 0) {
                    puVar2 = operator_new(0x40);
                    if (puVar2 != (undefined4 *)0x0) {
                      FUN_66485c20(puVar2);
                      *puVar2 = &PTR_FUN_664de100;
                      goto LAB_664bfa82;
                    }
                  }
                  else {
                    iVar1 = _stricmp(_Str1,s_RECORD_664e24b4);
                    if (iVar1 == 0) {
                      puVar2 = operator_new(0x40);
                      if (puVar2 != (undefined4 *)0x0) {
                        FUN_66485c20(puVar2);
                        *puVar2 = &PTR_FUN_664de070;
                        goto LAB_664bfa82;
                      }
                    }
                    else {
                      iVar1 = _stricmp(_Str1,s_ANNOUNCE_664e23b8);
                      if (iVar1 == 0) {
                        puVar2 = operator_new(0x40);
                        if (puVar2 != (undefined4 *)0x0) {
                          FUN_664bd560(puVar2);
                          FUN_664bb2c0(puVar2 + 0xd);
                          *puVar2 = &PTR_FUN_664de028;
                          goto LAB_664bfa82;
                        }
                      }
                      else {
                        puVar2 = operator_new(0x40);
                        if (puVar2 != (undefined4 *)0x0) {
                          FUN_664bd560(puVar2);
                          FUN_664bb2c0(puVar2 + 0xd);
                          *puVar2 = &PTR_FUN_664df6d0;
                          goto LAB_664bfa82;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_664bfa82:
  piVar3 = FUN_664c4790(local_5c,local_2c,&DAT_664ef93c);
  FUN_664bb570(local_1c,piVar3);
  local_10 = piVar3[3];
  FUN_664bb3e0(local_2c);
  FUN_664bb5e0(puVar2 + 0xd,local_1c[0]);
  piVar3 = FUN_664c4790(local_5c,local_2c,(char *)0x0);
  FUN_664bb570(local_1c,piVar3);
  local_10 = piVar3[3];
  FUN_664bb3e0(local_2c);
  iVar1 = FUN_664bec00(local_1c,local_c,(long *)&param_1);
  if (iVar1 == 0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else {
    puVar2[1] = local_c[0];
    puVar2[2] = param_1;
  }
  FUN_664bb3e0((int *)local_1c);
  FUN_664c4770(local_5c);
  FUN_664c0180(local_40);
  return puVar2;
}


