/* Module: oggplug.dll
   Function: FUN_004433a0
   Address: 004433a0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl FUN_004433a0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) {
    if (param_2 < *(int *)(param_1 + 0x34)) {
      if (param_2 < 0) {
        lVar3 = 0;
        iVar2 = 0;
        lVar1 = 0;
        if (0 < *(int *)(param_1 + 0x34)) {
          do {
            lVar3 = FUN_004433a0(param_1,iVar2);
            lVar3 = lVar3 + lVar1;
            iVar2 = iVar2 + 1;
            lVar1 = lVar3;
          } while (iVar2 < *(int *)(param_1 + 0x34));
        }
        return lVar3;
      }
      return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4 + param_2 * 8),
                      *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 8));
    }
  }
  return -0x83;
}


