/* Module: rmbe3260.dll
   Function: FUN_660265c0
   Address: 660265c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660265c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x20) + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x24);
  FUN_6605cdc0((int *)(param_1 + 0x20),0,0xffffffff);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}


