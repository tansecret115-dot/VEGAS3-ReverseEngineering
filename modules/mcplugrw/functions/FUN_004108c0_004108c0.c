/* Module: mcplugrw.dll
   Function: FUN_004108c0
   Address: 004108c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004108c0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x7cc);
  *(undefined4 *)((int)this + 0x7cc) = param_1;
  return uVar1;
}


