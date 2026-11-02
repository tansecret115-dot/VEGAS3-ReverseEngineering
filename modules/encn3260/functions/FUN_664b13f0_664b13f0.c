/* Module: encn3260.dll
   Function: FUN_664b13f0
   Address: 664b13f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b13f0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_664df3d8;
  param_1[1] = &PTR_LAB_664df3a0;
  FUN_664b2a20((int)param_1);
  pvVar2 = DAT_664f08d0;
  DAT_664f08d4 = DAT_664f08d4 + -1;
  if ((DAT_664f08d4 == 0) && (DAT_664f08d0 != (void *)0x0)) {
    FUN_664b09b0((int)DAT_664f08d0);
    operator_delete(pvVar2);
    DAT_664f08d0 = (void *)0x0;
  }
  FUN_664b1460((int)param_1);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  FUN_664ba950((int *)((int)param_1 + 0x4fa));
  return;
}


