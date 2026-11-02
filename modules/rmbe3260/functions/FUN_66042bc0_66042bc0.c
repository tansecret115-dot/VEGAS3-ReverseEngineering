/* Module: rmbe3260.dll
   Function: FUN_66042bc0
   Address: 66042bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66042bc0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  if (((int *)param_1[1] != (int *)0x0) && (param_1[3] != 0)) {
    iVar1 = *(int *)(param_1[3] + 4);
    if (iVar1 != 0) {
      (**(code **)(*(int *)param_1[1] + 0x1c))(iVar1);
    }
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[4];
    while (iVar1 != 0) {
      pvVar3 = (void *)FUN_6605c4d0(piVar2);
      (**(code **)(*(int *)*param_1 + 0x1c))(*(undefined4 *)((int)pvVar3 + 4));
      operator_delete(pvVar3);
      piVar2 = (int *)param_1[2];
      iVar1 = piVar2[4];
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
    }
    param_1[2] = 0;
  }
  return;
}


