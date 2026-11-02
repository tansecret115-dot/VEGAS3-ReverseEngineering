/* Module: sfcdi.dll
   Function: FUN_5bf055e0
   Address: 5bf055e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf055e0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_5bf18ae0(*(int *)(param_1 + 0x24));
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(*(int *)(param_1 + 0x28) + 0x24))) {
    iVar2 = 0;
  }
  return iVar2 == 0;
}


