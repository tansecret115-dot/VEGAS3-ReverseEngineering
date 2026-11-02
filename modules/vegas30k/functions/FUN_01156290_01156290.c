/* Module: vegas30k.dll
   Function: FUN_01156290
   Address: 01156290
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01156290(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 100) & 0x800) == 0) goto LAB_011562bc;
  }
  else if ((*(uint *)(param_1 + 100) & 0x300) != 0x300) goto LAB_011562bc;
  bVar1 = false;
LAB_011562bc:
  FUN_01126f90(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_01156170(&param_1);
  return iVar3 != *(int *)(iVar2 + 0x108);
}


