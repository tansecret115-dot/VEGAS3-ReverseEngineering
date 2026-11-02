/* Module: wmfplug2.dll
   Function: FUN_0041ac80
   Address: 0041ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0041ac80(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  uint local_8;
  int local_4;
  
  piVar3 = (int *)0x0;
  bVar2 = true;
  if (0 < param_2) {
    do {
      if (*param_1 == 0) {
        if (bVar2) {
          bVar2 = false;
          piVar3 = param_1;
          local_8 = param_1[2];
          local_4 = param_1[3];
        }
        else {
          iVar1 = param_1[3];
          if ((iVar1 <= local_4) && ((iVar1 < local_4 || ((uint)param_1[2] < local_8)))) {
            piVar3 = param_1;
            local_8 = param_1[2];
            local_4 = iVar1;
          }
        }
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return piVar3;
}


