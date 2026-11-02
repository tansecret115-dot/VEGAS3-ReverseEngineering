/* Module: sfmarket2.dll
   Function: FUN_00405270
   Address: 00405270
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __fastcall FUN_00405270(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x1be0) != 0) {
    iVar1 = FUN_00404e30(param_1,*(int *)((int)param_1 + 0x1be8),*(int *)((int)param_1 + 0x1bec));
    if (iVar1 != 0) {
      return (void *)**(undefined4 **)(iVar1 + 0x240);
    }
  }
  return param_1;
}


