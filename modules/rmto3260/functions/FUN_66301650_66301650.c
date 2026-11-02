/* Module: rmto3260.dll
   Function: FUN_66301650
   Address: 66301650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66301650(char *param_1,int param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  short local_4c [32];
  int local_c;
  uint local_8;
  
  if (param_3 != 0) {
    uVar2 = 0;
    uVar7 = (uint)param_3;
    psVar5 = local_4c;
    do {
      uVar3 = (int)uVar2 >> 0x1f;
      uVar1 = uVar2 ^ uVar3;
      uVar2 = uVar2 + 1;
      *psVar5 = ((uVar1 - uVar3 & 1 ^ uVar3) != uVar3) + 9;
      uVar7 = uVar7 - 1;
      psVar5 = psVar5 + 1;
    } while (uVar7 != 0);
  }
  local_8 = 0;
  sVar6 = 0;
  local_c = 0x26;
  do {
    uVar7 = local_8 & 0xffff;
    uVar4 = local_4c[uVar7] - sVar6;
    if (uVar4 < 8) {
      *param_1 = (char)(*(ushort *)(param_2 + uVar7 * 2) >> ((byte)sVar6 & 0x1f)) +
                 (*(char *)(param_2 + 2 + uVar7 * 2) << ((byte)uVar4 & 0x1f));
    }
    else {
      *param_1 = (char)(*(ushort *)(param_2 + uVar7 * 2) >> ((byte)sVar6 & 0x1f));
    }
    if (uVar4 < 9) {
      sVar6 = -uVar4;
      local_8 = local_8 + 1;
    }
    sVar6 = sVar6 + 8;
    param_1 = param_1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}


