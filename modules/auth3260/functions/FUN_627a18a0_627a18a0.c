/* Module: auth3260.dll
   Function: FUN_627a18a0
   Address: 627a18a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_627a18a0(void *param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_627a1700(puVar1);
  }
  FUN_627a17c0(puVar1,param_3);
  FUN_627a1770(param_2,puVar1);
  FUN_627a19c0(param_1,puVar1);
  FUN_627a19d0();
  return param_1;
}


