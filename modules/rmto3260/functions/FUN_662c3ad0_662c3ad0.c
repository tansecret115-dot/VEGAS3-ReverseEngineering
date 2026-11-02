/* Module: rmto3260.dll
   Function: FUN_662c3ad0
   Address: 662c3ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3ad0(int param_1,undefined2 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    *param_2 = *(undefined2 *)(param_1 + 0x4c);
    return 0;
  }
  *param_2 = 0;
  return 0x80040007;
}


