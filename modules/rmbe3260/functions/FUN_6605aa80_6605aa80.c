/* Module: rmbe3260.dll
   Function: FUN_6605aa80
   Address: 6605aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605aa80(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0x4025c;
  }
  piVar2 = (int *)FUN_6605c600(*(int *)(param_1 + 0x3c));
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return 0x4025c;
  }
  iVar3 = ftol();
  *param_2 = iVar3 + *(int *)(iVar1 + 0xc);
  return 0;
}


