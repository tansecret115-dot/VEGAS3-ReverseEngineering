/* Module: vegas30.exe
   Function: FUN_005b5af0
   Address: 005b5af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005b645d) */
/* WARNING: Removing unreachable block (ram,0x005b6470) */
/* WARNING: Removing unreachable block (ram,0x005b647a) */
/* WARNING: Removing unreachable block (ram,0x005b6482) */
/* WARNING: Removing unreachable block (ram,0x005b64ac) */
/* WARNING: Removing unreachable block (ram,0x005b64b8) */
/* WARNING: Removing unreachable block (ram,0x005b64df) */
/* WARNING: Removing unreachable block (ram,0x005b650a) */
/* WARNING: Removing unreachable block (ram,0x005b651a) */
/* WARNING: Removing unreachable block (ram,0x005b652b) */
/* WARNING: Removing unreachable block (ram,0x005b652f) */
/* WARNING: Removing unreachable block (ram,0x005b654c) */
/* WARNING: Removing unreachable block (ram,0x005b6571) */
/* WARNING: Removing unreachable block (ram,0x005b657d) */

int __thiscall
FUN_005b5af0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,undefined4 param_8,undefined4 param_9,
            undefined4 *param_10)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 uVar4;
  undefined4 local_24;
  LONG LStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  int iStack_4;
  
  *param_10 = 0;
  local_24 = 0;
  riff_SaveLocation(*(undefined4 *)(param_1 + 0x118),&local_8);
  local_10 = 0;
  iVar1 = FUN_005b8630(*(undefined4 *)(param_1 + 8));
  local_c = iVar1;
  iVar2 = (**(code **)(**(int **)(iVar1 + 0x3a8) + 0x18))(*(int **)(iVar1 + 0x3a8),0,0);
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(**(int **)(iVar1 + 0x3a8) + 0x14))(*(int **)(iVar1 + 0x3a8),0,0,0,0),
     -1 < iVar2)) {
    iStack_1c = *(int *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar1 + 0x3a8);
  }
  local_24 = 0x20;
  LStack_20 = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x118),0x20,&LStack_20,1);
  if (local_8 < 0x6d767666) {
    if (local_8 == 0x6d767665) {
      if (param_3 == -0x80000000) {
        iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
      }
      else {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_3 * 4);
      }
      iVar2 = FUN_005e9be0(*(undefined4 *)(param_1 + 0x114),
                           **(undefined4 **)(*(int *)(iVar1 + 0x24) + 8),&stack0xffffffd0);
LAB_005b63ed:
      if (iVar2 < 0) goto LAB_005b5e04;
    }
    else {
      if (0x68766b74 < local_8) {
        if (local_8 < 0x6c62786e) {
          if (local_8 == 0x6c62786d) {
            if (param_2 == 0) {
              iVar2 = FUN_005ea8d0(*(undefined4 *)(param_1 + 0x114),0,param_3,0,1,&stack0xffffffd0);
            }
            else if ((0 < param_2) && (param_2 < 3)) goto LAB_005b5dff;
          }
          else {
            if (local_8 < 0x6b726d65) {
              if (local_8 < 0x6b726d63) {
                if (local_8 == 0x6b617274) {
                  if (param_2 == 1) {
                    iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
                    iVar2 = FUN_005e9c20(*(undefined4 *)(param_1 + 0x114),
                                         *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4),
                                         &stack0xffffffd0);
                  }
                  goto LAB_005b63ed;
                }
                if (local_8 != 0x6b72616d) goto LAB_005b5dff;
              }
            }
            else if (local_8 != 0x6b726d6b) goto LAB_005b5dff;
            uVar4 = 0;
            if (local_8 == 0x6b726d63) {
              uVar4 = FUN_005b8980(*(undefined4 *)(param_1 + 8));
            }
            else if (local_8 == 0x6b726d6b) {
              uVar4 = FUN_005b8990(*(undefined4 *)(param_1 + 8));
            }
            else if (local_8 == 0x6b726d64) {
              uVar4 = FUN_005b89b0(*(undefined4 *)(param_1 + 8));
            }
            else if (local_8 == 0x6b72616d) {
              uVar4 = FUN_005b8970(*(undefined4 *)(param_1 + 8));
            }
            iVar2 = FUN_005e9790(*(undefined4 *)(param_1 + 0x114),uVar4,param_3,&stack0xffffffd0);
          }
        }
        else if (local_8 == 0x6c666b74) {
          if (param_3 == -0x80000000) {
            iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
          }
          else {
            iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
            iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_3 * 4);
          }
          if (*(int *)(iVar1 + 0x244) != 0) {
            FUN_005d0420(iVar1);
          }
          iVar2 = FUN_005e9fa0(*(undefined4 *)(param_1 + 0x114),iVar1,&stack0xffffffd0);
        }
        else if (local_8 == 0x6c66786d) {
          iVar2 = FUN_005eaac0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),0,
                               param_3,param_5,1,&stack0xffffffd0);
        }
        else {
          if (local_8 != 0x6c6d7270) goto LAB_005b5dff;
          param_3 = 0;
          uVar4 = 1;
LAB_005b5f25:
          iVar2 = FUN_005ea7e0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar4,
                               0xffffffff,param_3,&stack0xffffffd0);
        }
        goto LAB_005b63ed;
      }
      if (local_8 == 0x68766b74) {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar2 = FUN_005e9ce0(*(undefined4 *)(param_1 + 0x114),
                             *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4),&stack0xffffffd0);
        goto LAB_005b63ed;
      }
      if (0x616a7270 < local_8) {
        if (local_8 < 0x64686b75) {
          if (local_8 == 0x64686b74) {
            iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
            iVar2 = FUN_005e9c60(*(undefined4 *)(param_1 + 0x114),
                                 *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4),&stack0xffffffd0
                                );
          }
          else if (local_8 != 0x6362786d) {
            if (local_8 != 0x6366786d) goto LAB_005b5dff;
            if (param_2 == 1) {
              iVar2 = FUN_005eaa10(*(undefined4 *)(param_1 + 0x114),param_3,&stack0xffffffd0);
            }
          }
        }
        else {
          if (local_8 != 0x6772786d) goto LAB_005b5dff;
          iVar2 = FUN_005eaa50(*(undefined4 *)(param_1 + 0x114),0,param_3,&stack0xffffffd0);
        }
        goto LAB_005b63ed;
      }
      if (local_8 == 0x616a7270) {
LAB_005b62f1:
        iVar2 = FUN_005e9da0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             &stack0xffffffd0);
        goto LAB_005b63ed;
      }
      if (0x2066786d < local_8) {
        if (local_8 != 0x206d7270) goto LAB_005b5dff;
        iVar2 = FUN_005ea7e0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),0,0,
                             param_3,&stack0xffffffd0);
        goto LAB_005b63ed;
      }
      if (local_8 == 0x2066786d) {
        iVar2 = FUN_005eaac0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),0,param_3
                             ,param_5,0,&stack0xffffffd0);
        goto LAB_005b63ed;
      }
      if (local_8 == 0x2062786d) {
        if (param_2 == 0) {
          iVar2 = FUN_005ea8d0(*(undefined4 *)(param_1 + 0x114),0,param_3,0,0,&stack0xffffffd0);
        }
        else if (param_2 == 1) {
          iVar2 = FUN_005ea8d0(*(undefined4 *)(param_1 + 0x114),0,param_3,1,0,&stack0xffffffd0);
        }
        else if (param_2 == 2) {
          uVar4 = 0;
          goto LAB_005b5f25;
        }
        goto LAB_005b63ed;
      }
      if (local_8 != 0x2064656d) goto LAB_005b5dff;
      if (param_2 != 2) {
        local_24 = 0;
        iVar2 = FUN_005ed0e0(param_3,&local_24);
        if (-1 < iVar2) {
          iVar2 = FUN_005e9350(*(undefined4 *)(param_1 + 0x114),local_24,&stack0xffffffd0);
          goto LAB_005b63ed;
        }
        goto LAB_005b5e04;
      }
    }
    riff_SaveLocation(*(undefined4 *)(param_1 + 0x118),&local_10);
    riff_RestoreLocation(*(undefined4 *)(param_1 + 0x118),uStack_14);
    if (iStack_1c == 0) {
      iStack_4 = unaff_ESI + 0x18;
      iVar2 = FUN_005b5a50(&local_8);
      if (iVar2 < 0) {
        return iVar2;
      }
      riff_RestoreLocation(*(undefined4 *)(param_1 + 0x118),local_10);
    }
    else {
      local_24 = 0;
      iVar1 = (**(code **)(**(int **)(iStack_18 + 0x3a8) + 0x3c))
                        (*(int **)(iStack_18 + 0x3a8),&local_24,&stack0xffffffd4);
      if (iVar1 < 0) {
        iVar2 = -0x7fffbffb;
        *(int *)(param_1 + 0x114) = iStack_1c;
      }
      else {
        iStack_4 = 0x18;
        iVar2 = FUN_005b5a50(&local_8);
        *(int *)(param_1 + 0x114) = iStack_1c;
      }
    }
    if (-1 < iVar2) {
      *param_7 = iStack_4 + 8;
      FUN_005b7a70(iStack_4 + 8,param_7);
      return iVar2;
    }
  }
  else {
    if (0x736c6d6b < local_8) {
      if (local_8 < 0x76727077) {
        if (local_8 == 0x76727076) {
          uVar4 = FUN_005b89a0(*(undefined4 *)(param_1 + 8));
          iVar2 = FUN_005e9950(*(undefined4 *)(param_1 + 0x114),uVar4,param_3,&stack0xffffffd0);
        }
        else {
          if (0x76656b74 < local_8) {
            if (local_8 == 0x766a7270) goto LAB_005b62f1;
            goto LAB_005b5dff;
          }
          if (local_8 == 0x76656b74) {
            if (param_3 == -0x80000000) {
              iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
            }
            else {
              iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
              iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_3 * 4);
            }
            iVar2 = FUN_005e9ac0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(iVar1 + 0x24),0,
                                 &stack0xffffffd0);
          }
          else if (local_8 == 0x736c7076) {
            uVar4 = FUN_005b89a0(*(undefined4 *)(param_1 + 8));
            iVar2 = FUN_005e99a0(*(undefined4 *)(param_1 + 0x114),uVar4,&stack0xffffffd0);
          }
          else {
            if (local_8 != 0x75616b74) goto LAB_005b5dff;
            iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
            iVar2 = FUN_005e9ca0(*(undefined4 *)(param_1 + 0x114),
                                 *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4),&stack0xffffffd0
                                );
          }
        }
      }
      else if (local_8 == 0x78666b74) {
        if (param_3 == -0x80000000) {
          uVar4 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          uVar4 = *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4);
        }
        iVar2 = FUN_005e9e80(*(undefined4 *)(param_1 + 0x114),uVar4,0,&stack0xffffffd0);
      }
      else if (local_8 == 0x78667665) {
        if (param_3 == -0x80000000) {
          iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_3 * 4);
        }
        iVar2 = FUN_005e9ba0(*(undefined4 *)(param_1 + 0x114),
                             **(undefined4 **)(*(int *)(iVar1 + 0x24) + 8),&stack0xffffffd0);
      }
      else {
        if (local_8 != 0x78667670) goto LAB_005b5dff;
        iVar2 = FUN_005e9b60(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             &stack0xffffffd0);
      }
      goto LAB_005b63ed;
    }
    if (local_8 == 0x736c6d6b) {
LAB_005b61b1:
      uVar4 = 0;
      if (local_8 == 0x736c6d63) {
        uVar4 = FUN_005b8980(*(undefined4 *)(param_1 + 8));
      }
      else if (local_8 == 0x736c6d6b) {
        uVar4 = FUN_005b8990(*(undefined4 *)(param_1 + 8));
      }
      else if (local_8 == 0x736c6d64) {
        uVar4 = FUN_005b89b0(*(undefined4 *)(param_1 + 8));
      }
      else if (local_8 == 0x736c6b6d) {
        uVar4 = FUN_005b8970(*(undefined4 *)(param_1 + 8));
      }
      iVar2 = FUN_005e97e0(*(undefined4 *)(param_1 + 0x114),uVar4,&stack0xffffffd0);
      goto LAB_005b63ed;
    }
    if (local_8 < 0x736c6766) {
      if (local_8 == 0x736c6765) {
        uVar4 = FUN_005d9710(*(undefined4 *)(param_1 + 8));
        iVar2 = FUN_005e9e30(*(undefined4 *)(param_1 + 0x114),uVar4,&stack0xffffffd0);
      }
      else if (local_8 < 0x73656b75) {
        if (local_8 == 0x73656b74) {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar2 = FUN_005e9d20(*(undefined4 *)(param_1 + 0x114),
                               *(undefined4 *)(*(int *)(iVar1 + 8) + param_3 * 4),&stack0xffffffd0);
        }
        else if (local_8 == 0x6f6c6b74) {
          puVar3 = (undefined4 *)FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar2 = FUN_005ea020(*(undefined4 *)(param_1 + 0x114),*puVar3,puVar3,&stack0xffffffd0);
        }
        else {
          if (local_8 != 0x7064656d) goto LAB_005b5dff;
          iVar2 = FUN_005e94e0(*(undefined4 *)(param_1 + 0x114),*(int *)(param_1 + 8) + 0x1e4,
                               &stack0xffffffd0);
        }
      }
      else {
        if (local_8 != 0x736a7270) goto LAB_005b5dff;
        iVar2 = FUN_005e9d60(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             &stack0xffffffd0);
      }
      goto LAB_005b63ed;
    }
    if (local_8 < 0x736c6b75) {
      if (local_8 == 0x736c6b74) {
        if (param_3 == -0x80000000) {
          iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_3 * 4);
        }
        iVar2 = FUN_005e9b10(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(iVar1 + 0x24),
                             &stack0xffffffd0);
        goto LAB_005b63ed;
      }
      if (local_8 == 0x736c6b6d) goto LAB_005b61b1;
    }
    else if ((0x736c6d62 < local_8) && (local_8 < 0x736c6d65)) goto LAB_005b61b1;
LAB_005b5dff:
    iVar2 = -0x7fff0001;
LAB_005b5e04:
    if (iStack_1c != 0) {
      *(int *)(param_1 + 0x114) = iStack_1c;
    }
  }
  return iVar2;
}


