/* Module: vidcap30.exe
   Function: FUN_00425230
   Address: 00425230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00425230(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (((param_1[0x4e] & 1U) != 0) || ((param_1[0x4e] & 2U) != 0)) {
    ShowWindow((HWND)param_1[2],-(uint)(param_2 != 0) & 5);
  }
  if ((param_1[0x4e] & 4U) != 0) {
    if (param_2 == 0) {
      uVar2 = param_1[3] & 0xefffffff;
    }
    else {
      uVar2 = param_1[3] | 0x10000000;
    }
    param_1[3] = uVar2;
    if (*param_1 == 7) {
      (**(code **)(*(int *)param_1[0xd7] + 0x4c))((int *)param_1[0xd7],-(uint)(param_2 != 0));
      return;
    }
    if ((*param_1 == 8) && (piVar1 = (int *)param_1[0xd7], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,-(uint)(param_2 != 0));
    }
  }
  return;
}


