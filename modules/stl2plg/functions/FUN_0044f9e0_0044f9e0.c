/* Module: stl2plg.dll
   Function: FUN_0044f9e0
   Address: 0044f9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f9e0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x51);
  if (0 < param_2) {
    iVar2 = piVar1[1];
    if (iVar2 < param_2) {
      do {
        param_2 = param_2 - iVar2;
        FUN_0044f970(param_1);
        iVar2 = piVar1[1];
      } while (iVar2 < param_2);
    }
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] - param_2;
  }
  return;
}


