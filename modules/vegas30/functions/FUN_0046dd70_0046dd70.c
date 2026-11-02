/* Module: vegas30.exe
   Function: FUN_0046dd70
   Address: 0046dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046dd70(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 1;
  if ((param_2 == 0) && (param_3 == 0)) {
    return 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  FUN_004693b0(param_1);
  uVar2 = 0;
  uVar1 = 0xffffffff;
  if (param_3 != 0) {
    if (param_2 != 0) {
      uVar1 = 0;
    }
    uVar2 = 1;
    iVar3 = FUN_0046a7a0(param_1,param_3,0,3,uVar1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  if (param_2 != 0) {
    iVar3 = FUN_0046a7a0(param_1,param_2,uVar2,2,uVar1);
  }
  if (-1 < iVar3) {
    iVar3 = FUN_0046dae0(param_1,0,0,0,0,0);
  }
  return iVar3;
}


