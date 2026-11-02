/* Module: rmme3260.dll
   Function: FUN_662091d0
   Address: 662091d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_662091d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(0x118);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_6621d2d0(puVar1);
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


