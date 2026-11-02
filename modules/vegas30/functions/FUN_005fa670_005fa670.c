/* Module: vegas30.exe
   Function: FUN_005fa670
   Address: 005fa670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa670(int param_1)

{
  int *piVar1;
  undefined4 unaff_EDI;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),1);
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10),0);
  uVar2 = 0x80004005;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,unaff_EDI);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  return uVar2;
}


