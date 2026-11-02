/* Module: encn3260.dll
   Function: FUN_66494780
   Address: 66494780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66494780(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
  if (uVar1 <= *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 4) = uVar1;
  }
  return;
}


