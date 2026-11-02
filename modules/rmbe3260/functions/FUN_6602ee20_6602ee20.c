/* Module: rmbe3260.dll
   Function: FUN_6602ee20
   Address: 6602ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602ee20(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_FUN_66067a60;
  while ((piVar1 != (int *)0x0 && (0 < piVar1[4]))) {
    pvVar2 = (void *)FUN_6605c4d0(piVar1);
    operator_delete(pvVar2);
    piVar1 = (int *)param_1[3];
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  return;
}


