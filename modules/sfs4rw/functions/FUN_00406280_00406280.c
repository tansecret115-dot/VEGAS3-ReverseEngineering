/* Module: sfs4rw.dll
   Function: FUN_00406280
   Address: 00406280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406280(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00406090(param_1);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(*(int *)(DAT_004a8134 + 8) + iVar1 * 4);
  if (param_2 == 1) {
    return *(undefined4 *)(iVar1 + 0x214);
  }
  if (param_2 == 2) {
    return *(undefined4 *)(iVar1 + 0x218);
  }
  if (param_2 != 3) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x21c);
}


