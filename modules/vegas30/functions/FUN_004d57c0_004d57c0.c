/* Module: vegas30.exe
   Function: FUN_004d57c0
   Address: 004d57c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d57c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x1000000 < param_2) {
    param_2 = 0x1000000;
  }
  if (param_2 == *(int *)(param_1 + 0x144)) {
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    FUN_004d56c0(0,0,1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x228);
  iVar3 = *(int *)(param_1 + 0x224);
  iVar2 = param_2;
  if ((iVar1 != 0) && (iVar1 <= *(int *)(param_1 + 0x144))) {
    iVar2 = iVar1;
    if (iVar3 + iVar1 <= param_2) goto LAB_004d583c;
    if (iVar1 < param_2) {
      *(int *)(param_1 + 0x144) = param_2;
      FUN_004d56c0(param_2 - iVar1,iVar1,1);
      return;
    }
  }
  iVar3 = 0;
LAB_004d583c:
  *(int *)(param_1 + 0x144) = param_2;
  FUN_004d56c0(iVar3,iVar2,1);
  return;
}


