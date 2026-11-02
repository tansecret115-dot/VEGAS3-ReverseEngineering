/* Module: encn3260.dll
   Function: FUN_664c4bd0
   Address: 664c4bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_664c4bd0(short param_1)

{
  int *piVar1;
  
  piVar1 = FUN_664c7fe0(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_664c5000((uint)piVar1);
    (**(code **)(*piVar1 + 0x1c))();
  }
  return piVar1;
}


