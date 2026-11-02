/* Module: rmme3260.dll
   Function: FUN_662582c0
   Address: 662582c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_662582c0(short param_1)

{
  int *piVar1;
  
  piVar1 = FUN_6625c330(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_662586d0((uint)piVar1);
    (**(code **)(*piVar1 + 0x1c))();
  }
  return piVar1;
}


