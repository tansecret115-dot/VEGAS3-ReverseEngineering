/* Module: rmbe3260.dll
   Function: FUN_66046e30
   Address: 66046e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66046e30(int *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = param_1[3];
  *param_1 = (int)&PTR_FUN_660681b0;
  while (iVar1 != 0) {
    pvVar2 = (void *)FUN_66058860(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_6604ad40((int)pvVar2);
      operator_delete(pvVar2);
    }
    iVar1 = param_1[3];
  }
  thunk_FUN_6605c880(param_1 + 4);
  FUN_660587f0(param_1);
  return;
}


