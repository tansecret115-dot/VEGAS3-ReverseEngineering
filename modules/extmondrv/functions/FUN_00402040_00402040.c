/* Module: extmondrv.dll
   Function: FUN_00402040
   Address: 00402040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402040(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  piVar1 = (int *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *piVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_00455ccc,piVar1);
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return 0;
}


