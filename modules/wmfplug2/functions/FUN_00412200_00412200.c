/* Module: wmfplug2.dll
   Function: FUN_00412200
   Address: 00412200
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00412200(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return (int *)0x0;
  }
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    piVar2 = (int *)0x0;
    piVar1 = (int *)((int)param_1 + *param_1);
    if (param_1[1] != 0) {
      while( true ) {
        piVar2 = piVar1;
        if ((piVar2[1] == 1) && ((uint)piVar2[2] < 0xa34U - *piVar2)) {
          piVar2[2] = 0xa34U - *piVar2;
        }
        if (param_3 == piVar2[1]) break;
        uVar3 = uVar3 + 1;
        piVar1 = (int *)((int)piVar2 + piVar2[2] + *piVar2);
        if ((uint)param_1[1] <= uVar3) {
          return (int *)0x0;
        }
      }
    }
    return piVar2;
  }
  return (int *)0x0;
}


