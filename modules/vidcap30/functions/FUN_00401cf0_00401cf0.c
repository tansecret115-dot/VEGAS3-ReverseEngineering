/* Module: vidcap30.exe
   Function: FUN_00401cf0
   Address: 00401cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401cf0(int *param_1,LPCSTR param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0;
  piVar2 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = lstrcmpiA(param_2,(LPCSTR)*piVar2);
    if (iVar1 == 0) break;
    iVar1 = piVar2[4];
    piVar2 = piVar2 + 4;
    iVar3 = iVar3 + 1;
  }
  param_1 = param_1 + iVar3 * 4 + 1;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  return 1;
}


