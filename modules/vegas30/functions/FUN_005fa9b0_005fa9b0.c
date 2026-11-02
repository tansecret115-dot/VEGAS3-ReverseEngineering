/* Module: vegas30.exe
   Function: FUN_005fa9b0
   Address: 005fa9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa9b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0xc) < 0) {
    return 0x80004005;
  }
  uVar2 = 0x80004005;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                            (*(int **)(param_1 + 0x10),*(int *)(param_1 + 0xc));
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,unaff_retaddr);
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  return uVar2;
}


