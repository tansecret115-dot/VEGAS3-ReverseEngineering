/* Module: vegas30k.dll
   Function: FUN_011b8400
   Address: 011b8400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b8400(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  *param_1 = &PTR_LAB_011eb940;
  if (param_1[5] != 0) {
    uVar3 = 0;
    if (param_1[4] != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1[5] + 8) + uVar3 * 4);
        if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x328), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar1 + 0x328) = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[4]);
    }
    _SfList_Destroy_4(param_1[5]);
    param_1[5] = 0;
    param_1[4] = 0;
  }
  FUN_011b80a0();
  return;
}


