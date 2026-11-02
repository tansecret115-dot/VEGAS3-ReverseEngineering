/* Module: oggplug.dll
   Function: FUN_00422d00
   Address: 00422d00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00422d00(HANDLE param_1,int *param_2,int *param_3)

{
  HANDLE pvVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined1 local_4 [4];
  
  piVar2 = param_2;
  pvVar1 = param_1;
  *param_2 = 0;
  FUN_00422430(param_1,(DWORD *)&param_1);
  piVar3 = param_3;
  while( true ) {
    if ((piVar3 != (int *)0x0) && (*piVar3 < 8)) {
      FUN_00422450(pvVar1,(LONG)param_1);
      return 0;
    }
    uVar4 = FUN_004228c0(pvVar1,local_4,&param_2);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + -8;
    }
    if (uVar4 != 0) break;
    param_2 = (int *)FUN_00422470(pvVar1,(uint)param_2);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 - (int)param_2;
    }
    *piVar2 = *piVar2 + 1;
  }
  FUN_00422450(pvVar1,(LONG)param_1);
  return uVar4;
}


