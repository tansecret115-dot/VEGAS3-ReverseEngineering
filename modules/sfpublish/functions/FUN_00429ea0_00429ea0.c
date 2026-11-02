/* Module: sfpublish.dll
   Function: FUN_00429ea0
   Address: 00429ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00429ea0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int local_38;
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
  uVar1 = FUN_0042fd20((int)&local_38,0xfffffff1,"1.1.3",0x38);
  if (uVar1 == 0) {
    uVar2 = FUN_0042fe50(&local_38,4);
    if (uVar2 == 1) {
      *param_2 = local_24;
      uVar1 = FUN_0042fcd0((int)&local_38);
    }
    else {
      FUN_0042fcd0((int)&local_38);
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}


