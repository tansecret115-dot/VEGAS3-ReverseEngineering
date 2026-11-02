/* Module: rmto3260.dll
   Function: FUN_662d2f80
   Address: 662d2f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d2f80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_66307210;
  param_1[4] = &PTR_LAB_663071c0;
  iVar2 = *(int *)((int)param_1 + 0x6a) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x66) + iVar2 * 4);
      FUN_662ed6b0((int *)((int)param_1 + 0x66),iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xe] = 0;
  }
  FUN_662d3090((int)param_1);
  FUN_662d3020((int)param_1);
  piVar1 = *(int **)((int)param_1 + 0x5e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x5a);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  FUN_662ed460((undefined4 *)((int)param_1 + 0x66));
  FUN_662ef0f0(param_1 + 0xf);
  *param_1 = &PTR_FUN_66306400;
  return;
}


