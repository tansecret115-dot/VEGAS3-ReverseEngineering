/* Module: rmme3260.dll
   Function: FUN_6622cef0
   Address: 6622cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622cef0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_66215630();
  return uVar1;
}


