/* Module: enlv3260.dll
   Function: FUN_661d1070
   Address: 661d1070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d1070(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &PTR_FUN_661d50a0;
  FUN_661d1590(param_1,param_1);
  piVar3 = param_1 + 0xf;
  iVar2 = 0x19;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)param_1[0xe];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0xe] = 0;
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[2] = 0;
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[1] = 0;
  }
  return;
}


