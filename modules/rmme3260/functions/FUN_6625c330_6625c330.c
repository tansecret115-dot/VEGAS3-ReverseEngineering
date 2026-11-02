/* Module: rmme3260.dll
   Function: FUN_6625c330
   Address: 6625c330
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_6625c330(short param_1)

{
  void *this;
  int *piVar1;
  
  this = operator_new(200);
  if (this != (void *)0x0) {
    piVar1 = FUN_6625c360(this,param_1);
    return piVar1;
  }
  return (int *)0x0;
}


