/* Module: rmto3260.dll
   Function: FUN_662ffff0
   Address: 662ffff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662ffff0(void *this,undefined4 param_1,uint *param_2,uint param_3,int param_4,int param_5,
            uint *param_6,int param_7,undefined4 param_8,uint param_9,uint param_10,uint param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_10;
  uint local_c;
  void *local_8;
  
  uVar5 = param_10 & 0xffff;
  uVar3 = param_3 % uVar5;
  *param_6 = 0;
  uVar8 = param_9 & 0xffff;
  *param_2 = 0;
  if (uVar3 + uVar8 < uVar5) {
    piVar7 = (int *)(param_7 + uVar3 * 4);
    iVar1 = (param_11 & 0xffff) * uVar3 + param_4;
  }
  else {
    param_10 = 0;
    param_3 = 0;
    if (uVar8 != 0) {
      uVar4 = param_11 & 0xffff;
      do {
        puVar6 = (undefined4 *)(uVar3 * uVar4 + param_4);
        puVar9 = (undefined4 *)(param_10 + *(int *)((int)this + 0x10));
        for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar2 = param_11 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        param_10 = param_10 + uVar4;
        *(undefined4 *)(*(int *)((int)this + 0x14) + param_3 * 4) =
             *(undefined4 *)(param_7 + uVar3 * 4);
        uVar3 = (int)(uVar3 + 1) % (int)uVar5;
        param_3 = param_3 + 1;
      } while (param_3 < uVar8);
    }
    piVar7 = *(int **)((int)this + 0x14);
    iVar1 = *(int *)((int)this + 0x10);
  }
  local_c = uVar8;
  local_8 = this;
  iVar1 = FUN_66300400(iVar1,param_11 * param_9,param_5,(short *)&local_10,(int)piVar7);
  uVar5 = 0;
  for (uVar3 = uVar8; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (*piVar7 == 0) {
      uVar5 = uVar5 + 1;
    }
    piVar7 = piVar7 + 1;
  }
  *param_2 = uVar5;
  *param_6 = local_10 & 0xffff;
  if ((iVar1 != -1) && (uVar5 != uVar8)) {
    return 0;
  }
  return 1;
}


