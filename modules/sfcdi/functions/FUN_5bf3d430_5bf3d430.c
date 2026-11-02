/* Module: sfcdi.dll
   Function: FUN_5bf3d430
   Address: 5bf3d430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3d430(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_5bf3ce50((int)param_1,(LPCSTR)0x0);
  iVar1 = FUN_5bf3d210((int)param_1,*param_1,1);
  if ((-1 < iVar1) && ((code *)param_1[0xc] != (code *)0x0)) {
    (*(code *)param_1[0xc])(param_1[0x13],param_1,param_2,param_3);
  }
  return;
}


