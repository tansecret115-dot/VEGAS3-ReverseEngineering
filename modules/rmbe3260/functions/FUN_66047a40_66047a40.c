/* Module: rmbe3260.dll
   Function: FUN_66047a40
   Address: 66047a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66047a40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = ftol(*(undefined4 *)(param_1 + 0x10),0);
    return uVar1;
  }
  return 0;
}


