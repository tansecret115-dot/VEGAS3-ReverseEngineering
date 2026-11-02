/* Module: vidcap30.exe
   Function: FUN_00430e80
   Address: 00430e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00430e80(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xac) != 0) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      if (*piVar2 == param_2) {
        return *(undefined1 *)(uVar1 * 0x20 + 0xca + param_1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar1 < *(uint *)(param_1 + 0xac));
  }
  return 0;
}


