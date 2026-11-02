/* Module: 28_83260.dll
   Function: FUN_10003de0
   Address: 10003de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10003de0(int param_1,ushort *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_88 [32];
  int local_8;
  
  uVar2 = 0;
  if (0 < (int)param_3) {
    piVar5 = local_88;
    do {
      uVar3 = (int)uVar2 >> 0x1f;
      uVar1 = uVar2 ^ uVar3;
      uVar2 = uVar2 + 1;
      *piVar5 = ((uVar1 - uVar3 & 1 ^ uVar3) != uVar3) + 9;
      piVar5 = piVar5 + 1;
    } while ((int)uVar2 < (int)param_3);
  }
  iVar6 = 0;
  param_3 = local_88;
  local_8 = 0;
  do {
    iVar7 = *param_3 - iVar6;
    if (iVar7 < 8) {
      cVar4 = ((char)param_2[1] << ((byte)iVar7 & 0x1f)) + (char)(*param_2 >> ((byte)iVar6 & 0x1f));
    }
    else {
      cVar4 = (char)(*param_2 >> ((byte)iVar6 & 0x1f));
    }
    *(char *)(local_8 + param_1) = cVar4;
    if (iVar7 < 9) {
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar6 = -iVar7;
    }
    iVar6 = iVar6 + 8;
    local_8 = local_8 + 1;
  } while (local_8 < 0x26);
  return 0;
}


