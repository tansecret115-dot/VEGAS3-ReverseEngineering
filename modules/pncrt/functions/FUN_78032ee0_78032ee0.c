/* Module: pncrt.dll
   Function: FUN_78032ee0
   Address: 78032ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78032ee0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    FUN_78033160(param_1,param_3,param_2);
    return;
  case 9:
    switch(*param_2) {
    case 0:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffaff | 0x4000;
      return;
    case 1:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffbaff;
      return;
    case 2:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffbbff | 0x100;
      return;
    case 3:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x4500;
    }
    break;
  case 10:
    **(undefined2 **)(param_1 + 0x14) = (short)*param_2;
    return;
  case 0xb:
    **(int **)(param_1 + 0x14) = *param_2;
    return;
  case 0xc:
  case 0xe:
    piVar1 = *(int **)(param_1 + 0x14);
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    return;
  case 0xd:
    **(int **)(param_1 + 0x14) = *param_2;
    return;
  case 0xf:
    piVar1 = *(int **)(param_1 + 0x14);
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    *(short *)(piVar1 + 2) = (short)param_2[2];
    return;
  case 0x10:
    piVar1 = *(int **)(param_1 + 0x14);
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    *(short *)(piVar1 + 2) = (short)param_2[2];
    return;
  }
  return;
}


