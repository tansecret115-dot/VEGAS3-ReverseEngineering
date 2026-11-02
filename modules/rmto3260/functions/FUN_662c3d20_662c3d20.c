/* Module: rmto3260.dll
   Function: FUN_662c3d20
   Address: 662c3d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3d20(int param_1,short param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  ushort uVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar2 = false;
  iVar1 = *(int *)(param_1 + 0x38);
  local_c = 0;
  local_10 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(iVar1 + 0x10);
  }
  uVar4 = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (bVar2) {
        return local_c;
      }
      piVar3 = (int *)FUN_662ed930(&local_10);
      if (*(short *)(*piVar3 + 0x10) == param_2) {
        bVar2 = true;
        *param_3 = *piVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ushort)local_8);
  }
  if (!bVar2) {
    *param_3 = 0;
    local_c = 0x40012;
  }
  return local_c;
}


