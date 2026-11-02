/* Module: encn3260.dll
   Function: FUN_664c5570
   Address: 664c5570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c5570(void)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = DAT_664f29b0;
  if ((DAT_664f29b0 != (int *)0x0) &&
     (bVar2 = DAT_664f29b0 != (int *)0x0, DAT_664f29b0 = (int *)0x0, bVar2)) {
    FUN_664c5390(piVar1);
    operator_delete(piVar1);
  }
  return;
}


