/* Module: vegas30.exe
   Function: FUN_004fec60
   Address: 004fec60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004fec60(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  piVar1 = (int *)param_1[0x5e];
  param_1[0x5e] = (int)param_2;
  param_1[0x60] = 0;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  if (iVar2 + -1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_2[2];
  }
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 1;
  }
  FUN_004fece0(param_1);
  if (*param_1 != 0) {
    FUN_004fa690(param_1);
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
  }
  return piVar1;
}


