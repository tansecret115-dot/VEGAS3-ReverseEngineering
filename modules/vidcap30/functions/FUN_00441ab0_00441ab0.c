/* Module: vidcap30.exe
   Function: FUN_00441ab0
   Address: 00441ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441ab0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1c68);
  if (param_1 < *piVar1) {
    uVar2 = *(undefined4 *)(piVar1[2] + param_1 * 4);
  }
  return uVar2;
}


