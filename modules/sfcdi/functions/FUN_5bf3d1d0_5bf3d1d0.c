/* Module: sfcdi.dll
   Function: FUN_5bf3d1d0
   Address: 5bf3d1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3d1d0(int *param_1)

{
  int iVar1;
  
  FUN_5bf3ce50((int)param_1,(LPCSTR)0x0);
  if (param_1[0xd] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_5bf3d150(*param_1);
    if (-1 < iVar1) {
      iVar1 = (*(code *)param_1[0xd])(param_1[0x13]);
      return iVar1;
    }
  }
  return iVar1;
}


