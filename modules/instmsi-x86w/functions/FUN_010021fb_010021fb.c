/* Module: InstMsi-x86w.exe
   Function: FUN_010021fb
   Address: 010021fb
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010021fb(short param_1)

{
  if (param_1 == 0) {
    FUN_010020f2();
  }
  else if (param_1 == 1) {
    FUN_010021a6((HKEY)s_System_CurrentControlSet_Control_0100a168);
  }
  else if (param_1 == 2) {
    FUN_01002155((HKEY)s_System_CurrentControlSet_Control_0100a110,
                 s_PendingFileRenameOperations_0100a148);
  }
  return;
}


