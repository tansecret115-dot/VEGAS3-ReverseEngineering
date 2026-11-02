/* Module: rmbe3260.dll
   Function: FUN_66045e80
   Address: 66045e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __fastcall FUN_66045e80(int param_1)

{
  undefined2 uVar1;
  
  if ((DAT_66075318 != 0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
    return uVar1;
  }
  return 0;
}


