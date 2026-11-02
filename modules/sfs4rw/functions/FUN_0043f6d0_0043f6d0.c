/* Module: sfs4rw.dll
   Function: FUN_0043f6d0
   Address: 0043f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043f6d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      if (param_1[1] != 0) {
        uVar2 = *(uint *)(param_1[1] + 0xc) & 0x20;
      }
    }
    else if ((iVar1 == 1) || (iVar1 == 2)) {
      return 0;
    }
  }
  return uVar2;
}


