/* Module: encn3260.dll
   Function: FUN_664a30e0
   Address: 664a30e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_664a30e0(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
    return 0xffffffff;
  }
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8)) {
    return 0xffffffff;
  }
  if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) {
    return 1;
  }
  if (*(uint *)(param_1 + 0x54) < *(uint *)(param_2 + 0x54)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 0x54) < *(uint *)(param_1 + 0x54));
}


