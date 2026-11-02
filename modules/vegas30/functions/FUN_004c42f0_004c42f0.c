/* Module: vegas30.exe
   Function: FUN_004c42f0
   Address: 004c42f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c42f0(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar4 = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  puVar5 = (uint *)FUN_005b87b0(uVar1);
  if (puVar5 == (uint *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = *puVar5;
  }
  local_8 = 0;
  if (local_10 != 0) {
    do {
      iVar2 = *(int *)(puVar5[2] + local_8 * 4);
      if (*(int *)(iVar2 + 4) == 2) {
        FUN_005b83b0(uVar1,1);
        bVar3 = false;
        if (uVar4 < param_3) {
          pfVar9 = (float *)(iVar2 + 0x60 + uVar4 * 8);
          uVar7 = uVar4;
LAB_004c435d:
          if (*pfVar9 <= (float)_DAT_00610fd8) goto code_r0x004c436c;
          FUN_004eaed0(uVar1,iVar2,0xffffffff,0x1e);
          bVar3 = true;
          uVar7 = uVar4;
          if (uVar4 < param_3 - 1) {
            iVar6 = (param_3 - 1) - uVar4;
            puVar8 = (undefined4 *)(iVar2 + 0x5c + uVar4 * 8);
            uVar7 = iVar6 + uVar4;
            do {
              *puVar8 = puVar8[2];
              puVar8[1] = puVar8[3];
              puVar8 = puVar8 + 2;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          *(undefined4 *)(iVar2 + 0x60 + uVar7 * 8) = 0;
          *(uint *)(iVar2 + 0x5c + uVar7 * 8) = *(uint *)(iVar2 + 0x5c + uVar7 * 8) | 4;
        }
LAB_004c43c3:
        iVar6 = FUN_0047c7d0(iVar2 + 0x638,uVar4 + 0x40);
        if (iVar6 != 0) {
          if (!bVar3) {
            FUN_004eaed0(uVar1,iVar2,0xffffffff,0x1e);
            bVar3 = true;
          }
          FUN_0047c810(iVar2 + 0x638,uVar4 + 0x40);
        }
        if (uVar4 + 1 < param_3) {
          param_2 = uVar4 + 0x41;
          local_c = param_3 - (uVar4 + 1);
          do {
            iVar6 = FUN_0047c7d0(iVar2 + 0x638,param_2);
            if (iVar6 != 0) {
              if (!bVar3) {
                FUN_004eaed0(uVar1,iVar2,0xffffffff,0x1e);
                bVar3 = true;
              }
              *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + -1;
            }
            param_2 = param_2 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        FUN_005b84d0(uVar1,1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  return;
code_r0x004c436c:
  uVar7 = uVar7 + 1;
  pfVar9 = pfVar9 + 2;
  if (param_3 <= uVar7) goto LAB_004c43c3;
  goto LAB_004c435d;
}


