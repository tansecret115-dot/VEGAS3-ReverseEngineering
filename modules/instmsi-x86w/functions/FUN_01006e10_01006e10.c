/* Module: InstMsi-x86w.exe
   Function: FUN_01006e10
   Address: 01006e10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01006e10(short param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(short *)((int)param_2 + 0xb2) == param_1) {
    return true;
  }
  iVar1 = FUN_01006e70(param_2);
  if (iVar1 == 0) {
    FUN_01007480((undefined4 *)*param_2,7,0);
    return false;
  }
  *(short *)((int)param_2 + 0xb2) = param_1;
  iVar1 = FUN_01006f60(param_2);
  return (bool)('\x01' - (iVar1 == 0));
}


