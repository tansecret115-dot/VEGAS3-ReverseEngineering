/* Module: encn3260.dll
   Function: FUN_664b1460
   Address: 664b1460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b1460(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x49a) != 0) || (*(int *)(param_1 + 0x49e) != 0)) {
    iVar1 = FUN_664aaa70(*(int *)(param_1 + 0x3a));
    FUN_664b60c0((uint *)(iVar1 + 0x48),(uint *)(param_1 + 0x56));
    *(undefined4 *)(param_1 + 0x49a) = 0;
    *(undefined4 *)(param_1 + 0x49e) = 0;
  }
  return;
}


