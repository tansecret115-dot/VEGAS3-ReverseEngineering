/* Module: sfcdi.dll
   Function: FUN_5bf3ceb0
   Address: 5bf3ceb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3ceb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FUN_5bf3ce50((int)param_1,(LPCSTR)0x0);
  if (param_1[0x13] == 0) {
    return 0;
  }
  iVar1 = FUN_5bf3d5b0((int)param_1,*param_1);
  if (-1 < iVar1) {
    if ((code *)param_1[0xb] == (code *)0x0) {
      return 0;
    }
    iVar1 = (*(code *)param_1[0xb])(param_1[0x13]);
    if (-1 < iVar1) {
      param_1[0x13] = 0;
      param_1[0x12] = -1;
      piVar3 = param_1 + 8;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      return iVar1;
    }
  }
  return iVar1;
}


