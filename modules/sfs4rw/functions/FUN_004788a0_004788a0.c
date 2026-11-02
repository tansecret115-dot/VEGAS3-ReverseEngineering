/* Module: sfs4rw.dll
   Function: FUN_004788a0
   Address: 004788a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004788a0(int *param_1,byte *param_2,uint param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    FUN_0044c4d0((int)param_1,param_2,param_3);
    FUN_0047aed0(param_1,param_2,param_3);
  }
  return;
}


