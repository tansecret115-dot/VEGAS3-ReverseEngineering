/* Module: rmto3260.dll
   Function: FUN_662f8620
   Address: 662f8620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __fastcall FUN_662f8620(int param_1)

{
  undefined2 uVar1;
  
  if ((DAT_66311d74 != 0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
    return uVar1;
  }
  return 0;
}


