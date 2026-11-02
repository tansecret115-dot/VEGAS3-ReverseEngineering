/* Module: wmfplug2.dll
   Function: FUN_004185f0
   Address: 004185f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004185f0(BYTE *param_1,uint param_2)

{
  int iVar1;
  CHAR local_40 [64];
  
  iVar1 = lstrlenA(s_file__004887c0);
  lstrcpynA(local_40,(LPCSTR)param_1,iVar1 + 1);
  local_40[iVar1] = '\0';
  iVar1 = lstrcmpiA(s_file__004887c0,local_40);
  if (iVar1 == 0) {
    FUN_0042f550(param_1,param_2);
    return;
  }
  FUN_00418580((LPSTR)param_1,param_2);
  return;
}


