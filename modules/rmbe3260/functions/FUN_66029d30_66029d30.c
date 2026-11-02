/* Module: rmbe3260.dll
   Function: FUN_66029d30
   Address: 66029d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66029d30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0xc;
  *param_1 = &PTR_FUN_660676c0;
  param_1[4] = &PTR_LAB_66067690;
  param_1[5] = &PTR_LAB_66067678;
  piVar3 = param_1 + 0x10;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)param_1[0xf];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0xf] = 0;
  }
  piVar3 = (int *)param_1[0x1c];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x1c] = 0;
  }
  piVar3 = (int *)param_1[0xe];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0xe] = 0;
  }
  FUN_6605b770(param_1 + 7);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


