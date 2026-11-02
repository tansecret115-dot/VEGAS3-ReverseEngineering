/* Module: mp3plug.dll
   Function: FUN_5f693680
   Address: 5f693680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f693680(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                uint *param_6)

{
  int iVar1;
  uint unaff_EDI;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  if (*(int *)(param_1 + 0x40) == 0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 8));
    return -0x7ffb1ff9;
  }
  if ((*(int *)(param_1 + 0x34) <= param_3) &&
     ((*(int *)(param_1 + 0x34) < param_3 || (*(uint *)(param_1 + 0x30) <= param_2)))) {
    ReleaseMutex(*(HANDLE *)(param_1 + 8));
    return 1;
  }
  FUN_5f6932a0(param_1);
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (*(int *)(param_1 + 0xed0) == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(param_2,param_3);
    if (iVar1 < 0) {
      if (iVar1 == -0x7ff5ffda) {
        iVar1 = 1;
      }
      ReleaseMutex(*(HANDLE *)(param_1 + 8));
      return iVar1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))
                      (param_2,(uint)*(ushort *)(*(int *)(param_1 + 0xea4) + 0xc) * param_3,
                       &stack0xfffffffc);
    if (iVar1 < 0) {
      if (iVar1 == -0x7ff5ffda) {
        iVar1 = 1;
      }
    }
    else if (param_6 != (uint *)0x0) {
      *param_6 = unaff_EDI / *(ushort *)(*(int *)(param_1 + 0xea4) + 0xc);
      ReleaseMutex(*(HANDLE *)(param_1 + 8));
      return iVar1;
    }
    ReleaseMutex(*(HANDLE *)(param_1 + 8));
    return iVar1;
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 8));
  return -0x7fffbfff;
}


