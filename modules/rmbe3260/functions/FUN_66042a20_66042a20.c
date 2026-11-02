/* Module: rmbe3260.dll
   Function: FUN_66042a20
   Address: 66042a20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_66042a20(byte *param_1,uint param_2)

{
  undefined1 local_24 [2];
  uint local_22;
  int local_16;
  
  FUN_660434c0(local_24);
  FUN_66043770(local_24,param_1);
  if (local_16 == 2) {
    return (bool)('\x01' - (local_22 < param_2));
  }
  return local_16 == 3;
}


