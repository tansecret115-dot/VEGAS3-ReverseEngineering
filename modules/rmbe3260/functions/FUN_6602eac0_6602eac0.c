/* Module: rmbe3260.dll
   Function: FUN_6602eac0
   Address: 6602eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602eac0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[8];
  *param_1 = &PTR_FUN_66067a20;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) && (param_1[6] != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    (**(code **)(*(int *)param_1[6] + 0x14))((int *)param_1[6],*(undefined4 *)(param_1[8] + 8));
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[2] = 0;
  }
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[4] = 0;
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[6] = 0;
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[7] = 0;
  }
  piVar2 = (int *)param_1[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[8] = 0;
  }
  return;
}


