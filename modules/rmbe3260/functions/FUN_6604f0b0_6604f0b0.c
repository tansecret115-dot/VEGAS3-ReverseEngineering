/* Module: rmbe3260.dll
   Function: FUN_6604f0b0
   Address: 6604f0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604f0b0(undefined4 *param_1)

{
  void *pvVar1;
  
  if ((FILE *)*param_1 != (FILE *)0x0) {
    fclose((FILE *)*param_1);
  }
  pvVar1 = (void *)param_1[2];
  while (pvVar1 != (void *)0x0) {
    param_1[2] = *(undefined4 *)((int)pvVar1 + 0x79);
    if (pvVar1 != (void *)0x0) {
      FUN_6604eee0();
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)param_1[2];
  }
  return;
}


