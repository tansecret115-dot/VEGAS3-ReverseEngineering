/* Module: aifplug.dll
   Function: FUN_5fbd73d0
   Address: 5fbd73d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd73d0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5fbd7250(param_1,*(undefined2 **)(*(int *)((int)param_1 + 0x30) + 0x424));
  if (iVar1 != 0) {
    *(undefined4 *)((int)param_1 + 0x24) = 1;
  }
  return;
}


