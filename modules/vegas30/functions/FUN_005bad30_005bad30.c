/* Module: vegas30.exe
   Function: FUN_005bad30
   Address: 005bad30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005bad30(HGLOBAL param_1,BOOL param_2,LPSTREAM *param_3)

{
  *param_3 = (LPSTREAM)0x0;
  CreateStreamOnHGlobal(param_1,param_2,param_3);
  return;
}


