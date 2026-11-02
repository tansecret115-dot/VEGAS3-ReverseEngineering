/* Module: mcplug.dll
   Function: FUN_00464ec0
   Address: 00464ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00464ec0(HANDLE param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = param_4;
  iVar1 = param_2;
  if (param_4 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_4;
  }
  while( true ) {
    if ((piVar2 != (int *)0x0) && (iVar4 < 8)) {
      *piVar2 = iVar4;
      return 0x8004e00a;
    }
    uVar3 = FUN_00464cd0(param_1,&param_2,&param_4);
    if (uVar3 != 0) {
      return uVar3;
    }
    if (param_2 == iVar1) break;
    param_4 = (int *)FUN_00464880(param_1,(uint)param_4);
    iVar4 = (iVar4 + -8) - (int)param_4;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar4 + -8;
  }
  return 0;
}


