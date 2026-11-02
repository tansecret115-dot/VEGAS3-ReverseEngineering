/* Module: rmme3260.dll
   Function: FUN_66245470
   Address: 66245470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66245470(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_6627d080;
  DAT_6627d084 = DAT_6627d084 + -1;
  if (DAT_6627d084 == 0) {
    if (DAT_6627d080 != (void *)0x0) {
      FUN_66245e10((int)DAT_6627d080);
      operator_delete(pvVar1);
    }
    DAT_6627d080 = (void *)0x0;
  }
  return;
}


