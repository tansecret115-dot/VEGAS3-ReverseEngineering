/* Module: rmbe3260.dll
   Function: RMACreateRMBuildEngine
   Address: 6601a360
   Source: Ghidra pseudocode (Stage 10 batch) */


int RMACreateRMBuildEngine(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x1a360  3  RMACreateRMBuildEngine */
  iVar2 = 0;
  piVar1 = (int *)FUN_6601a420();
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_66065958,param_1);
    }
  }
  return iVar2;
}


