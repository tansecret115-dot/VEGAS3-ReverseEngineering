/* Module: vegas30.exe
   Function: FUN_005ea2c0
   Address: 005ea2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ea2c0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_4;
  uVar3 = 0;
  *param_5 = 0;
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_4 + 0x24c) != 0) {
    *(undefined4 *)(param_4 + 0x24c) = 0;
  }
  FUN_005caca0(*(undefined4 *)(param_4 + 8),param_4);
  if ((param_3 != 0) && (param_3 != 0)) {
    do {
      iVar2 = FUN_005ea1a0(param_1,param_2,iVar1,uVar3,&param_4);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      *param_5 = *param_5 + param_4;
    } while (uVar3 < param_3);
  }
  return 0;
}


