/* Module: vegas30.exe
   Function: FUN_00544350
   Address: 00544350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00544350(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  GetCurrentThreadId();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_2[2] == 0) {
    iVar1 = FUN_00543b00(param_1,*param_2,param_2[1]);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *param_3 = iVar1;
      return 0;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (param_4 != 0) {
      iVar1 = FUN_00543440(param_1,param_2);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        FUN_00542e30();
        while( true ) {
          iVar1 = FUN_00543b00(param_1,*param_2,param_2[1]);
          if (iVar1 != 0) break;
          Sleep(10);
        }
        *param_3 = iVar1;
        if (*(code **)(param_1 + 0x50) != (code *)0x0) {
          (**(code **)(param_1 + 0x50))
                    (*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        *(undefined4 *)(param_1 + 0x60) = 0;
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_00543b80(param_1,*param_2,param_2[1],param_2[2]);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *param_3 = iVar1;
      return 0;
    }
  }
  return 1;
}


