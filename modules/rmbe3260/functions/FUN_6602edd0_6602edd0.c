/* Module: rmbe3260.dll
   Function: FUN_6602edd0
   Address: 6602edd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602edd0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar1 != 0))
  {
    FUN_6602f180(iVar1);
  }
  return 0;
}


