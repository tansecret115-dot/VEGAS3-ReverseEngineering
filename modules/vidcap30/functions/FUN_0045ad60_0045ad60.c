/* Module: vidcap30.exe
   Function: FUN_0045ad60
   Address: 0045ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045ad60(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    iVar1 = lstrcmpiA(param_1,param_2);
  }
  else {
    iVar1 = lstrcmpA(param_1,param_2);
  }
  if (iVar1 == 0) {
    iVar1 = param_3;
  }
  return iVar1;
}


