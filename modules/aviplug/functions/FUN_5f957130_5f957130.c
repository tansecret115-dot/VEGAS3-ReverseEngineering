/* Module: aviplug.dll
   Function: FUN_5f957130
   Address: 5f957130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f957130(int param_1)

{
  FUN_5f951ac0((int *)(param_1 + 0x3c));
  if (*(LPCVOID *)(param_1 + 0x58) != (LPCVOID)0x0) {
    FUN_5f97a480(*(LPCVOID *)(param_1 + 0x58),0);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 0;
}


