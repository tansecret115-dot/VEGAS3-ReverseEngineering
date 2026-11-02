/* Module: pngu3266.dll
   Function: FUN_60621b00
   Address: 60621b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_60621b00(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = param_1[1];
  }
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[1];
    }
    if (param_1[1] != 0) {
      *(int *)(param_1[1] + 8) = param_1[2];
    }
    operator_delete(param_1);
  }
  return iVar2;
}


