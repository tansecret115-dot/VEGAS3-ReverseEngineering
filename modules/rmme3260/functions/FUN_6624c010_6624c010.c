/* Module: rmme3260.dll
   Function: FUN_6624c010
   Address: 6624c010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624c010(uint *param_1,uint *param_2)

{
  if (((*param_1 & 1) != 0) && ((*param_1 & 0x100) != 0)) {
    *param_2 = param_1[2];
    return 0;
  }
  *param_2 = 0;
  return 0x80004005;
}


