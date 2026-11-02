/* Module: rmme3260.dll
   Function: RMACreateRM2Converter2
   Address: 662025c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RMACreateRM2Converter2(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x25c0  16  RMACreateRM2Converter2 */
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_66202780(puVar1);
  }
  *param_1 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x8007000e;
}


