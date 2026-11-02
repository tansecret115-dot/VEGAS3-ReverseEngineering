/* Module: vegas30k.dll
   Function: FUN_01019800
   Address: 01019800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01019800(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  local_34 = param_4;
  local_38 = param_3;
  local_28 = *param_2;
  local_2c = param_1;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0112ca70(&local_38,0xfffffff1,"1.1.3",0x38);
  if (iVar1 == 0) {
    iVar2 = FUN_0112cba0(&local_38,4);
    if (iVar2 == 1) {
      *param_2 = local_24;
      iVar1 = FUN_0112ca20(&local_38);
    }
    else {
      FUN_0112ca20(&local_38);
      iVar1 = -5;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


