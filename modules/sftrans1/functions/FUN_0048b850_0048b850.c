/* Module: sftrans1.dll
   Function: FUN_0048b850
   Address: 0048b850
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0048b850(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  uVar1 = FUN_0048b890();
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  uVar2 = FUN_0048a750();
  return uVar2 | uVar1 | 1;
}


