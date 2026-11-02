/* Module: InstMsi-x86w.exe
   Function: FUN_010059a0
   Address: 010059a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010059a0(short param_1,short param_2)

{
  BOOL BVar1;
  bool bVar2;
  
  if ((BYTE)param_1 == (BYTE)param_2) {
    BVar1 = IsDBCSLeadByte((BYTE)param_1);
    if (BVar1 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = param_1 != param_2;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


