/* Module: vegas30.exe
   Function: FUN_004e24a0
   Address: 004e24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e260b) */
/* WARNING: Removing unreachable block (ram,0x004e26d7) */
/* WARNING: Removing unreachable block (ram,0x004e262d) */

void FUN_004e24a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  int local_8;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd50) != 0)) {
    FUN_004dbd80(param_1,&local_3c,&local_38,0);
    if (param_2 != 0) {
      local_38 = local_3c;
    }
    if ((local_38 != 0) && (local_34 = DAT_00647630, DAT_00647630 != 0)) {
      FUN_004582a0(DAT_00647630,&local_18,&local_30);
      FUN_004582a0(param_1,&local_28,&local_20);
      lVar5 = CONCAT44(local_1c,local_20);
      if (local_20 == 0 && local_1c == 0) {
        if (local_30 == 0 && local_2c == 0) {
          return;
        }
        if (param_2 == 0) {
          if (local_28 == 0 && local_24 == 0) {
            return;
          }
          iVar1 = 0;
          uVar4 = 0;
          lVar5 = CONCAT44(local_24,local_28);
          if ((local_2c <= local_24) &&
             ((local_2c < local_24 || (lVar5 = CONCAT44(local_24,local_28), local_30 < local_28))))
          {
            iVar1 = (local_24 - local_2c) - (uint)(local_28 < local_30);
            uVar4 = local_28 - local_30;
            lVar5 = CONCAT44(local_2c,local_30);
          }
        }
        else {
          lVar5 = FUN_004dbf80(param_1);
          if (lVar5 <= CONCAT44(local_24,local_28)) {
            return;
          }
          lVar5 = lVar5 - CONCAT44(local_24,local_28);
          iVar1 = local_24;
          uVar4 = local_28;
          if (CONCAT44(local_2c,local_30) < lVar5) {
            lVar5 = CONCAT44(local_2c,local_30);
          }
        }
      }
      else {
        iVar1 = local_24;
        uVar4 = local_28;
        if (local_30 == 0 && local_2c == 0) {
          if (param_2 == 0) {
            if (local_18 == 0 && local_14 == 0) {
              return;
            }
            lVar5 = CONCAT44(local_1c,local_20);
            if ((local_14 <= local_1c) &&
               ((local_14 < local_1c || (lVar5 = CONCAT44(local_1c,local_20), local_18 < local_20)))
               ) {
              iVar1 = ((local_24 - local_14) - (uint)(local_28 < local_18)) + local_1c +
                      (uint)CARRY4(local_28 - local_18,local_20);
              uVar4 = (local_28 - local_18) + local_20;
              lVar5 = CONCAT44(local_14,local_18);
            }
          }
        }
        else if ((local_1c < local_2c) || ((local_1c <= local_2c && (local_20 <= local_30)))) {
          lVar5 = CONCAT44(local_1c,local_20);
          if ((local_1c <= local_2c) &&
             ((local_1c < local_2c || (lVar5 = CONCAT44(local_1c,local_20), local_20 < local_30))))
          {
            if (param_2 == 0) {
              uVar3 = local_28 + local_20;
              iVar2 = local_24 + local_1c + (uint)CARRY4(local_28,local_20);
              uVar4 = uVar3 - local_30;
              iVar1 = (iVar2 - local_2c) - (uint)(uVar3 < local_30);
              if ((iVar1 < 1) && (iVar1 < 0)) {
                uVar4 = 0;
                iVar1 = 0;
              }
              lVar5 = CONCAT44((iVar2 - iVar1) - (uint)(uVar3 < uVar4),uVar3 - uVar4);
            }
            else {
              lVar6 = FUN_004dbf80(param_1);
              local_10 = (undefined4)lVar6;
              local_8 = local_28 + local_30;
              lVar5 = CONCAT44(local_2c,local_30);
              if (lVar6 < CONCAT44(local_24 + local_2c + (uint)CARRY4(local_28,local_30),local_8)) {
                lVar5 = lVar6 - CONCAT44(local_24,local_28);
              }
            }
          }
        }
        else {
          lVar5 = CONCAT44(local_2c,local_30);
          if (param_2 == 0) {
            iVar1 = ((local_24 - local_2c) - (uint)(local_28 < local_30)) + local_1c +
                    (uint)CARRY4(local_28 - local_30,local_20);
            uVar4 = (local_28 - local_30) + local_20;
            lVar5 = CONCAT44(local_2c,local_30);
          }
        }
      }
      iVar1 = FUN_004e2750(param_1,uVar4,iVar1,lVar5);
      if (-1 < iVar1) {
        FUN_0046e9d0(local_34,*(undefined4 *)(param_1 + 0xcd4),param_2);
        FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
      }
    }
  }
  return;
}


