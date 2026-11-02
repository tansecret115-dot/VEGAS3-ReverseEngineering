/* Module: sfcdi.dll
   Function: FUN_5bf21150
   Address: 5bf21150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf21150(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[0x767];
  *param_1 = &PTR_LAB_5bf56560;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x767] = 0;
  }
  if ((uint *)param_1[0x76c] == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)param_1[0x76c];
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1[0x76c] + 8) + uVar3 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_5bf2b040((int *)param_1[0x76c]);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  return;
}


