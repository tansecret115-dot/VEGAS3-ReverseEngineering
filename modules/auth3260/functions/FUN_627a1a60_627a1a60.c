/* Module: auth3260.dll
   Function: FUN_627a1a60
   Address: 627a1a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_627a1a60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_627a1e50(puVar1);
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


