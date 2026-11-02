/* Module: vidcap30.exe
   Function: FUN_0052cee0
   Address: 0052cee0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t FUN_0052cee0(void *param_1,uint param_2,size_t param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  
  sVar3 = 0;
  if (param_4 != (int *)0x0) {
    iVar2 = *param_4;
    if (iVar2 == 0) {
      if ((FILE *)param_4[1] != (FILE *)0x0) {
        sVar3 = fwrite(param_1,param_2,param_3,(FILE *)param_4[1]);
      }
    }
    else if ((iVar2 != 1) && (iVar2 == 2)) {
      piVar1 = param_4 + 1;
      param_4 = (int *)0x0;
      WriteFile((HANDLE)*piVar1,param_1,param_2 * param_3,(LPDWORD)&param_4,(LPOVERLAPPED)0x0);
      return ((uint)param_4 / param_2) * param_2;
    }
  }
  return sVar3;
}


