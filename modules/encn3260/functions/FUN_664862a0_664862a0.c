/* Module: encn3260.dll
   Function: FUN_664862a0
   Address: 664862a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_664862a0(int *param_1)

{
  (**(code **)(*param_1 + 4))(param_1);
  if (param_1 != (int *)0x30) {
    return param_1 + 3;
  }
  return (int *)0x0;
}


