/* Module: encn3260.dll
   Function: FUN_664afcb0
   Address: 664afcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664afcb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_6649f610(*(int *)(param_1 + 0x3b));
  if (iVar1 == 0) {
    return 0x80004005;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  return 0;
}


