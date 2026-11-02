/* Module: vegas30.exe
   Function: FUN_005d9a60
   Address: 005d9a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9a60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_005b83b0(param_1,1);
  iVar1 = FUN_005d9990(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_005d99b0(param_1,iVar1);
  }
  FUN_005b84d0(param_1,1);
  return uVar2;
}


