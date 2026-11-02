/* Module: sfcdi.dll
   Function: FUN_5bf43890
   Address: 5bf43890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf43890(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  puVar2 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0x28;
  param_1[2] = &LAB_5bf437f0;
  param_1[3] = FUN_5bf43770;
  param_1[4] = &LAB_5bf43530;
  param_1[5] = &LAB_5bf42e60;
  param_1[6] = FUN_5bf426b0;
  param_1[7] = FUN_5bf42e10;
  param_1[8] = &LAB_5bf49e50;
  return 0;
}


