/* Module: rmme3260.dll
   Function: FUN_6624fae0
   Address: 6624fae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624fae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_6624f7a0(param_1);
  if (iVar1 != 0xb) {
    if ((*(uint *)(&DAT_6627c0d0 + iVar1 * 0x10) & 1) != 0) {
      iVar2 = *(int *)(&DAT_6627c0dc + iVar1 * 0x10) * *(int *)(param_1 + 4);
      if ((*(uint *)(&DAT_6627c0d0 + iVar1 * 0x10) & 0x300) == 0) {
        return iVar2;
      }
      return -(iVar2 + 3U & 0xfffffffc);
    }
  }
  return 0;
}


