/* Module: vegas30.exe
   Function: FUN_004227f0
   Address: 004227f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004227f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c050(200);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x8c) == 2)) {
    FUN_0041ab80(iVar1,param_1);
  }
  return 0;
}


