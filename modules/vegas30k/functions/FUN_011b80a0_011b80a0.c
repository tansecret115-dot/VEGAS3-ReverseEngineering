/* Module: vegas30k.dll
   Function: FUN_011b80a0
   Address: 011b80a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b80a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_011eb8fc;
  if (param_1[5] != 0) {
    uVar2 = 0;
    if (param_1[4] != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1[5] + 8) + uVar2 * 4);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x218) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[4]);
    }
    _SfList_Destroy_4(param_1[5]);
    param_1[5] = 0;
  }
  return;
}


