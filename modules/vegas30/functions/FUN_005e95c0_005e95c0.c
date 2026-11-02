/* Module: vegas30.exe
   Function: FUN_005e95c0
   Address: 005e95c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e95c0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar3 = param_1;
  local_c = 0;
  *param_4 = 0;
  iVar4 = FUN_005bad70(param_2,&local_8);
  if (-1 < iVar4) {
    pcVar1 = (char *)(param_1 + 0x1e4);
    piVar5 = (int *)FUN_00436fa0(local_4);
    iVar8 = *piVar5;
    while( true ) {
      iVar7 = param_3;
      if (*pcVar1 == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1f0);
      }
      if (iVar8 == iVar6) break;
      iVar7 = *(int *)(iVar8 + 4);
      *(uint *)(iVar7 + 0x134) = *(uint *)(iVar7 + 0x134) | 0x40;
      FUN_00436e20();
    }
    iVar8 = 0;
    if (0 < param_3) {
      do {
        iVar4 = FUN_005e93a0(param_1,param_2,0,&local_c);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    if (-1 < iVar4) {
      iVar4 = 0;
      iVar8 = iVar4;
      if ((*pcVar1 != '\0') &&
         (iVar4 = *(int *)(param_1 + 0x1ec), iVar8 = iVar4, (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
        bVar2 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
        iVar7 = *(int *)(iVar4 + 0x10);
        while (iVar8 = iVar4, (bVar2 & 2) != 2) {
          bVar2 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
          iVar4 = iVar7;
          iVar7 = *(int *)(iVar7 + 0x10);
        }
      }
LAB_005e96b1:
      param_1 = iVar8;
      if (*pcVar1 == '\0') {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar3 + 0x1f0);
      }
      if (iVar4 != iVar8) {
        iVar8 = param_1;
        if ((*(byte *)(*(int *)(iVar4 + 4) + 0x134) & 0x40) == 0) {
          if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x18) & 2) != 2)) {
            iVar8 = *(int *)(iVar4 + 0x14);
            iVar7 = iVar4;
            if ((*(byte *)(iVar8 + 0x18) & 2) == 2) {
              do {
                iVar4 = *(int *)(iVar7 + 0xc);
                iVar8 = iVar4;
                if (*(int *)(iVar4 + 0x10) == iVar7) break;
                iVar7 = iVar4;
              } while ((*(byte *)(iVar4 + 0x18) & 2) != 2);
            }
            else {
              bVar2 = *(byte *)(*(int *)(iVar8 + 0x10) + 0x18);
              iVar4 = iVar8;
              iVar7 = *(int *)(iVar8 + 0x10);
              while (iVar8 = iVar4, (bVar2 & 2) != 2) {
                bVar2 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
                iVar4 = iVar7;
                iVar7 = *(int *)(iVar7 + 0x10);
              }
            }
          }
        }
        else {
          FUN_00436e20();
          FUN_005ed4a0(iVar4,0,0);
          iVar4 = param_1;
        }
        goto LAB_005e96b1;
      }
      iVar4 = FUN_005bad70(param_2,&param_3);
      if (-1 < iVar4) {
        *param_4 = param_3 - local_8;
        return iVar4;
      }
    }
  }
  return iVar4;
}


