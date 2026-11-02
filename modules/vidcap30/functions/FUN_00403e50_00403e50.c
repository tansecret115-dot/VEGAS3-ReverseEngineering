/* Module: vidcap30.exe
   Function: FUN_00403e50
   Address: 00403e50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00403e50(HWND param_1)

{
  int iVar1;
  CHAR local_20 [32];
  
  GetClassNameA(param_1,local_20,0x1e);
  iVar1 = lstrcmpiA(local_20,"#32770");
  return iVar1 == 0;
}


