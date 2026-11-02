/* Module: sftrans1.dll
   Function: FUN_0043fc10
   Address: 0043fc10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043fc10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,0x2c8,0);
  if (*(wchar_t **)(param_2 + 0x2d0) == (wchar_t *)0x0) {
    iVar4 = 0;
  }
  else {
    sVar3 = wcslen(*(wchar_t **)(param_2 + 0x2d0));
    iVar4 = sVar3 * 2 + 2;
  }
  piVar1 = (int *)(param_2 + 0x2c8);
  *piVar1 = iVar4;
  if ((((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,piVar1,4,0), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2 + 0x2cc,4,0), -1 < iVar2)) &&
     (*piVar1 != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)(param_2 + 0x2d0),*piVar1,0);
    return iVar2;
  }
  return iVar2;
}


