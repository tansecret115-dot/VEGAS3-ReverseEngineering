/* Module: rmto3260.dll
   Function: FUN_662dd490
   Address: 662dd490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dd490(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = (int *)(param_1 + -0x10);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 4;
  }
  *param_2 = iVar2;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(undefined4 *)(param_1 + 0x18) = 1;
  return 0;
}


