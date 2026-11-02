/* Module: encn3260.dll
   Function: FUN_664c20b0
   Address: 664c20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c20b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


