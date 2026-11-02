/* Module: vegas30.exe
   Function: FUN_005ea760
   Address: 005ea760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ea760(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_4;
  *param_5 = 0;
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  iVar2 = param_4 + 0x38;
  FUN_005d13b0(iVar2);
  if (param_3 != 0) {
    FUN_005d1520(iVar2);
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        iVar2 = FUN_005ea730(param_1,param_2,iVar1,uVar3,&param_4);
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        *param_5 = *param_5 + param_4;
      } while (uVar3 < param_3);
    }
  }
  return 0;
}


