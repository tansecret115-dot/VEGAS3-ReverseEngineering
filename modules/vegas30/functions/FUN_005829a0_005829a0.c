/* Module: vegas30.exe
   Function: FUN_005829a0
   Address: 005829a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005829a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = _SfUnregisterClass_8(param_1,*(undefined4 *)(DAT_0065a054 + 8));
  return (-(uint)(iVar1 != 0) & 0x7ff8ffa9) + 0x80070057;
}


