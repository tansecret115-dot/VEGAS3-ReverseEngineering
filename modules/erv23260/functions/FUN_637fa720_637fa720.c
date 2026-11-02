/* Module: erv23260.dll
   Function: FUN_637fa720
   Address: 637fa720
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_637fa720(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)param_1[0x26];
  if (iVar3 < 0) {
    uVar2 = FUN_637fd230((int)param_1);
    return (bool)('\x01' - (uVar2 < (uint)param_1[5]));
  }
  if (iVar3 == 0) {
    return true;
  }
  *(int *)param_1[0x26] = iVar3 + -1;
  piVar1 = (int *)param_1[0x26];
  (**(code **)(*param_1 + 4))(piVar1[*piVar1 + 1],piVar1[*piVar1 + 2]);
  iVar3 = FUN_637fd230((int)param_1);
  return (bool)('\x01' - (iVar3 + 4U < (uint)param_1[0x13]));
}


