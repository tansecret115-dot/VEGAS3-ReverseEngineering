/* Module: sfcd.cdd
   Function: FUN_00408d30
   Address: 00408d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408d30(undefined4 param_1,HSFCD__ *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x160);
  FUN_00408b70(param_2);
  lVar2 = FUN_00408c50(param_2);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1d4) = 1;
  }
  return;
}


