/* Module: encn3260.dll
   Function: FUN_664b6b70
   Address: 664b6b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6b70(uint *param_1,uint *param_2)

{
  if (((*param_1 & 1) != 0) && ((*param_1 & 0x100) != 0)) {
    *param_2 = param_1[2];
    return 0;
  }
  *param_2 = 0;
  return 0x80004005;
}


