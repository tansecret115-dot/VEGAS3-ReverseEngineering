/* Module: pncrt.dll
   Function: FUN_78033030
   Address: 78033030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78033030(int param_1,int param_2)

{
  uint uVar1;
  
  if (0 < param_2) {
    do {
      FUN_78033200((uint *)(param_1 + 8),(byte)(*(uint *)(param_1 + 4) >> 0xb) & 7,3);
      uVar1 = *(uint *)(param_1 + 4);
      param_2 = param_2 + -1;
      *(uint *)(param_1 + 4) = ((uVar1 & 0xfffff800) + 0x800 ^ uVar1) & 0x3800 ^ uVar1;
    } while (param_2 != 0);
    return;
  }
  if (param_2 < 0) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar1 = ((uVar1 & 0xfffff800) - 1 ^ uVar1) & 0x3800 ^ uVar1;
    *(uint *)(param_1 + 4) = uVar1;
    FUN_78033200((uint *)(param_1 + 8),(byte)(uVar1 >> 0xb) & 7,0);
  }
  return;
}


