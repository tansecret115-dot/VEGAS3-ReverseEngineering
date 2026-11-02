/* Module: sfs4rw.dll
   Function: FUN_00410860
   Address: 00410860
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00410860(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_00419400(*param_1);
  return CONCAT22((short)(uVar1 >> 0x10),(short)param_1[499]) & uVar1;
}


