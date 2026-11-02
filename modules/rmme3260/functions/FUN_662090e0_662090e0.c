/* Module: rmme3260.dll
   Function: FUN_662090e0
   Address: 662090e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_662090e0(char *param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  this = operator_new(0x56);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_66257370(this,param_1,0x8000,0);
  }
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if ((iVar2 == 0) && (piVar1[0x10] == 0)) {
    piVar1 = FUN_66209030(piVar1);
    return piVar1;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  return (int *)0x0;
}


