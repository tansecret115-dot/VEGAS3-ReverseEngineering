/* Module: vegas30k.dll
   Function: FUN_010afa80
   Address: 010afa80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010afa80(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000020;
  
  switch(in_stack_00000020) {
  case 0:
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = ftol();
    *param_2 = (iVar2 + iVar1) / 2 - iVar3;
    iVar1 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = ftol();
    *param_3 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 1:
    *param_2 = *(int *)(param_1 + 0xd8);
    iVar1 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = ftol();
    *param_3 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 2:
    *param_2 = *(int *)(param_1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = ftol();
    *param_3 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 3:
    *param_3 = *(int *)(param_1 + 0xdc);
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = ftol();
    *param_2 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 4:
    *param_3 = *(int *)(param_1 + 0xe4);
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = ftol();
    *param_2 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 5:
    *param_2 = *(int *)(param_1 + 0xe8);
    iVar1 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = ftol();
    *param_3 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 6:
    *param_2 = *(int *)(param_1 + 0xf0);
    iVar1 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = ftol();
    *param_3 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 7:
    *param_3 = *(int *)(param_1 + 0xec);
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = ftol();
    *param_2 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 8:
    *param_3 = *(int *)(param_1 + 0xf4);
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = ftol();
    *param_2 = (iVar2 + iVar1) / 2 - iVar3;
    return;
  case 9:
    *param_2 = (*(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x19c)) / 2;
    *param_3 = (*(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1a0)) / 2;
    return;
  case 10:
    *param_2 = (*(int *)(param_1 + 0x1e4) + *(int *)(param_1 + 0x1dc)) / 2;
    *param_3 = (*(int *)(param_1 + 0x1e8) + *(int *)(param_1 + 0x1e0)) / 2;
    return;
  default:
    *param_2 = (*(int *)(param_1 + 0x264) + *(int *)(param_1 + 0x25c)) / 2;
    *param_3 = (*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x260)) / 2;
    return;
  case 0xc:
    *param_2 = (*(int *)(param_1 + 0x224) + *(int *)(param_1 + 0x21c)) / 2;
    *param_3 = (*(int *)(param_1 + 0x228) + *(int *)(param_1 + 0x220)) / 2;
    return;
  }
}


