/* Module: sfs4rw.dll
   Function: FUN_00453930
   Address: 00453930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453930(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x51);
  if (0 < param_2) {
    iVar2 = piVar1[1];
    if (iVar2 < param_2) {
      do {
        param_2 = param_2 - iVar2;
        FUN_004538c0(param_1);
        iVar2 = piVar1[1];
      } while (iVar2 < param_2);
    }
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] - param_2;
  }
  return;
}


