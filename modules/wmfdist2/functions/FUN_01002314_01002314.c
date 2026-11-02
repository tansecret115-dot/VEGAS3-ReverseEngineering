/* Module: wmfdist2.exe
   Function: FUN_01002314
   Address: 01002314
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_01002314(ushort param_1)

{
  DWORD DVar1;
  
  DVar1 = 0;
  if (param_1 == 0) {
    DVar1 = FUN_010021fb();
  }
  else if (param_1 == 1) {
    DVar1 = FUN_010022bf((HKEY)s_System_CurrentControlSet_Control_0100a168);
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    DVar1 = FUN_0100226e((HKEY)s_System_CurrentControlSet_Control_0100a110,
                         s_PendingFileRenameOperations_0100a148);
  }
  return DVar1;
}


