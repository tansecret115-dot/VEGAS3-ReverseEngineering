/* Module: oggplug.dll
   Function: FUN_00443330
   Address: 00443330
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl FUN_00443330(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) {
    if (param_2 < *(int *)(param_1 + 0x34)) {
      if (param_2 < 0) {
        iVar3 = 0;
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x34)) {
          do {
            lVar5 = FUN_00443330(param_1,iVar4);
            iVar3 = iVar3 + (int)lVar5;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x34));
        }
        return (longlong)iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      uVar1 = *(uint *)(iVar3 + 8 + param_2 * 8);
      uVar2 = *(uint *)(iVar3 + param_2 * 8);
      return CONCAT44((*(int *)(iVar3 + 0xc + param_2 * 8) - *(int *)(iVar3 + 4 + param_2 * 8)) -
                      (uint)(uVar1 < uVar2),uVar1 - uVar2);
    }
  }
  return -0x83;
}


