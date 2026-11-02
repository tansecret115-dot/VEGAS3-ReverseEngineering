/* Module: vegas30.exe
   Function: FUN_0050ab70
   Address: 0050ab70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0050ab70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0050aaa0(param_1,&param_1);
  uVar2 = FUN_0050aa30(param_1,param_2,param_3);
  return uVar2 | uVar1;
}


