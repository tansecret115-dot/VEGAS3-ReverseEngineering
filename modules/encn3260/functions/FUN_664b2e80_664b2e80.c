/* Module: encn3260.dll
   Function: FUN_664b2e80
   Address: 664b2e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b2e80(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_664df400;
  pvVar2 = DAT_664f08e8;
  DAT_664f08ec = DAT_664f08ec + -1;
  if ((DAT_664f08ec == 0) && (DAT_664f08e8 != (void *)0x0)) {
    FUN_664b09b0((int)DAT_664f08e8);
    operator_delete(pvVar2);
    DAT_664f08e8 = (void *)0x0;
  }
  if (param_1[0x465] != 0) {
    FUN_664b4910(param_1 + 0x58f);
    FUN_664b58d0(param_1 + 0x12);
    param_1[0x465] = 0;
  }
  FUN_664b3900((int)param_1);
  FUN_664b3a70((int)param_1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  FUN_664b0020();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  DeleteObject((HGDIOBJ)param_1[0x589]);
  DeleteObject((HGDIOBJ)param_1[0x58a]);
  FUN_664ba950((int *)((int)param_1 + 0x1682));
  FUN_664b4880(param_1 + 0x58f);
  FUN_664bb3e0(param_1 + 0x584);
  return;
}


