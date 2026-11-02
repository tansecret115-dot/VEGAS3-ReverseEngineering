/* Module: rmme3260.dll
   Function: FUN_66202150
   Address: 66202150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66202150(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_6626a438;
  param_1[1] = &PTR_LAB_6626a428;
  param_1[2] = &PTR_LAB_6626a410;
  param_1[3] = &PTR_LAB_6626a3f8;
  param_1[4] = &PTR_LAB_6626a3e0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  iVar2 = param_1[8] + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[7] + iVar2 * 4);
      FUN_6624ffe0(param_1 + 7,iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  FUN_6624fd90(param_1 + 7);
  return;
}


