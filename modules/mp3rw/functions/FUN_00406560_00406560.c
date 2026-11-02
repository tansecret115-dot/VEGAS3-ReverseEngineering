/* Module: mp3rw.dll
   Function: FUN_00406560
   Address: 00406560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406560(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_5 != (int *)0x0) && (param_6 != (int *)0x0)) {
    if (param_1 != 0) {
      iVar1 = FUN_00406230(param_3,param_4);
      if (iVar1 == 0) {
        iVar1 = FUN_004061f0(param_3);
      }
      if (param_2 == 1) {
        if (((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x380), iVar2 == 0)) &&
           (iVar2 = *(int *)(param_1 + 0x578), iVar2 == 0)) {
          iVar2 = 5;
        }
        if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 900), iVar1 == 0)) &&
           (iVar1 = *(int *)(param_1 + 0x57c), iVar1 == 0)) {
          iVar1 = 3;
        }
      }
      else if (param_2 == 2) {
        if (((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x388), iVar2 == 0)) &&
           (iVar2 = *(int *)(param_1 + 0x580), iVar2 == 0)) {
          iVar2 = 5;
        }
        if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x38c), iVar1 == 0)) &&
           (iVar1 = *(int *)(param_1 + 0x584), iVar1 == 0)) {
          *param_5 = iVar2;
          *param_6 = 3;
          return 1;
        }
      }
      else {
        if (param_2 != 3) {
          *param_5 = -1;
          *param_6 = -1;
          return 1;
        }
        if (((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x390), iVar2 == 0)) &&
           (iVar2 = *(int *)(param_1 + 0x588), iVar2 == 0)) {
          iVar2 = -1;
        }
        if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x394), iVar1 == 0)) &&
           (iVar1 = *(int *)(param_1 + 0x58c), iVar1 == 0)) {
          *param_5 = iVar2;
          *param_6 = -1;
          return 1;
        }
      }
      *param_5 = iVar2;
      *param_6 = iVar1;
      return 1;
    }
    if ((param_2 == 1) || (param_2 == 2)) {
      *param_5 = 5;
      *param_6 = 3;
      return 0;
    }
    if (param_2 == 3) {
      *param_5 = -1;
      *param_6 = -1;
    }
  }
  return 0;
}


