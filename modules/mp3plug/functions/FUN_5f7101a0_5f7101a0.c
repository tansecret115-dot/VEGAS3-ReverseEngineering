/* Module: mp3plug.dll
   Function: FUN_5f7101a0
   Address: 5f7101a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f7101a0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_bc [144];
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_14;
  uint local_8;
  
  local_24 = 0;
  piVar1 = *(int **)(*(int *)(in_EAX + 0x24) + 8);
  iVar3 = *(int *)(in_EAX + 0x10);
  if ((iVar3 < 2) || (local_20 = *(int *)(param_2 + 4), local_20 % iVar3 != 0)) {
    local_24 = (**(code **)(*piVar1 + 0x18))
                         (*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8),
                          *(int *)(param_2 + 4) - *(int *)(param_2 + 8));
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_24;
  }
  else {
    local_1c = param_2;
    if (iVar3 <= local_20 - *(int *)(param_2 + 8)) {
      do {
        iVar3 = (**(code **)(*piVar1 + 0x1c))();
        if (iVar3 < *(int *)(in_EAX + 0x10)) {
          return local_24;
        }
        pbVar4 = (byte *)(*(int *)(local_1c + 8) + *(int *)(local_1c + 0xc));
        local_8 = (uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                  (uint)pbVar4[3];
        if ((local_8 == 0x41434d00) &&
           (((uint)pbVar4[4] << 0x18 | (uint)pbVar4[5] << 0x10 | (uint)pbVar4[6] << 8 |
            (uint)pbVar4[7]) == 0x63726300)) {
          uVar5 = 0;
          iVar3 = *(int *)(in_EAX + 0xc);
          local_2c = 0;
          local_28 = 0;
          if (iVar3 == 48000) {
            local_28 = 0x180000;
            local_2c = 0x60;
            uVar5 = 0x400;
          }
          else if (iVar3 == 0xac44) {
            local_28 = 0x180000;
            local_2c = 0x68;
            uVar5 = 0;
          }
          else if (iVar3 == 32000) {
            local_28 = 0x180000;
            local_2c = 0x90;
            uVar5 = 0x800;
          }
          else if (iVar3 == 24000) {
            local_28 = 0x100000;
            local_2c = 0x18;
            uVar5 = 0x400;
          }
          else if (iVar3 == 0x5622) {
            local_28 = 0x100000;
            local_2c = 0x1a;
            uVar5 = 0;
          }
          else if (iVar3 == 16000) {
            local_28 = 0x100000;
            local_2c = 0x24;
            uVar5 = 0x800;
          }
          else if (iVar3 == 12000) {
            local_28 = 0;
            local_2c = 0x30;
            uVar5 = 0x400;
          }
          else if (iVar3 == 0x2b11) {
            local_28 = 0;
            local_2c = 0x34;
            uVar5 = 0;
          }
          else if (iVar3 == 8000) {
            local_28 = 0;
            local_2c = 0x48;
            uVar5 = 0x800;
          }
          if (*(int *)(in_EAX + 8) == 2) {
            iVar3 = 0;
          }
          else {
            iVar3 = 3;
          }
          local_28 = iVar3 << 6 | 0xffe21000U | uVar5 | local_28;
          if (local_2c != 0) {
            puVar6 = &stack0xfffffffc + local_2c;
            puVar7 = &stack0xfffffffc;
            local_14 = puVar6;
            puVar8 = &stack0xfffffffc;
            if ((int)&stack0xfffffffc < (int)puVar6) {
              do {
                puVar2 = local_14;
                puVar7[-0xb8] = 0;
                puVar7[-0xb7] = 0;
                puVar8 = puVar7 + 2;
                puVar7 = puVar8;
              } while ((int)puVar8 < (int)puVar2);
            }
            for (; (int)puVar8 < (int)puVar6; puVar8 = puVar8 + 1) {
              puVar8[-0xb8] = 0;
            }
          }
          local_bc[3] = (undefined1)local_28;
          local_20 = 0;
          local_bc[5] = 0xfe;
          local_bc[4] = 0xca;
          local_bc[2] = (undefined1)(local_28 >> 8);
          local_bc[1] = (undefined1)(local_28 >> 0x10);
          local_bc[0] = (undefined1)(local_28 >> 0x18);
          if (0 < *(int *)(in_EAX + 0x14)) {
            iVar3 = 0;
            do {
              (**(code **)(*piVar1 + 0x18))(local_bc,local_2c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(in_EAX + 0x14));
          }
          *(int *)(local_1c + 8) = *(int *)(in_EAX + 0x10) + *(int *)(local_1c + 8);
          iVar3 = *(int *)(in_EAX + 0x10);
          local_24 = local_24 + iVar3;
        }
        else {
          iVar3 = (**(code **)(*piVar1 + 0x18))(pbVar4,*(int *)(in_EAX + 0x10));
          local_24 = local_24 + iVar3;
          *(int *)(local_1c + 8) = iVar3 + *(int *)(local_1c + 8);
          iVar3 = *(int *)(in_EAX + 0x10);
        }
      } while (iVar3 <= *(int *)(local_1c + 4) - *(int *)(local_1c + 8));
    }
  }
  return local_24;
}


