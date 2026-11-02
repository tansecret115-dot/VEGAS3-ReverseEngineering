/* Module: rmbe3260.dll
   Function: FUN_66042a70
   Address: 66042a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_66042a70(byte *param_1,int param_2,uint param_3,int param_4,int param_5,byte *param_6,
            undefined4 param_7,uint *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 local_2c [2];
  uint local_2a;
  int local_26;
  uint local_22;
  int local_1e;
  undefined1 uStack_16;
  undefined3 local_15;
  undefined1 uStack_12;
  uint local_11;
  byte *local_c;
  uint local_8;
  
  FUN_660434c0(local_2c);
  uVar7 = 0;
  _uStack_16 = CONCAT31(1,uStack_16);
  uStack_12 = 0;
  local_11 = param_3;
  iVar1 = FUN_66043770(local_2c,param_1);
  pbVar5 = param_1;
  if (local_1e == 2) {
    uVar7 = iVar1 + local_26;
    pbVar5 = param_1 + iVar1 + local_26;
    pbVar6 = param_1;
    pbVar8 = param_6;
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar4 = uVar7 & 3; local_8 = uVar7, uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar8 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + 1;
    }
  }
  local_c = param_1 + param_2;
  if (pbVar5 < local_c) {
    do {
      iVar1 = FUN_66043770(local_2c,pbVar5);
      uVar4 = local_2a;
      if (local_22 < (param_3 & 0x3fffffff)) {
        uVar2 = (param_3 & 0xc0000000) + 0x40000000;
      }
      else {
        uVar2 = param_3 & 0xc0000000;
      }
      iVar3 = param_4;
      if (param_5 == 0) {
        iVar3 = -param_4;
      }
      FUN_660435d0(local_2c,local_2a,uVar2 + local_22 + iVar3,(char)_uStack_16);
      iVar3 = FUN_66043610(local_2c,(char *)(param_6 + uVar7));
      pbVar6 = pbVar5 + iVar1;
      pbVar8 = param_6 + uVar7 + iVar3;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar8 = pbVar8 + 4;
      }
      uVar7 = uVar7 + iVar3 + uVar4;
      pbVar5 = pbVar5 + iVar1 + uVar4;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      }
      local_8 = uVar7;
    } while (pbVar5 < local_c);
  }
  *param_8 = uVar7;
  return 0;
}


