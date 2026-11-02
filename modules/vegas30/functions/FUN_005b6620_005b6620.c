/* Module: vegas30.exe
   Function: FUN_005b6620
   Address: 005b6620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b6620(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_5a0;
  uint local_59c;
  int local_598;
  uint local_594;
  int iStack_590;
  ulong uStack_58c;
  int iStack_588;
  undefined4 uStack_584;
  DWORD local_57c;
  uint uStack_578;
  ISFMixerIn *pIStack_574;
  uint auStack_570 [3];
  undefined1 auStack_564 [276];
  int iStack_450;
  
  local_5a0 = 0;
  *param_2 = 0;
  local_57c = 0;
  iVar1 = FUN_005b5aa0(&local_59c);
  if (iVar1 < 0) {
    return iVar1;
  }
  *param_2 = *param_2 + 0x20;
  if ((local_594 & 0x80000000) != 0) {
    local_594 = local_594 & 0x7fffffff;
    uVar4 = local_598 - 0x18;
    iVar2 = FUN_005b8630(*(undefined4 *)(param_1 + 8));
    if (*(uint *)(iVar2 + 0x3b0) < uVar4) {
      iVar1 = FUN_005b4860(uVar4);
    }
    if (iVar1 < 0) {
      return iVar1;
    }
    local_57c = 0;
    BVar3 = ReadFile(*(HANDLE *)(param_1 + 0x118),*(LPVOID *)(iVar2 + 0x3ac),uVar4,&local_57c,
                     (LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (uVar4 != local_57c)) {
      return -0x7ffb1ff7;
    }
    iVar1 = (**(code **)(**(int **)(iVar2 + 0x3a8) + 0x18))(*(int **)(iVar2 + 0x3a8),local_594,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(**(int **)(iVar2 + 0x3a8) + 0x14))(*(int **)(iVar2 + 0x3a8),0,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    local_598 = 0;
    local_594 = 0;
    iVar1 = (**(code **)(**(int **)(iVar2 + 0x3a8) + 0x3c))
                      (*(int **)(iVar2 + 0x3a8),&local_598,&local_594);
    if (iVar1 < 0) {
      return iVar1;
    }
    auStack_570[0] = 0;
    iVar1 = FUN_005eb6b0(*(undefined4 *)(iVar2 + 0x3ac),uVar4,uStack_578,pIStack_574,auStack_570);
    if ((iVar1 < 0) || (auStack_570[0] != local_594)) {
      auStack_570[1] = 0;
      auStack_570[2] = 0;
      SetFilePointer(*(HANDLE *)(param_1 + 0x118),0,(PLONG)(auStack_570 + 2),1);
      return -0x7fffbffb;
    }
    local_57c = *(DWORD *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar2 + 0x3a8);
  }
  if (local_59c < 0x6d767666) {
    if (local_59c == 0x6d767665) {
      if (uStack_58c == 0x80000000) {
        iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
      }
      else {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar1 = *(int *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
      }
      iVar1 = FUN_005ea390(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iStack_588 * 4),
                           &local_5a0);
      goto LAB_005b7127;
    }
    if (local_59c < 0x68766b75) {
      if (local_59c == 0x68766b74) {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar1 = FUN_005ea450(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4),uStack_58c,
                             &local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c < 0x616a7271) {
        if (local_59c == 0x616a7270) {
LAB_005b7026:
          iVar1 = FUN_005ea4f0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                               &local_5a0);
          goto LAB_005b7127;
        }
        if (local_59c < 0x2066786e) {
          if (local_59c == 0x2066786d) {
            iVar1 = FUN_005ea650(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                 iStack_588,uStack_58c,uStack_584,0,&local_5a0);
            goto LAB_005b7127;
          }
          if (local_59c == 0x2062786d) {
            if (iStack_590 == 0) {
              iVar1 = FUN_005ea970(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                   iStack_588,uStack_58c,0,0,&local_5a0);
            }
            else if (iStack_590 == 1) {
              iVar1 = FUN_005ea970(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                   iStack_588,uStack_58c,1,0,&local_5a0);
            }
            else if (iStack_590 == 2) {
              FUN_005ea890(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),0,
                           &local_5a0);
            }
            goto LAB_005b7127;
          }
          if (local_59c == 0x2064656d) {
            if ((iStack_590 == 0) || (iStack_590 == 1)) {
              iVar1 = FUN_005e93a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x114),
                                   &local_5a0,0);
            }
            else if (iStack_590 == 2) {
              auStack_570[0] = 0;
              iVar1 = FUN_005ed0e0(uStack_58c,auStack_570);
              if (-1 < iVar1) {
                FUN_005ed410(auStack_570[0],0,0);
              }
            }
            goto LAB_005b7127;
          }
        }
        else if (local_59c == 0x206d7270) {
          iVar1 = FUN_005ea890(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),0,
                               &local_5a0);
          goto LAB_005b7127;
        }
      }
      else if (local_59c < 0x64686b75) {
        if (local_59c == 0x64686b74) {
          iVar1 = FUN_005ea3f0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                               uStack_58c,&local_5a0);
          goto LAB_005b7127;
        }
        if (local_59c == 0x6362786d) {
          if (iStack_590 == 2) {
            uVar4 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
            Mixer_Unprepare();
            iVar1 = Mixer_RemoveMainBus((ISFMixer *)0x0,uStack_58c);
            if (-1 < iVar1) {
              uVar6 = 0;
              if (uVar4 != 0) {
                do {
                  pIStack_574 = (ISFMixerIn *)0x0;
                  Mixer_GetDevice(&pIStack_574,1,uVar6);
                  if ((pIStack_574 != (ISFMixerIn *)0x0) &&
                     ((**(code **)(*(int *)pIStack_574 + 0x8c))(pIStack_574,0x32,&uStack_578),
                     pIStack_574 != (ISFMixerIn *)0x0)) {
                    if (uStack_58c <= uStack_578) {
                      uStack_578 = uStack_578 - 1;
                      (**(code **)(*(int *)pIStack_574 + 0x90))(pIStack_574,0x32,&uStack_578);
                    }
                    (**(code **)(*(int *)pIStack_574 + 8))(pIStack_574);
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar4);
              }
              FUN_005d26e0(*(undefined4 *)(param_1 + 8),auStack_564);
              iStack_450 = iStack_450 + -1;
              FUN_005d2700(*(undefined4 *)(param_1 + 8),auStack_564,1,0);
              Mixer_Prepare();
              FUN_005749b0();
            }
          }
          goto LAB_005b7127;
        }
        if (local_59c == 0x6366786d) {
          if (iStack_590 == 2) {
            iVar1 = Mixer_RemoveFXBus((ISFMixer *)0x0,uStack_58c,0);
          }
          else {
            iVar1 = FUN_005ea5c0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                 uStack_58c,&local_5a0);
          }
          goto LAB_005b7127;
        }
      }
      else if (local_59c == 0x6772786d) {
        iVar1 = FUN_005ea5f0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             iStack_588,uStack_58c,&local_5a0);
        goto LAB_005b7127;
      }
    }
    else {
      if (local_59c < 0x6c62786e) {
        if (local_59c == 0x6c62786d) {
          if (iStack_590 == 0) {
            iVar1 = FUN_005ea970(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                 iStack_588,uStack_58c,0,1,&local_5a0);
          }
          else if ((0 < iStack_590) && (iStack_590 < 3)) {
            iVar1 = -0x7fff0001;
          }
          goto LAB_005b7127;
        }
        if (local_59c < 0x6b726d65) {
          if (local_59c < 0x6b726d63) {
            if (local_59c == 0x6b617274) {
              if (iStack_590 == 2) {
                iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
                iVar1 = FUN_005cb5d0(*(undefined4 *)(param_1 + 8),
                                     *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4),0);
              }
              else if (iStack_590 == 1) {
                iVar1 = FUN_005ea3c0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                                     uStack_58c,&local_5a0);
              }
              goto LAB_005b7127;
            }
            if (local_59c != 0x6b72616d) {
              iVar1 = -0x7fff0001;
              goto LAB_005b7127;
            }
          }
        }
        else if (local_59c != 0x6b726d6b) goto LAB_005b7079;
        if (local_59c == 0x6b726d63) {
          uVar4 = FUN_005b8980(*(undefined4 *)(param_1 + 8));
        }
        else if (local_59c == 0x6b726d6b) {
          uVar4 = FUN_005b8990(*(undefined4 *)(param_1 + 8));
        }
        else if (local_59c == 0x6b726d64) {
          uVar4 = FUN_005b89b0(*(undefined4 *)(param_1 + 8));
        }
        else {
          uVar4 = auStack_570[0];
          if (local_59c == 0x6b72616d) {
            uVar4 = FUN_005b8970(*(undefined4 *)(param_1 + 8));
          }
        }
        iVar1 = FUN_005e9830(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar4,
                             uStack_58c,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x6c666b74) {
        if (uStack_58c == 0x80000000) {
          uVar5 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          uVar5 = *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
        }
        iVar1 = FUN_005ea760(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             iStack_588,uVar5,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x6c66786d) {
        iVar1 = FUN_005ea650(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             iStack_588,uStack_58c,uStack_584,1,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x6c6d7270) {
        iVar1 = FUN_005ea890(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),1,
                             &local_5a0);
        goto LAB_005b7127;
      }
    }
  }
  else if (local_59c < 0x736c6d6c) {
    if (local_59c == 0x736c6d6b) {
      uVar5 = FUN_005b8990(*(undefined4 *)(param_1 + 8));
LAB_005b6f34:
      uVar7 = 0;
      goto LAB_005b6f40;
    }
    if (local_59c < 0x736c6766) {
      if (local_59c == 0x736c6765) {
        uVar5 = FUN_005d9710(*(undefined4 *)(param_1 + 8));
        iVar1 = FUN_005ea540(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar5,
                             uStack_58c,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c < 0x73656b75) {
        if (local_59c == 0x73656b74) {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar1 = FUN_005ea480(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                               *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4),uStack_58c,
                               &local_5a0);
          goto LAB_005b7127;
        }
        if (local_59c == 0x6f6c6b74) {
          uVar5 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          iVar1 = FUN_005ea0a0(*(undefined4 *)(param_1 + 0x114),uStack_58c,uVar5,&local_5a0);
          goto LAB_005b7127;
        }
        if (local_59c == 0x7064656d) {
          iVar1 = FUN_005e95c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x114),
                               uStack_58c,&local_5a0);
          goto LAB_005b7127;
        }
      }
      else if (local_59c == 0x736a7270) {
        iVar1 = FUN_005ea4c0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             &local_5a0);
        goto LAB_005b7127;
      }
    }
    else if (local_59c < 0x736c6d64) {
      if (local_59c == 0x736c6d63) {
        uVar5 = FUN_005b8980(*(undefined4 *)(param_1 + 8));
        uVar7 = 1;
LAB_005b6f40:
        iVar1 = FUN_005e9860(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar5,
                             uVar7,uStack_58c,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x736c6b6d) {
        uVar5 = FUN_005b8970(*(undefined4 *)(param_1 + 8));
        goto LAB_005b6f34;
      }
      if (local_59c == 0x736c6b74) {
        if (uStack_58c == 0x80000000) {
          uVar5 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          uVar5 = *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
        }
        iVar1 = FUN_005ea2c0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             iStack_588,uVar5,&local_5a0);
        goto LAB_005b7127;
      }
    }
    else if (local_59c == 0x736c6d64) {
      uVar5 = FUN_005b89b0(*(undefined4 *)(param_1 + 8));
      uVar7 = 1;
      goto LAB_005b6f40;
    }
  }
  else if (local_59c < 0x76727077) {
    if (local_59c == 0x76727076) {
      iVar1 = FUN_005e99f0(*(undefined4 *)(param_1 + 0x114),*(int *)(param_1 + 8),
                           *(undefined4 *)(*(int *)(param_1 + 8) + 0x228),uStack_58c,&local_5a0);
      goto LAB_005b7127;
    }
    if (local_59c < 0x76656b75) {
      if (local_59c == 0x76656b74) {
        if (uStack_58c == 0x80000000) {
          uVar5 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
          uVar5 = *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
        }
        iVar1 = FUN_005ea1a0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar5,
                             iStack_588,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x736c7076) {
        iVar1 = FUN_005e9a20(*(undefined4 *)(param_1 + 0x114),*(int *)(param_1 + 8),
                             *(undefined4 *)(*(int *)(param_1 + 8) + 0x228),uStack_58c,&local_5a0);
        goto LAB_005b7127;
      }
      if (local_59c == 0x75616b74) {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar1 = FUN_005ea420(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4),uStack_58c,
                             &local_5a0);
        goto LAB_005b7127;
      }
    }
    else if (local_59c == 0x766a7270) goto LAB_005b7026;
  }
  else {
    if (local_59c == 0x78666b74) {
      if (uStack_58c == 0x80000000) {
        uVar5 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
      }
      else {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        uVar5 = *(undefined4 *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
      }
      iVar1 = FUN_005ea730(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),uVar5,
                           iStack_588,&local_5a0);
      goto LAB_005b7127;
    }
    if (local_59c == 0x78667665) {
      if (uStack_58c == 0x80000000) {
        iVar1 = FUN_005b87a0(*(undefined4 *)(param_1 + 8));
      }
      else {
        iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 8));
        iVar1 = *(int *)(*(int *)(iVar1 + 8) + uStack_58c * 4);
      }
      iVar1 = FUN_005ea360(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iStack_588 * 4),
                           &local_5a0);
      goto LAB_005b7127;
    }
    if (local_59c == 0x78667670) {
      iVar1 = FUN_005ea340(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 8),&local_5a0)
      ;
      goto LAB_005b7127;
    }
  }
LAB_005b7079:
  iVar1 = -0x7fff0001;
LAB_005b7127:
  if (local_57c != 0) {
    *(DWORD *)(param_1 + 0x114) = local_57c;
    local_5a0 = local_598 + -0x18;
    local_57c = 0;
  }
  if (-1 < iVar1) {
    iVar2 = *param_2;
    *param_2 = iVar2 + local_5a0;
    FUN_005b7ad0(iVar2 + local_5a0,param_2);
  }
  if (local_57c != 0) {
    *(DWORD *)(param_1 + 0x114) = local_57c;
  }
  return iVar1;
}


