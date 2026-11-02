/* Module: rmto3260.dll
   Function: FUN_662f95b0
   Address: 662f95b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f95b0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = param_1[3];
  *param_1 = (int)&PTR_FUN_66307ee0;
  while (iVar1 != 0) {
    pvVar2 = (void *)FUN_66301900(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_662fe820((int)pvVar2);
      operator_delete(pvVar2);
    }
    iVar1 = param_1[3];
  }
  thunk_FUN_662ee7c0(param_1 + 4);
  FUN_66301890(param_1);
  return;
}


