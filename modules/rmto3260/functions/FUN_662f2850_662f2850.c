/* Module: rmto3260.dll
   Function: FUN_662f2850
   Address: 662f2850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f2850(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    FUN_662f23c0((int)pvVar2);
    operator_delete(pvVar2);
    param_1[1] = 0;
  }
  return;
}


