/* Module: rmto3260.dll
   Function: FUN_662c82f0
   Address: 662c82f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c82f0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_662ed6f0(puVar1);
    }
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      iVar3 = -0x7ff8fff2;
    }
  }
  if (-1 < iVar3) {
    iVar3 = FUN_662d08f0(&local_8,param_2);
    if (-1 < iVar3) {
      FUN_662ed8a0(*(void **)(param_1 + 0x34),local_8);
      return iVar3;
    }
  }
  if (local_8 != 0) {
    FUN_662d08d0(&local_8);
  }
  return iVar3;
}


