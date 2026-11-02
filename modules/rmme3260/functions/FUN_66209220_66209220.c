/* Module: rmme3260.dll
   Function: FUN_66209220
   Address: 66209220
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_66209220(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(0x2de);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_6620e550(puVar1);
  }
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 100))();
  }
  if ((iVar3 != 0) && (piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


