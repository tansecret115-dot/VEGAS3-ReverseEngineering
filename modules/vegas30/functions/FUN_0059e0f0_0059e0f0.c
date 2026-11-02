/* Module: vegas30.exe
   Function: FUN_0059e0f0
   Address: 0059e0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0059e0f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*DAT_0065ad10;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((-1 < param_1) && (param_1 <= iVar2 + -1)) {
    return *(undefined4 *)(piVar1[2] + param_1 * 4);
  }
  return 0;
}


