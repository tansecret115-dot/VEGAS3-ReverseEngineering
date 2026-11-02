/* Module: rmme3260.dll
   Function: FUN_662011f0
   Address: 662011f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662011f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_6626a3b8;
  if (param_1[0x29] != 0) {
    FUN_66261540(param_1[0x29]);
    puVar1 = (undefined4 *)param_1[0x29];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66260190(puVar1);
      operator_delete(puVar1);
    }
    param_1[0x29] = 0;
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_66232ae0(param_1[3]);
    (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3]);
    param_1[3] = 0;
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[6] = 0;
  }
  return;
}


