/* Module: hhupd.exe
   Function: FUN_01006d00
   Address: 01006d00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01006d00(short param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(short *)((int)param_2 + 0xb2) == param_1) {
    return true;
  }
  iVar1 = FUN_01006d60(param_2);
  if (iVar1 == 0) {
    FUN_01007370((undefined4 *)*param_2,7,0);
    return false;
  }
  *(short *)((int)param_2 + 0xb2) = param_1;
  iVar1 = FUN_01006e50(param_2);
  return (bool)('\x01' - (iVar1 == 0));
}


