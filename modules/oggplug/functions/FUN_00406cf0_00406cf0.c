/* Module: oggplug.dll
   Function: FUN_00406cf0
   Address: 00406cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406cf0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00406c20(param_1,*(undefined2 **)(*(int *)((int)param_1 + 0x30) + 0x424));
  if (iVar1 != 0) {
    *(undefined4 *)((int)param_1 + 0x24) = 1;
  }
  return;
}


