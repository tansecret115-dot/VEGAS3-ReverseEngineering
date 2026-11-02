/* Module: rmto3260.dll
   Function: FUN_662c49d0
   Address: 662c49d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c49d0(int param_1,int *param_2,short param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  bVar2 = false;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  iVar5 = 0;
  local_c = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    param_2._0_2_ = 0;
  }
  else {
    param_2._0_2_ = (ushort)*(undefined4 *)(iVar1 + 0x10);
  }
  local_8 = 0;
  if ((ushort)param_2 != 0) {
    do {
      if (iVar5 != 0) break;
      if (bVar2) {
        return 0;
      }
      piVar4 = (int *)FUN_662ed930(&local_c);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        iVar5 = -0x7ffbff7f;
      }
      if ((-1 < iVar5) && (param_3 == *(short *)(iVar1 + 4))) {
        *piVar3 = iVar1;
        bVar2 = true;
      }
      local_8 = local_8 + 1;
    } while ((ushort)local_8 < (ushort)param_2);
  }
  if (!bVar2) {
    iVar5 = 0x40012;
  }
  return iVar5;
}


