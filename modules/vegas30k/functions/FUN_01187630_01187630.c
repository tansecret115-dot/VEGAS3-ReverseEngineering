/* Module: vegas30k.dll
   Function: FUN_01187630
   Address: 01187630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01187630(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = local_18;
  local_c = local_14;
  if (*(int *)(param_1 + 0x5ac) != 0) {
    iVar4 = *(int *)(param_1 + 0x5a4) + *(int *)(param_1 + 0x594) +
            (uint)CARRY4(*(uint *)(param_1 + 0x5a0),*(uint *)(param_1 + 0x590));
    if ((*(int *)(param_1 + 0x534) <= iVar4) &&
       ((*(int *)(param_1 + 0x534) < iVar4 ||
        (*(uint *)(param_1 + 0x530) <= *(uint *)(param_1 + 0x5a0) + *(uint *)(param_1 + 0x590))))) {
      uVar1 = *(uint *)(param_1 + 0x8a0);
      iVar4 = *(int *)(param_1 + 0x8a4);
      if (*(int *)(param_1 + 0x5ac) != 0) {
        iVar5 = *(int *)(param_1 + 0x594);
        uVar2 = *(uint *)(param_1 + 0x590);
        if ((iVar5 <= iVar4) && ((iVar5 < iVar4 || (uVar2 <= uVar1)))) {
          iVar5 = *(int *)(param_1 + 0x5a4) + iVar5 + (uint)CARRY4(*(uint *)(param_1 + 0x5a0),uVar2)
          ;
          if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar1 <= *(uint *)(param_1 + 0x5a0) + uVar2)))
             ) {
            if (local_18 != 0 || local_14 != 0) {
              iVar6 = (iVar4 - local_14) - (uint)(uVar1 < local_18);
              iVar5 = *(int *)(param_1 + 0x594);
              if ((iVar6 <= iVar5) &&
                 ((iVar6 < iVar5 || (uVar1 - local_18 < *(uint *)(param_1 + 0x590))))) {
                local_10 = uVar1 - *(uint *)(param_1 + 0x590);
                local_c = (iVar4 - iVar5) - (uint)(uVar1 < *(uint *)(param_1 + 0x590));
              }
            }
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x6a4) != 0) && (*(int *)(param_1 + 0x74c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x730);
    iVar4 = *(int *)(param_1 + 0x734);
    iVar5 = *(int *)(param_1 + 0x744) + iVar4 + (uint)CARRY4(*(uint *)(param_1 + 0x740),uVar1);
    if ((*(int *)(param_1 + 0x6f4) <= iVar5) &&
       ((*(int *)(param_1 + 0x6f4) < iVar5 ||
        (*(uint *)(param_1 + 0x6f0) <= *(uint *)(param_1 + 0x740) + uVar1)))) {
      uVar2 = *(uint *)(param_1 + 0x700);
      iVar5 = *(int *)(param_1 + 0x704);
      if (*(int *)(param_1 + 0x74c) != 0) {
        iVar6 = *(int *)(param_1 + 0x734);
        uVar3 = *(uint *)(param_1 + 0x730);
        if ((iVar6 <= iVar5) && ((iVar6 < iVar5 || (uVar3 <= uVar2)))) {
          iVar6 = *(int *)(param_1 + 0x744) + iVar6 + (uint)CARRY4(*(uint *)(param_1 + 0x740),uVar3)
          ;
          if ((iVar5 <= iVar6) &&
             (((iVar5 < iVar6 || (uVar2 <= *(uint *)(param_1 + 0x740) + uVar3)) &&
              (local_18 != 0 || local_14 != 0)))) {
            iVar6 = (iVar5 - local_14) - (uint)(uVar2 < local_18);
            if ((iVar6 <= iVar4) && ((iVar6 < iVar4 || (uVar2 - local_18 < uVar1)))) {
              local_18 = uVar2 - uVar1;
              local_14 = (iVar5 - iVar4) - (uint)(uVar2 < uVar1);
            }
          }
        }
      }
    }
  }
  if (((int)local_c <= (int)local_14) && (((int)local_c < (int)local_14 || (local_10 < local_18))))
  {
    *param_2 = local_10;
    param_2[1] = local_c;
    return;
  }
  *param_2 = local_18;
  param_2[1] = local_14;
  return;
}


