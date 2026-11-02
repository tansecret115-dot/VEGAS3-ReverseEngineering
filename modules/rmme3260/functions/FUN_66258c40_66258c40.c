/* Module: rmme3260.dll
   Function: FUN_66258c40
   Address: 66258c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66258c40(void)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = DAT_6627f1b8;
  if ((DAT_6627f1b8 != (int *)0x0) &&
     (bVar2 = DAT_6627f1b8 != (int *)0x0, DAT_6627f1b8 = (int *)0x0, bVar2)) {
    FUN_66258a60(piVar1);
    operator_delete(piVar1);
  }
  return;
}


