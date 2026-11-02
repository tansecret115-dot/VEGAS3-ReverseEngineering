/* Module: rmme3260.dll
   Function: RMClose
   Address: 66201630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RMClose(void *param_1)

{
                    /* 0x1630  18  RMClose */
  if (param_1 == (void *)0x0) {
    return 0x80004005;
  }
  FUN_66201e40((int)param_1);
  operator_delete(param_1);
  return 0;
}


