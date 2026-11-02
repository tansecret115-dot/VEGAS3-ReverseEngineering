/* Module: mp3plug.dll
   Function: FUN_5f6db570
   Address: 5f6db570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6db570(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  uint local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_38 = 0;
  iVar8 = *(int *)(in_EAX + 8);
  if (0 < iVar8) {
    iVar4 = *(int *)(in_EAX + 0xc);
    iVar7 = *(int *)(in_EAX + 4);
    do {
      local_28 = 0;
      if (0 < iVar7) {
        do {
          iVar8 = 0;
          local_18 = 0;
          local_30 = 0;
          local_20 = 0;
          if (0 < iVar4) {
            iVar7 = *(int *)(in_EAX + 0x10);
            local_18 = 0;
            do {
              local_24 = 0;
              iVar5 = local_28;
              if (0 < iVar7) {
                do {
                  iVar7 = iVar5 * 4 + iVar8 * 8 + local_38 * 8;
                  local_20 = local_20 + *(int *)(in_EAX + 0x14 + iVar7);
                  iVar7 = *(int *)(in_EAX + 0x24 + iVar7);
                  iVar4 = FUN_5f6e8660(iVar7);
                  local_18 = local_18 + *(int *)(iVar7 + 8);
                  local_30 = local_30 + iVar4;
                  local_24 = local_24 + 1;
                  iVar7 = *(int *)(in_EAX + 0x10);
                  iVar5 = iVar5 + 1;
                } while (local_24 < iVar7);
                iVar4 = *(int *)(in_EAX + 0xc);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar4);
          }
          if (local_20 < local_30) {
            iVar8 = 0;
            bVar3 = false;
LAB_5f6db71b:
            local_34 = FUN_5f6e9940(local_30,local_20,local_18);
            if (local_34 == 1) {
              bVar3 = true;
            }
            iVar4 = *(int *)(in_EAX + 0xc);
            do {
              iVar8 = iVar8 + local_34;
              if (iVar8 < 0) {
                local_34 = local_34 - iVar8;
              }
              iVar7 = 0;
              bVar2 = false;
              if (iVar4 < 1) {
                return 0;
              }
              local_30 = 0;
              iVar5 = *(int *)(in_EAX + 0x10);
              do {
                if (0 < iVar5) {
                  iVar9 = 0;
                  iVar4 = local_28;
                  do {
                    iVar5 = *(int *)(in_EAX + 0x24 + iVar4 * 4 + iVar7 * 8 + local_38 * 8);
                    iVar1 = *(int *)(iVar5 + 0x69c);
                    uVar6 = local_34;
                    if (0x69 < (int)(local_34 + iVar1)) {
                      uVar6 = 0x69 - iVar1;
                    }
                    if (uVar6 != 0) {
                      bVar2 = true;
                    }
                    iVar5 = FUN_5f6e8400(iVar5,uVar6);
                    local_30 = local_30 + iVar5;
                    iVar5 = *(int *)(in_EAX + 0x10);
                    iVar9 = iVar9 + 1;
                    iVar4 = iVar4 + 1;
                  } while (iVar9 < iVar5);
                  iVar4 = *(int *)(in_EAX + 0xc);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar4);
              if (!bVar2) {
                return 0;
              }
              if (!bVar3) {
                if ((local_30 != local_20) && ((-1 < (int)local_34 || (local_30 <= local_20)))) {
                  bVar3 = false;
                  goto LAB_5f6db71b;
                }
                bVar3 = true;
              }
              if (local_30 <= local_20) goto LAB_5f6db64f;
              if (!bVar3) goto LAB_5f6db71b;
              local_34 = 1;
            } while( true );
          }
          iVar5 = *(int *)(in_EAX + 0x10);
LAB_5f6db64f:
          local_28 = iVar5 + local_28;
          iVar7 = *(int *)(in_EAX + 4);
        } while (local_28 < iVar7);
        iVar8 = *(int *)(in_EAX + 8);
      }
      local_38 = local_38 + iVar4;
    } while (local_38 < iVar8);
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar4 = *(int *)(in_EAX + 4);
    do {
      local_1c = 0;
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(in_EAX + 0x24 + iVar8 + iVar7 * 8);
          if (0xfff < *(int *)(iVar5 + 0x760) + *(int *)(iVar5 + 0x874)) {
            do {
              FUN_5f6e8400(iVar5,1);
            } while (0xfff < *(int *)(iVar5 + 0x760) + *(int *)(iVar5 + 0x874));
            iVar4 = *(int *)(in_EAX + 4);
          }
          iVar8 = iVar8 + 4;
          local_1c = local_1c + 1;
        } while (local_1c < iVar4);
        iVar8 = *(int *)(in_EAX + 8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  return 1;
}


