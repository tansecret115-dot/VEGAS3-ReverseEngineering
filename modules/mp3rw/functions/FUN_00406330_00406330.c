/* Module: mp3rw.dll
   Function: FUN_00406330
   Address: 00406330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406330(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00406130(param_1,param_2);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(*(int *)(DAT_004a8134 + 8) + iVar1 * 4);
  if (param_3 == 1) {
    return *(undefined4 *)(iVar1 + 0x214);
  }
  if (param_3 == 2) {
    return *(undefined4 *)(iVar1 + 0x218);
  }
  if (param_3 != 3) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x21c);
}


