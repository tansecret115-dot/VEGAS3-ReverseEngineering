/* Module: encn3260.dll
   Function: FUN_66496b60
   Address: 66496b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66496b60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_664c0a10(*(void **)(param_1 + 0x10),param_2);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(param_2);
  }
  return 0;
}


