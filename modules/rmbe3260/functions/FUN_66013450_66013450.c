/* Module: rmbe3260.dll
   Function: FUN_66013450
   Address: 66013450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66013450(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x50);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_660133a0(puVar1);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
    InterlockedDecrement((LONG *)(*param_1 + 4));
    if (iVar2 < 0) {
      if ((int *)*param_1 != (int *)0x0) {
        (**(code **)(*(int *)*param_1 + 0xc))(1);
      }
      *param_1 = 0;
      return iVar2;
    }
    return 0;
  }
  return -0x7ff8fff2;
}


