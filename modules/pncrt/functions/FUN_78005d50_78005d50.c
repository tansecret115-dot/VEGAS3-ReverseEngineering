/* Module: pncrt.dll
   Function: FUN_78005d50
   Address: 78005d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78005d50(undefined4 *param_1)

{
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  local_c = local_c & 0xffffff80;
  local_10 = 0;
  local_8 = 0;
  local_4 = local_4 & 0xffffff80;
  FUN_78005780(param_1,(DName *)&local_8,'\0',(DName *)&local_10,0);
  return param_1;
}


