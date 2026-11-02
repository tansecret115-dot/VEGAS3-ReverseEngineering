/* Module: encn3260.dll
   Function: FUN_664ba740
   Address: 664ba740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664ba740(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_664ba320(param_1);
  if (((((iVar1 == 0xb) || (((&DAT_664ef5e8)[iVar1 * 0x10] & 1) == 0)) ||
       (*(int *)(param_1 + 4) < 1)) ||
      ((*(int *)(param_1 + 8) < 1 || (*(short *)(param_1 + 0xc) != 1)))) ||
     (uVar2 = FUN_664ba6b0(iVar1,*(int *)(param_1 + 4),*(int *)(param_1 + 8)),
     *(uint *)(param_1 + 0x14) != uVar2)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(ushort *)(param_1 + 0xe) < 9)) {
    if ((uint)(1 << ((byte)*(ushort *)(param_1 + 0xe) & 0x1f)) < *(uint *)(param_1 + 0x20)) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x24)) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      return 0;
    }
  }
  return 1;
}


