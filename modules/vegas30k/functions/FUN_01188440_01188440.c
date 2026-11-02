/* Module: vegas30k.dll
   Function: FUN_01188440
   Address: 01188440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01188440(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_011ea654;
  FUN_01199570();
  piVar1 = (int *)param_1[0x12e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = param_1[0x18e];
  while (iVar2 != 0) {
    piVar1 = *(int **)param_1[0x18e];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    iVar2 = *(int *)((int)param_1[0x18e] + 100);
    free((void *)param_1[0x18e]);
    param_1[0x18e] = iVar2;
  }
  param_1[0x12e] = 0;
  FUN_011992f0();
  return;
}


