/* Module: vidcap30.exe
   Function: FUN_0052cd20
   Address: 0052cd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052cd20(int *param_1,int param_2,int param_3)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      if ((FILE *)param_1[1] != (FILE *)0x0) {
        iVar3 = fseek((FILE *)param_1[1],param_2,param_3);
      }
    }
    else if (iVar2 == 1) {
      if (param_3 == 1) {
        iVar2 = param_1[1];
        param_1[1] = iVar2 + param_2;
        if (param_1[2] <= iVar2 + param_2) {
          param_1[1] = param_1[2] + -1;
          return -1;
        }
      }
      else if (param_3 == 2) {
        iVar2 = (param_1[2] - param_2) + -1;
        param_1[1] = iVar2;
        if (iVar2 < 0) {
          param_1[1] = 0;
          return -1;
        }
      }
      else {
        param_1[1] = param_2;
        if (param_1[2] <= param_2) {
          param_1[1] = param_1[2] + -1;
          return -1;
        }
      }
    }
    else if (iVar2 == 2) {
      if (param_3 == 1) {
        DVar1 = 1;
      }
      else if (param_3 == 2) {
        DVar1 = 2;
      }
      else {
        DVar1 = 0;
      }
      DVar1 = SetFilePointer((HANDLE)param_1[1],param_2,(PLONG)0x0,DVar1);
      if (DVar1 != 0xffffffff) {
        return 0;
      }
    }
  }
  return iVar3;
}


