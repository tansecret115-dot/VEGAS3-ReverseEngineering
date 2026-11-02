/* Module: rmbe3260.dll
   Function: FUN_66015ce0
   Address: 66015ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66015ce0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_66014840(param_1,param_2,param_3);
  return uVar1;
}


