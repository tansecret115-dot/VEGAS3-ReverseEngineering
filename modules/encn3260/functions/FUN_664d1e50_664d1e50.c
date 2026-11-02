/* Module: encn3260.dll
   Function: FUN_664d1e50
   Address: 664d1e50
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_664d1e50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_664d1c40();
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)_mbctype_exref[(param_1 & 0xff) + 1] & 4;
}


