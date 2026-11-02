/* Module: erv23260.dll
   Function: FUN_6380dbd0
   Address: 6380dbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6380dbd0(void *this,uint *param_1,int param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_8;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3] + uVar6;
  local_8 = 0;
  for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
    uVar4 = param_1[1];
    if (uVar4 < uVar3 + uVar2) {
      uVar8 = param_2 + param_4;
      iVar5 = (uVar6 * *(int *)((int)this + 0x124) + uVar4) * 0x7c;
      iVar9 = (uVar3 + uVar2) - uVar4;
      do {
        if ((local_8 == param_2) &&
           (pbVar1 = (byte *)(*(int *)((int)this + 8) + 100 + iVar5), *pbVar1 = *pbVar1 | param_5,
           uVar8 <= param_3)) {
          param_2 = param_2 + param_4;
          uVar8 = uVar8 + param_4;
        }
        iVar5 = iVar5 + 0x7c;
        local_8 = local_8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return 0;
}


