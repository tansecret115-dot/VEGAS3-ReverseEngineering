/* Module: rmbe3260.dll
   Function: FUN_6604e620
   Address: 6604e620
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_6604e620(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = FUN_6604fb50(0);
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(param_1,0,1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x18))();
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  return -1 < iVar2;
}


