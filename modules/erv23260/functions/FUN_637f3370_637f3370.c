/* Module: erv23260.dll
   Function: FUN_637f3370
   Address: 637f3370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f3370(int *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  bVar3 = 4;
  local_8 = 0x10;
  iVar5 = 8;
  local_c = -8;
  piVar1 = param_1;
  do {
    piVar2 = piVar1 + 10;
    iVar4 = (param_1[7] << (bVar3 & 0x1f)) - param_1[5];
    *piVar2 = iVar4;
    bVar3 = bVar3 - 1;
    *piVar2 = (-(uint)((param_1[3] + 7U >> 3 & local_10) != 0) & 8) + iVar4;
    piVar1[0xc] = (param_1[2] - (param_1[7] + 1 << (bVar3 & 0x1f))) - *param_1;
    piVar1[0xd] = (*param_1 + local_8) - param_1[1];
    piVar1[0xb] = local_c;
    piVar1[0xe] = iVar5;
    piVar1[0xf] = (param_1[7] << (bVar3 & 0x1f)) - iVar5;
    piVar1[0x10] = iVar5;
    piVar1[0x11] = 0;
    iVar5 = iVar5 + -4;
    piVar1[0x12] = param_1[1] - param_1[2];
    piVar1[0x13] = 0;
    local_8 = local_8 + -8;
    local_c = local_c + 4;
    local_10 = local_10 + 1;
    piVar1 = piVar2;
  } while (local_10 < 2);
  return;
}


