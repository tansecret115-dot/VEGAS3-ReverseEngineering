/* Module: rmbe3260.dll
   Function: FUN_6600e820
   Address: 6600e820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6600e820(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x74);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_6600e6c0(puVar1);
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


