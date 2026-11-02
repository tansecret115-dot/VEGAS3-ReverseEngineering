/* Module: pncrt.dll
   Function: longjmpex
   Address: 78021fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */
/* longjmpex */

void __cdecl longjmpex(int param_1)

{
  PVOID pvVar1;
  int iVar2;
  
                    /* 0x21fd0  330  _longjmpex */
  pvVar1 = *(PVOID *)(param_1 + 0x18);
  if (pvVar1 != ExceptionList) {
    global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = FUN_78023550();
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x20) != 0x56433230)) {
      local_unwind2((int)pvVar1,*(int *)(param_1 + 0x1c));
    }
    else if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
  }
  FUN_7800cca6();
                    /* WARNING: Could not recover jumptable at 0x78023035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


