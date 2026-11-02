/* Module: vegas30.exe
   Function: FUN_00529fc0
   Address: 00529fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00529fc0(int param_1,uint param_2)

{
  int iVar1;
  
  switch(param_2 & 0xffff) {
  case 0xcd:
    if (param_2 >> 0x10 != *(uint *)(param_1 + 0xec)) {
      FUN_00525770(param_1,param_2 >> 0x10);
      return 0;
    }
    break;
  case 0xd1:
    FUN_00527330(param_1);
    return 0;
  case 0xd2:
    FUN_00527520(param_1);
    return 0;
  case 0xd5:
    FUN_00529d60(param_1);
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,0x1b,1);
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      EndDialog(*(HWND *)(param_1 + 8),2);
      return 0;
    }
    break;
  case 0xd6:
    if ((*(int *)(param_1 + 0x124) == 0) && (*(int *)(*(int *)(param_1 + 0x84) + 4) == 0)) {
      FUN_00527520(param_1);
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      iVar1 = FUN_00529c80(param_1);
      if (iVar1 != 0) {
        EndDialog(*(HWND *)(param_1 + 8),1);
        return 1;
      }
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,0x1b,1);
      }
      EndDialog(*(HWND *)(param_1 + 8),2);
    }
    return 1;
  case 0x192:
    FUN_00527430(param_1);
    return 0;
  case 0x193:
    FUN_00527710(param_1);
    return 0;
  case 0x194:
    FUN_00527760(param_1);
  }
  return 0;
}


