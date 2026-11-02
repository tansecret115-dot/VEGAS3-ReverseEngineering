/* Module: 50comupd.exe
   Function: FUN_010021ed
   Address: 010021ed
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010021ed(short param_1)

{
  if (param_1 == 0) {
    FUN_010020d4();
  }
  else if (param_1 == 1) {
    FUN_01002198((HKEY)s_System_CurrentControlSet_Control_0100a168);
  }
  else if (param_1 == 2) {
    FUN_01002147((HKEY)s_System_CurrentControlSet_Control_0100a110,
                 s_PendingFileRenameOperations_0100a148);
  }
  return;
}


