/* Module: rmto3260.dll
   Function: FUN_662ff580
   Address: 662ff580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662ff580(void *this,undefined4 param_1,uint *param_2,uint param_3,int param_4,undefined4 param_5
            ,uint *param_6,int *param_7,undefined4 param_8,uint param_9,uint param_10,uint param_11)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  local_c = param_10 & 0xffff;
  uVar4 = param_3 % local_c;
  uVar5 = 0;
  *param_6 = 0;
  param_3 = 0;
  if ((short)param_9 != 0) {
    uVar7 = param_9 & 0xffff;
    piVar1 = param_7;
    do {
      if (*piVar1 == 0) {
        uVar5 = uVar5 + 1;
      }
      piVar1 = piVar1 + 1;
      uVar7 = uVar7 - 1;
      param_3 = uVar5;
    } while (uVar7 != 0);
  }
  *param_2 = param_3;
  uVar5 = param_9 & 0xffff;
  local_8 = this;
  if (uVar5 + uVar4 < local_c) {
    iVar2 = (**(code **)(*(int *)this + 0xc))
                      ((param_11 & 0xffff) * uVar4 + param_4,param_11 * param_9,param_5,&local_14,
                       param_7 + uVar4);
  }
  else {
    param_10 = 0;
    if ((short)param_9 != 0) {
      uVar7 = param_11 & 0xffff;
      param_2 = (uint *)0x0;
      local_10 = uVar5;
      do {
        puVar6 = (undefined4 *)(uVar4 * uVar7 + param_4);
        puVar8 = (undefined4 *)(param_10 + *(int *)((int)this + 0x10));
        for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar3 = param_11 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        param_10 = param_10 + uVar7;
        *(int *)((int)param_2 + *(int *)((int)this + 0x14)) = param_7[uVar4];
        param_2 = param_2 + 1;
        uVar4 = (uVar4 + 1) % local_c;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
      local_10 = 0;
    }
    iVar2 = (**(code **)(*(int *)this + 0xc))
                      (*(undefined4 *)((int)this + 0x10),param_11 * param_9,param_5,&local_14,
                       *(undefined4 *)((int)this + 0x14));
  }
  *param_6 = local_14 & 0xffff;
  if ((iVar2 != -1) && (param_3 != uVar5)) {
    return 0;
  }
  return 1;
}


