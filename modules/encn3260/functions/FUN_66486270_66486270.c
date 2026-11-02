/* Module: encn3260.dll
   Function: FUN_66486270
   Address: 66486270
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_66486270(int *param_1)

{
  (**(code **)(*param_1 + 4))(param_1);
  if (param_1 != (int *)0x30) {
    return param_1 + 2;
  }
  return (int *)0x0;
}


