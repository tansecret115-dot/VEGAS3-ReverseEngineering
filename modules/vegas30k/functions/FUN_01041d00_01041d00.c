/* Module: vegas30k.dll
   Function: FUN_01041d00
   Address: 01041d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01041d00(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    return -0x7fff0001;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_4;
    return param_4;
  }
  if (param_5 != 0) {
    *(undefined4 *)(param_1 + 0x8c) = 1;
    *(undefined4 *)(param_1 + 0x98) = param_3;
  }
  FUN_010410a0(param_2,*(undefined4 *)(param_1 + 0x98),param_4);
  iVar1 = FUN_010411d0();
  if ((iVar1 < param_4) && (*(int *)(param_1 + 0x40) == 0)) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_4;
    return param_4;
  }
  if (iVar1 != 0) {
    iVar2 = FUN_01041250(param_2,param_4);
    if (iVar2 < param_4) {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_4;
  return iVar2;
}


