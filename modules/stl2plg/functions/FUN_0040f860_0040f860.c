/* Module: stl2plg.dll
   Function: FUN_0040f860
   Address: 0040f860
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0040f860(int param_1)

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
  iVar2 = FUN_0040f610(param_1);
  return (bool)('\x01' - (iVar2 != 0));
}


