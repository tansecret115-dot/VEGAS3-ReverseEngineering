/* Module: rmme3260.dll
   Function: RMInit
   Address: 66201580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RMInit(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* 0x1580  19  RMInit */
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  uVar2 = FUN_66201660(puVar1);
  return uVar2;
}


