/* Module: pngu3266.dll
   Function: FUN_6061ef90
   Address: 6061ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061ef90(undefined4 *param_1)

{
  void *pvVar1;
  
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete((void *)param_1[0xf]);
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    operator_delete((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    FUN_6061f6a0((int)pvVar1);
    operator_delete(pvVar1);
    param_1[0x1a] = 0;
  }
  FUN_6061ef30(param_1);
  return;
}


