/* Module: sftrans1.dll
   Function: FUN_004cd2a0
   Address: 004cd2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004cd2a0(int *param_1)

{
  if ((param_1 != (int *)0x0) && ((param_1[2] != *param_1 || (param_1[3] != param_1[1])))) {
    return 0;
  }
  return 1;
}


