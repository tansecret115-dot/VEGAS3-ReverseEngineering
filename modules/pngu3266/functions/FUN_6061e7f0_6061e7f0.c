/* Module: pngu3266.dll
   Function: FUN_6061e7f0
   Address: 6061e7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061e7f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[0x20a];
  *param_1 = &PTR_FUN_6062d298;
  while (iVar1 != 0) {
    param_1[0x20a] = *(undefined4 *)(iVar1 + 4);
    piVar2 = *(int **)(iVar1 + -4);
    if (piVar2 == (int *)0x0) {
      operator_delete((void *)(iVar1 + -4));
    }
    else {
      (**(code **)(*piVar2 + 0x10))(piVar2,(void *)(iVar1 + -4));
    }
    iVar1 = param_1[0x20a];
  }
  if ((undefined4 *)param_1[0x20c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20c])(1);
    param_1[0x20c] = 0;
  }
  FUN_60622020(param_1);
  return;
}


