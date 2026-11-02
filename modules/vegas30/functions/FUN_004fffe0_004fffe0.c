/* Module: vegas30.exe
   Function: FUN_004fffe0
   Address: 004fffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fffe0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x180);
  piVar2 = *(int **)(param_1 + 0x178);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if ((-1 < iVar1) && (iVar1 <= iVar3 + -1)) {
    return *(undefined4 *)(piVar2[2] + iVar1 * 4);
  }
  return 0;
}


