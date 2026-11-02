/* Module: rmbe3260.dll
   Function: FUN_6602ba50
   Address: 6602ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6602ba50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0xf8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_6602b870(puVar1);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 4);
    iVar2 = (**(code **)(*(int *)(*param_1 + 0xc) + 0x1c))((int *)(*param_1 + 0xc));
    InterlockedDecrement((LONG *)(*param_1 + 0x10));
    if (iVar2 < 0) {
      if (*param_1 != 0) {
        (*(code *)**(undefined4 **)(*param_1 + 4))(1);
      }
      *param_1 = 0;
      return iVar2;
    }
    return 0;
  }
  return -0x7ff8fff2;
}


