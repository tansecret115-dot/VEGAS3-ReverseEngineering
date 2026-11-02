/* Module: sfxpfx1.dll
   Function: FUN_5c976c21
   Address: 5c976c21
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c976c21(int param_1,short *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (short *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    if (*(short **)(param_1 + 0x30) == (short *)0x0) {
      *param_2 = 0;
    }
    else {
      FUN_5c97b70c(param_2,*(short **)(param_1 + 0x30),0x80);
    }
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


