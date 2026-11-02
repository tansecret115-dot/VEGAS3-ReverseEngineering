/* Module: encn3260.dll
   Function: FUN_664c7fe0
   Address: 664c7fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_664c7fe0(short param_1)

{
  void *this;
  int *piVar1;
  
  this = operator_new(200);
  if (this != (void *)0x0) {
    piVar1 = FUN_664c8010(this,param_1);
    return piVar1;
  }
  return (int *)0x0;
}


