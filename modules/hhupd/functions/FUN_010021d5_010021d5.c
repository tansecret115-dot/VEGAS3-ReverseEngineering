/* Module: hhupd.exe
   Function: FUN_010021d5
   Address: 010021d5
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010021d5(short param_1)

{
  if (param_1 == 0) {
    FUN_010020cc();
  }
  else if (param_1 == 1) {
    FUN_01002180((HKEY)s_System_CurrentControlSet_Control_0100a168);
  }
  else if (param_1 == 2) {
    FUN_0100212f((HKEY)s_System_CurrentControlSet_Control_0100a110,
                 s_PendingFileRenameOperations_0100a148);
  }
  return;
}


