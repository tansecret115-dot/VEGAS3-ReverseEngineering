/* Module: sftrans1.dll
   Function: FUN_00544520
   Address: 00544520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544520(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != 1) {
    if (param_2 != 2) {
      if (param_2 != 3) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x14) = 3;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 2;
  }
  return 0;
}


