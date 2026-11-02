/* Module: vegas30.exe
   Function: FUN_005411c0
   Address: 005411c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005411c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  FUN_005b83b0(param_1,1);
  FUN_005c6590(param_1,param_2,param_3,param_4,param_5);
  iVar1 = FUN_005410b0(param_1,0,1);
  if (-1 < iVar1) {
    FUN_00541250(param_1,param_2,param_3,param_4,param_5);
    iVar1 = FUN_00540af0(param_1,param_2,param_3,param_4,param_5,1);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  FUN_005b84d0(param_1,1);
  DAT_0064767c = DAT_0064767c | 0x10;
  return iVar1;
}


