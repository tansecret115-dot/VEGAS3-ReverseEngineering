/* Module: erv23260.dll
   Function: FUN_6380f1a0
   Address: 6380f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall
FUN_6380f1a0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0x158);
  if (iVar1 == 1) {
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((piVar2 = *(int **)(param_1 + 0x58), piVar2 != (int *)0x2 && (piVar2 != (int *)0x0)))) {
      if (param_4 <= param_2) {
        *param_7 = param_4;
        return (int *)((-(uint)(param_6 != 0) & 2) + 2);
      }
      *param_7 = param_2;
      return (int *)0x0;
    }
  }
  else if (iVar1 == 3) {
    if ((*(int *)(param_1 + 0x60) == 0) ||
       (((piVar2 = *(int **)(param_1 + 0x58), piVar2 != (int *)0x6 && (piVar2 != (int *)0x7)) &&
        ((piVar2 != (int *)0x8 && ((piVar2 != (int *)0x9 && (piVar2 != (int *)0x0)))))))) {
      if (param_3 < param_4) {
        piVar2 = (int *)0x7;
        *param_7 = param_3;
      }
      else {
        piVar2 = (int *)0x6;
        *param_7 = param_4;
      }
      if (param_5 < *param_7) {
        piVar2 = (int *)0x9;
        *param_7 = param_5;
      }
      if (param_2 < *param_7) {
        *param_7 = param_2;
        return (int *)0x0;
      }
    }
  }
  else if (iVar1 == 4) {
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((piVar2 = *(int **)(param_1 + 0x58), piVar2 != (int *)0x0 && (piVar2 != (int *)0xa)))) {
      if (param_3 <= param_2) {
        *param_7 = param_3;
        return (int *)0xa;
      }
      *param_7 = param_2;
      return (int *)0x0;
    }
  }
  else {
    piVar2 = param_7;
    if ((iVar1 == 5) &&
       ((*(int *)(param_1 + 0x60) == 0 ||
        (((piVar2 = *(int **)(param_1 + 0x58), piVar2 != (int *)0x6 && (piVar2 != (int *)0xa)) &&
         (piVar2 != (int *)0x0)))))) {
      if (param_3 <= param_4) {
        if (param_3 <= param_2) {
          *param_7 = param_3;
          return (int *)0xa;
        }
        *param_7 = param_2;
        return (int *)0x0;
      }
      if (param_4 <= param_2) {
        *param_7 = param_4;
        return (int *)0x6;
      }
      *param_7 = param_2;
      return (int *)0x0;
    }
  }
  return piVar2;
}


