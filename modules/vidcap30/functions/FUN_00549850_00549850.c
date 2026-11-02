/* Module: vidcap30.exe
   Function: FUN_00549850
   Address: 00549850
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00549850(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 100) & 0x800) == 0) goto LAB_0054987c;
  }
  else if ((*(uint *)(param_1 + 100) & 0x300) != 0x300) goto LAB_0054987c;
  bVar1 = false;
LAB_0054987c:
  FUN_0052ad30(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_00549730(&param_1);
  return iVar3 != *(int *)(iVar2 + 0x108);
}


