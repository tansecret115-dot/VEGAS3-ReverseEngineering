/* Module: mcplug.dll
   Function: FUN_004055e0
   Address: 004055e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004055e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_004768d8;
  param_1[1] = &PTR_LAB_004768c4;
  param_1[2] = &PTR_LAB_004768a0;
  param_1[3] = &PTR_LAB_0047688c;
  param_1[4] = &PTR_LAB_0047687c;
  FUN_00407070(param_1,param_1[8]);
  piVar2 = param_1 + 10;
  iVar1 = 7;
  do {
    FUN_00407070(param_1,*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


