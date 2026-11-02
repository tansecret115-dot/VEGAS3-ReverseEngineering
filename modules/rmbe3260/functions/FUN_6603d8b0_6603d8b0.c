/* Module: rmbe3260.dll
   Function: FUN_6603d8b0
   Address: 6603d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603d8b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  
  piVar1 = param_1 + 5;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[9];
    }
    if (iVar3 == 0) break;
    pvVar4 = (void *)FUN_6605c4d0(piVar1);
    operator_delete(pvVar4);
  }
  puVar2 = (undefined4 *)param_1[10];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_66056360(puVar2);
    operator_delete(puVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  FUN_6605c430(piVar1);
  FUN_6605c430(param_1);
  return;
}


