/* Module: mp3plug.dll
   Function: FUN_5f71dad0
   Address: 5f71dad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f71dad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_c2c [768];
  int local_2c;
  uint local_28;
  int local_24;
  int local_1c;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 2)) {
    if (*(int *)(param_2 + 0x18) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = 3;
    }
    if (local_28 < 0xd) {
      do {
        iVar2 = local_28 * 4;
        iVar3 = *(int *)(param_3 + 0x18) * 0x1bc;
        iVar1 = *(int *)(param_3 + 4) * 0x94;
        iVar5 = *(int *)(&DAT_5f76990c + local_28 * 4 + iVar3 + iVar1);
        local_24 = iVar5 * 3;
        iVar4 = 0;
        local_28 = local_28 + 1;
        iVar2 = (*(int *)(&DAT_5f769910 + iVar1 + iVar3 + iVar2) * 3 + iVar5 * -3) / 3;
        if (local_24 < local_24 + iVar2) {
          local_2c = param_1 + (local_24 + iVar2) * 4;
          iVar1 = iVar5 * 0xc;
          puVar6 = (undefined4 *)(param_1 + iVar5 * 0xc);
          do {
            local_c2c[iVar4] = *puVar6;
            local_c2c[iVar4 + 1] = *(undefined4 *)(iVar1 + iVar2 * 4 + param_1);
            puVar6 = puVar6 + 1;
            local_c2c[iVar4 + 2] = *(undefined4 *)(param_1 + iVar1 + iVar2 * 8);
            iVar4 = iVar4 + 3;
            iVar1 = iVar1 + 4;
          } while ((int)puVar6 < local_2c);
        }
        if (0 < iVar2 * 3) {
          iVar5 = 0;
          local_1c = (int)local_c2c + ((int)(local_c2c + iVar2 * 3) - (int)local_c2c & 0xfffffff8U);
          for (puVar6 = local_c2c; (int)puVar6 < local_1c; puVar6 = puVar6 + 2) {
            *(undefined4 *)(param_1 + iVar5 + local_24 * 4) = *puVar6;
            *(undefined4 *)(param_1 + iVar5 + 4 + local_24 * 4) = puVar6[1];
            iVar5 = iVar5 + 8;
          }
          for (; (int)puVar6 < (int)(local_c2c + iVar2 * 3); puVar6 = puVar6 + 1) {
            *(undefined4 *)(param_1 + iVar5 + local_24 * 4) = *puVar6;
            iVar5 = iVar5 + 4;
          }
        }
      } while ((int)local_28 < 0xd);
    }
  }
  return;
}


