/* Module: vegas30.exe
   Function: FUN_0056ce50
   Address: 0056ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0056ce50(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  FUN_004ec4f0(param_2,1,&param_2,1);
  if ((param_2 & 0x100) != 0) {
    uVar2 = FUN_0056bab0(uVar1,param_3,param_4,param_5);
    return uVar2;
  }
  if ((param_2 & 0x80) != 0) {
    uVar2 = FUN_0056bd60(uVar1,param_3,param_4,param_5);
    return uVar2;
  }
  return 0x7f88;
}


