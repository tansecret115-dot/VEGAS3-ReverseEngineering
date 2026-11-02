/* Module: vegas30.exe
   Function: FUN_005b7540
   Address: 005b7540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b7540(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  LONG local_b0;
  undefined1 local_ac [168];
  int local_4;
  
  *param_2 = 0;
  *param_3 = 0;
  local_b0 = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x118),*(LONG *)(param_1 + 0x1c0),&local_b0,0);
  iVar2 = FUN_005b5a00(local_ac);
  if (-1 < iVar2) {
    iVar2 = *(int *)(param_1 + 0x1c0);
    iVar6 = *(int *)(param_1 + 0x13c);
    if (iVar6 != 0) {
      iVar3 = FUN_005b7a20(iVar6);
      *param_3 = iVar3;
      if (iVar3 == 0) {
        return -0x7ff8fff2;
      }
    }
    iVar2 = FUN_005b7410((local_4 - iVar2) + -0xac,*param_3,iVar6);
    if (-1 < iVar2) {
      uVar4 = 0;
      if (iVar6 != 0) {
        puVar5 = (uint *)*param_3;
        do {
          uVar1 = *puVar5;
          if (uVar1 < 0x6c66786e) {
            if (uVar1 == 0x6c66786d) {
LAB_005b772a:
              uVar4 = uVar4 | 0x80;
            }
            else if (uVar1 < 0x6772786e) {
              if (uVar1 == 0x6772786d) {
                uVar4 = uVar4 | 0x100;
              }
              else if (uVar1 < 0x616a7271) {
                if (uVar1 == 0x616a7270) {
                  uVar4 = uVar4 | 8;
                }
                else if (uVar1 < 0x2066786e) {
                  if (uVar1 == 0x2066786d) goto LAB_005b772a;
                  if (uVar1 == 0x2062786d) {
                    uVar4 = uVar4 | 0x40;
                  }
                  else if (uVar1 == 0x2064656d) goto LAB_005b776b;
                }
                else if (uVar1 == 0x206d7270) goto LAB_005b7766;
              }
              else if (uVar1 == 0x6362786d) {
LAB_005b7766:
                uVar4 = uVar4 | 0x10;
              }
              else if (uVar1 == 0x6366786d) {
                uVar4 = uVar4 | 0x200;
              }
              else if (uVar1 == 0x64686b74) goto LAB_005b77aa;
            }
            else if (uVar1 < 0x6b726d65) {
              if (uVar1 < 0x6b726d63) {
                if (uVar1 == 0x68766b74) {
                  uVar4 = uVar4 | 0x4004;
                }
                else if (uVar1 == 0x6b617274) {
LAB_005b775e:
                  uVar4 = uVar4 | 0x4006;
                }
                else if (uVar1 == 0x6b72616d) goto LAB_005b77af;
              }
              else {
LAB_005b77af:
                uVar4 = uVar4 | 1;
              }
            }
            else {
              if (uVar1 == 0x6b726d6b) goto LAB_005b77af;
              if (uVar1 == 0x6c62786d) {
                uVar4 = 0;
                if ((puVar5[7] != 0) && (puVar5[5] == 1)) {
                  uVar4 = 0x40;
                }
              }
              else if (uVar1 == 0x6c666b74) {
                uVar4 = uVar4 | 0x400;
              }
            }
          }
          else if (uVar1 < 0x736c6d65) {
            if (0x736c6d62 < uVar1) goto LAB_005b77af;
            if (uVar1 < 0x7064656e) {
              if (uVar1 == 0x7064656d) {
LAB_005b776b:
                uVar4 = uVar4 | 0x2000;
              }
              else {
                if (uVar1 == 0x6c6d7270) goto LAB_005b7766;
                if (uVar1 == 0x6d767665) {
LAB_005b77cb:
                  uVar4 = uVar4 | 2;
                }
                else if (uVar1 == 0x6f6c6b74) goto LAB_005b775e;
              }
            }
            else if (uVar1 == 0x736c6765) {
              uVar4 = uVar4 | 0x20;
            }
            else {
              if (uVar1 == 0x736c6b6d) goto LAB_005b77af;
              if (uVar1 == 0x736c6b74) goto LAB_005b77cb;
            }
          }
          else if (uVar1 < 0x766a7271) {
            if (uVar1 == 0x766a7270) {
              uVar4 = uVar4 | 0x1000;
            }
            else {
              if (uVar1 == 0x736c6d6b) goto LAB_005b77af;
              if (uVar1 == 0x75616b74) {
LAB_005b77aa:
                uVar4 = uVar4 | 4;
              }
              else if (uVar1 == 0x76656b74) goto LAB_005b77cb;
            }
          }
          else if (uVar1 == 0x78666b74) {
            uVar4 = uVar4 | 0x800;
          }
          else if ((uVar1 == 0x78667665) || (uVar1 == 0x78667670)) goto LAB_005b77cb;
          puVar5 = puVar5 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *param_2 = uVar4;
      return iVar2;
    }
    if (*param_3 != 0) {
      FUN_005b7a40(*param_3);
      *param_3 = 0;
    }
  }
  return iVar2;
}


