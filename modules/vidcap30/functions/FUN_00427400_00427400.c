/* Module: vidcap30.exe
   Function: FUN_00427400
   Address: 00427400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427400(HGLOBAL param_1,BOOL param_2,LPSTREAM *param_3)

{
  *param_3 = (LPSTREAM)0x0;
  CreateStreamOnHGlobal(param_1,param_2,param_3);
  return;
}


