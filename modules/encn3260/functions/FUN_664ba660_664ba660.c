/* Module: encn3260.dll
   Function: FUN_664ba660
   Address: 664ba660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664ba660(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_664ba320(param_1);
  if (iVar1 != 0xb) {
    if ((*(uint *)(&DAT_664ef5e8 + iVar1 * 0x10) & 1) != 0) {
      iVar2 = *(int *)(&DAT_664ef5f4 + iVar1 * 0x10) * *(int *)(param_1 + 4);
      if ((*(uint *)(&DAT_664ef5e8 + iVar1 * 0x10) & 0x300) == 0) {
        return iVar2;
      }
      return -(iVar2 + 3U & 0xfffffffc);
    }
  }
  return 0;
}


