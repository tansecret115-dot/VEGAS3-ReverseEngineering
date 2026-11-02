/* Module: gifplug.dll
   Function: FUN_5f6c4c40
   Address: 5f6c4c40
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f6c4c40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0x42444654) {
    if (((uVar1 != 0x42444653) && (uVar1 != 0)) && (uVar1 != 3)) {
      return true;
    }
  }
  else if (uVar1 != 0x53474653) {
    return true;
  }
  iVar2 = FUN_5f6c49f0(param_1);
  return (bool)('\x01' - (iVar2 != 0));
}


