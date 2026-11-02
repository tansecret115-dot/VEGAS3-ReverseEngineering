/* Module: vegas30.exe
   Function: FUN_004176e0
   Address: 004176e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004176e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    return -(uint)(param_2[1] != 0);
  }
  if (param_2[1] == 0) {
    return 1;
  }
  iVar1 = lstrcmpiA((LPCSTR)*param_1,(LPCSTR)*param_2);
  return iVar1;
}


