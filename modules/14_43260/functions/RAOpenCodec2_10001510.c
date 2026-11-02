/* Module: 14_43260.dll
   Function: RAOpenCodec2
   Address: 10001510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAOpenCodec2(undefined4 *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x1510  10  RAOpenCodec2 */
  puVar1 = operator_new(0x19e6);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_10001120(puVar1);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = puVar1;
  }
  return 0;
}


