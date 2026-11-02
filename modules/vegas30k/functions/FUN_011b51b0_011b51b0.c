/* Module: vegas30k.dll
   Function: FUN_011b51b0
   Address: 011b51b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_011b51b0(int param_1,uint param_2)

{
  undefined1 *puVar1;
  
  *(uint *)(param_1 + 0xc) = param_2;
  if (param_2 < 0x400) {
    return &DAT_80070057;
  }
  puVar1 = (undefined1 *)_SfList_CreateExZ_32(param_1 + 0x10,0x1c,0x10,0x10,0x40000004,0,0,0);
  return puVar1;
}


