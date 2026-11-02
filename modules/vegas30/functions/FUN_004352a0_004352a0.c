/* Module: vegas30.exe
   Function: FUN_004352a0
   Address: 004352a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004352a0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_4 [4];
  
  iVar1 = FUN_004e9f70(param_1,0x21c,0);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar2 = Transport_IsAnyOpen();
  if (iVar2 != 0) {
    iVar1 = Transport_Suspend();
  }
  if (-1 < iVar1) {
    pcVar3 = (char *)FUN_005bad20(param_1);
    if (*pcVar3 == '\0') {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(pcVar3 + 4);
    }
    iVar4 = FUN_004eb0f0(param_1,0x26,0);
    if (-1 < iVar4) {
      FUN_005b83b0(param_1,1);
      piVar5 = (int *)FUN_00436fa0(local_4);
      iVar7 = *piVar5;
      do {
        while( true ) {
          if (*pcVar3 == '\0') {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(pcVar3 + 0xc);
          }
          if (iVar7 == iVar6) goto LAB_00435373;
          iVar6 = FUN_005ed430(*(undefined4 *)(iVar7 + 4));
          if (iVar6 == 1) break;
          FUN_00436e20();
        }
        FUN_00436e20();
        iVar4 = FUN_005ed410(*(undefined4 *)(iVar7 + 4),0,0);
      } while (-1 < iVar4);
LAB_00435373:
      FUN_005b84d0(param_1,1);
      if (-1 < iVar4) {
        if (param_1 == DAT_0064b138) {
          FUN_00401160();
        }
        if (*pcVar3 == '\0') {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(pcVar3 + 4);
        }
        if (iVar1 != iVar7) {
          FUN_004eb2b0(param_1);
        }
      }
    }
    if (iVar2 != 0) {
      iVar4 = Transport_Resume((uint)(iVar4 < 0));
    }
    if (-1 < iVar4) {
      iVar1 = FUN_004ea040(param_1,0);
      return iVar1;
    }
  }
  iVar1 = FUN_004ea040(param_1,1);
  return iVar1;
}


