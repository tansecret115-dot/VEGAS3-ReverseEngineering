/* Module: rmme3260.dll
   Function: FUN_66202810
   Address: 66202810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66202810(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_6626a538;
  param_1[1] = &PTR_LAB_6626a518;
  param_1[2] = &PTR_LAB_6626a500;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  iVar2 = param_1[5];
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0xd8) + 0x24))(iVar2 + 0xd8);
    param_1[5] = 0;
  }
  return;
}


