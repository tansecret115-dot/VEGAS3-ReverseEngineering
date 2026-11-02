/* Module: mcplug.dll
   Function: FUN_00403800
   Address: 00403800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403800(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_retaddr;
  
  piVar1 = param_4;
  if (param_4 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = 0;
  if (0 < param_2) {
    piVar3 = (int *)param_1[0x90];
    do {
      if ((param_1 == (int *)*piVar3) && (unaff_retaddr == piVar3[1])) {
        *piVar1 = iVar2;
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < param_2);
  }
  return 1;
}


