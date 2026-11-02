/* Module: vegas30.exe
   Function: FUN_004d5890
   Address: 004d5890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004d5890(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1[0x51]);
  if (param_2 != -0x7fffffff) {
    if (param_2 == 0x7fffffff) {
      iVar1 = 0;
    }
    else {
      if (param_2 == -0x80000000) {
        param_2 = DAT_006477c0;
        if (iVar1 <= DAT_006477c0) goto LAB_004d58f0;
      }
      else {
        param_2 = param_1[0x52] + param_2;
        if (param_2 < 0) {
          iVar1 = 0;
          goto LAB_004d58f0;
        }
        if (iVar1 < param_2) goto LAB_004d58f0;
      }
      iVar1 = param_2;
    }
  }
LAB_004d58f0:
  if (iVar1 != param_1[0x52]) {
    iVar3 = param_1[0x8b];
    uVar2 = 1;
    param_1[0x52] = iVar1;
    iVar1 = (**(code **)(*param_1 + 0x40))(iVar1);
    if (iVar1 <= param_1[0x87]) {
      iVar1 = param_1[0x87];
    }
    iVar3 = iVar3 - iVar1 / 2;
    if (iVar3 < 0) {
      FUN_004d56c0(0,iVar1,1);
      return 1;
    }
    if (param_1[0x51] < iVar3) {
      iVar3 = param_1[0x51];
    }
    FUN_004d56c0(iVar3,iVar1,1);
  }
  return uVar2;
}


