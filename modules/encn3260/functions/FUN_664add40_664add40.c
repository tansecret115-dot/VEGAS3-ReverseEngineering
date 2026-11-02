/* Module: encn3260.dll
   Function: FUN_664add40
   Address: 664add40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664add40(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar1 != 0))
  {
    FUN_664ae0f0(iVar1);
  }
  return 0;
}


