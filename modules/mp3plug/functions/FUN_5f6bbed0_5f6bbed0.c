/* Module: mp3plug.dll
   Function: FUN_5f6bbed0
   Address: 5f6bbed0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6bbed0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

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
  undefined4 local_10;
  
  local_34 = param_4;
  local_2c = param_1;
  local_38 = param_3;
  local_28 = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = FUN_5f6c6fa0((int)&local_38,param_5,"1.1.3",0x38);
  if (uVar1 == 0) {
    uVar2 = FUN_5f6c7420(&local_38,4);
    if (uVar2 == 1) {
      *param_2 = local_24;
      uVar1 = FUN_5f6c7790((int)&local_38);
    }
    else {
      FUN_5f6c7790((int)&local_38);
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}


