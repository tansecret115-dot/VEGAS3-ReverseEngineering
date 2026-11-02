/* Module: rmto3260.dll
   Function: FUN_662cb130
   Address: 662cb130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cb130(int param_1,short param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  ushort uVar4;
  int local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(iVar1 + 0x10);
  }
  local_c = *(int *)(iVar1 + 4);
  bVar2 = false;
  if ((ushort)local_8 != 0) {
    do {
      if (bVar2) break;
      piVar3 = (int *)FUN_662ed930(&local_c);
      if (*(short *)(*piVar3 + 4) == param_2) {
        bVar2 = true;
        *param_3 = *piVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ushort)local_8);
  }
  return (-(uint)bVar2 & 0x7ffbff7f) + 0x80040081;
}


