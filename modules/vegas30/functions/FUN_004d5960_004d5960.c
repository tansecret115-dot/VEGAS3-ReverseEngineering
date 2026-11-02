/* Module: vegas30.exe
   Function: FUN_004d5960
   Address: 004d5960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004d5960(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x228);
  iVar2 = *(int *)(param_1 + 0x224);
  iVar3 = 0;
  if (iVar1 < *(int *)(param_1 + 0x144)) {
    iVar3 = *(int *)(param_1 + 0x144) - iVar1;
  }
  if ((param_2 < 0) && (iVar2 <= -param_2)) {
    param_2 = 0;
  }
  else {
    param_2 = iVar2 + param_2;
  }
  if (iVar3 <= param_2) {
    param_2 = iVar3;
  }
  if (param_2 != iVar2) {
    FUN_004d56c0(param_2,iVar1,0);
    return 1;
  }
  return 0;
}


