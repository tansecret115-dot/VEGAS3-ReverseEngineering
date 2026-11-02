/* Module: vegas30.exe
   Function: FUN_00469cc0
   Address: 00469cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00469cc0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = param_2;
  piVar3 = param_1;
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 == 0)) {
    return (int *)0x80004005;
  }
  iVar6 = 0;
  if (iVar1 < 1) {
    return param_1;
  }
  do {
    piVar5 = *(int **)(piVar3[2] + iVar6 * 4);
    iVar2 = *piVar5;
    if (iVar2 == 0x30) {
      piVar5 = (int *)(**(code **)(*piVar4 + 0x10))(piVar4,piVar5,0x40,&param_1);
      if ((int)piVar5 < 0) {
        return piVar5;
      }
      if (param_1 != (int *)0x40) {
        return (int *)0x8004e009;
      }
    }
    else {
      if (iVar2 == 0x31) {
        piVar5 = (int *)FUN_00469780(piVar4);
      }
      else {
        if (iVar2 != 0x32) {
          return (int *)0x80004005;
        }
        piVar5 = (int *)FUN_00469780(piVar4);
      }
      if ((int)piVar5 < 0) {
        return piVar5;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar1 <= iVar6) {
      return piVar5;
    }
  } while( true );
}


