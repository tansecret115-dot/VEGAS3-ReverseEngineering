/* Module: ednt3260.dll
   Function: FUN_630f8870
   Address: 630f8870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f8870(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_18;
  int local_14;
  undefined4 *local_8;
  
  iVar4 = param_3;
  FUN_630f89c0((int)this);
  uVar1 = *(ushort *)(param_3 + 0x1c);
  uVar5 = *(ushort *)(&DAT_630ff878 + (uVar1 & 0xf) * 2);
  local_8 = (undefined4 *)((int)this + 0x51214);
  local_18 = 0;
  param_3 = 0;
  do {
    if ((uVar5 & 0x8000) != 0) {
      local_14 = 0;
      puVar6 = *(undefined4 **)(*(int *)(iVar4 + 2) + param_3);
      puVar7 = *(undefined4 **)(*(int *)(iVar4 + 0x10) + param_3);
      sVar2 = *(short *)(*(int *)(iVar4 + 6) + local_18);
      sVar3 = *(short *)(*(int *)(iVar4 + 0x14) + local_18);
      if (0 < *(short *)(iVar4 + 0x1e)) {
        do {
          if ((((char)uVar1 >> 4 & 1U) == 0) || ((param_3 != 0xc && (param_3 != 0x10)))) {
            FUN_630f5b70(puVar6,sVar2,puVar7,sVar3,local_8);
          }
          else {
            FUN_630f89f0(this,puVar6,sVar2,puVar7,sVar3,local_8);
          }
          puVar6 = puVar6 + sVar2 * 0x600;
          puVar7 = puVar7 + sVar3 * 0x600;
          local_14 = local_14 + 1;
        } while (local_14 < *(short *)(iVar4 + 0x1e));
      }
    }
    param_3 = param_3 + 4;
    uVar5 = uVar5 << 1;
    local_18 = local_18 + 2;
    local_8 = local_8 + 0xa00;
  } while (param_3 < 0x18);
  *param_1 = 0x405;
  param_1[1] = 0;
  return;
}


