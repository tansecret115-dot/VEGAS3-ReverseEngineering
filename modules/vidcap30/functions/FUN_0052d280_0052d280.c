/* Module: vidcap30.exe
   Function: FUN_0052d280
   Address: 0052d280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052d280(int param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = (int *)(param_1 + 0x7d);
  do {
    if (*piVar1 != 0) {
      *(undefined1 *)(*piVar1 + 0x80) = param_2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)(param_1 + 0x9d);
  iVar2 = 4;
  do {
    if (piVar1[-4] != 0) {
      *(undefined1 *)(piVar1[-4] + 0x111) = param_2;
    }
    if (*piVar1 != 0) {
      *(undefined1 *)(*piVar1 + 0x111) = param_2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


