/* Module: rmto3260.dll
   Function: FUN_662fa1a0
   Address: 662fa1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662fa1a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = ftol(*(undefined4 *)(param_1 + 0x10),0);
    return uVar1;
  }
  return 0;
}


