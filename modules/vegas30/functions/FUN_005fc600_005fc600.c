/* Module: vegas30.exe
   Function: FUN_005fc600
   Address: 005fc600
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005fc600(int param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = Transport_GetStatus();
  if (param_1 == 1) {
    if (param_2 != 0) {
      uVar2 = FUN_005fc6b0(1);
      return uVar2;
    }
    return (uint)((uVar1 & 0x70000) == 0);
  }
  if ((param_1 == 2) && (param_2 != 0)) {
    return (uint)((uVar1 & 0xc00000) == 0);
  }
  return 1;
}


