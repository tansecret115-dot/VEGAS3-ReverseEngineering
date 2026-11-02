/* Module: vegas30.exe
   Function: FUN_00422510
   Address: 00422510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c050(200);
  if (iVar1 != 0) {
    FUN_00422110(iVar1,1);
    iVar1 = FUN_0040c050(200);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 700) = param_1;
    }
  }
  return;
}


