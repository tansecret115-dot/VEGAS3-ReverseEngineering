/* Module: vegas30.exe
   Function: FUN_005c9630
   Address: 005c9630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c9630(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  if (*(int *)(param_2 + 0x50) == 0) {
    fVar6 = (float10)FUN_005ba670(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + 0x40),&param_2,
                                  local_40,&local_48,0);
  }
  else {
    if (*(int *)(*(int *)(param_2 + 0x50) + 0x18) != 0) {
      iVar3 = FUN_005f13f0(*(undefined4 *)(param_2 + 4));
      if ((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x30), iVar1 != 0)) {
        param_2 = _SfGetPixelType_4(iVar1);
        puVar4 = (undefined4 *)(iVar3 + 0x38);
        puVar5 = local_40;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        fVar6 = (float10)*(double *)(iVar3 + 0x48);
        local_48 = *(undefined4 *)(iVar1 + 4);
        local_44 = *(undefined4 *)(iVar1 + 8);
        goto LAB_005c9731;
      }
    }
    param_2 = 0x1b;
    puVar4 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    fVar6 = (float10)_DAT_0062a130;
    local_40[4] = 0;
    local_40[6] = 0;
    local_40[8] = 0;
    local_40[9] = 0;
    local_40[0xc] = 0;
    local_40[0] = 0x40;
    local_40[0xd] = 0;
    local_40[1] = 0xffffffff;
    local_40[0xe] = 0;
    local_40[2] = 0;
    local_40[0xf] = 0;
    local_40[3] = 0;
    local_40[5] = 0x402e0000;
    local_40[7] = 0x3ff00000;
    local_40[10] = 0;
    local_40[0xb] = 0;
    local_48 = 0x140;
    local_44 = 0xf0;
  }
LAB_005c9731:
  if (param_3 != (int *)0x0) {
    *param_3 = param_2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_48;
    param_5[1] = local_44;
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar4 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_4 = *puVar4;
      puVar4 = puVar4 + 1;
      param_4 = param_4 + 1;
    }
  }
  return fVar6;
}


