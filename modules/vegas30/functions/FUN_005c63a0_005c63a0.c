/* Module: vegas30.exe
   Function: FUN_005c63a0
   Address: 005c63a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c63a0(int param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 *param_6,
                undefined4 *param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_34;
  undefined **local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_24 = -1;
  FUN_005b7c60();
  local_28 = &PTR_FUN_0061b9cc;
  local_34 = 0;
  FUN_005b8630(param_1);
  iVar3 = FUN_005b4c00(&local_28);
  if (-1 < iVar3) {
    iVar3 = *(int *)(param_1 + 0x68c);
    uVar1 = *(uint *)(param_1 + 0x688);
    if ((iVar3 <= param_3) && ((iVar3 < param_3 || (uVar1 <= param_2)))) {
      uVar6 = uVar1 + *(uint *)(param_1 + 0x690);
      iVar5 = iVar3 + *(int *)(param_1 + 0x694) + (uint)CARRY4(uVar1,*(uint *)(param_1 + 0x690));
      if ((param_3 <= iVar5) && ((param_3 < iVar5 || (param_2 <= uVar6)))) {
        iVar4 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
        if ((((iVar3 <= iVar4) &&
             ((((iVar3 < iVar4 || (uVar1 <= param_2 + param_4)) && (iVar4 <= iVar5)) &&
              ((iVar4 < iVar5 || (param_2 + param_4 <= uVar6)))))) &&
            (local_24 == *(int *)(param_1 + 0x69c))) &&
           (((local_18 == *(int *)(param_1 + 0x6a8) && (local_10 == *(int *)(param_1 + 0x6b0))) &&
            (local_8 == *(int *)(param_1 + 0x6b8))))) {
          bVar2 = true;
          iVar5 = 0;
          do {
            if (local_18 <= iVar5) {
              if (bVar2) {
                iVar5 = 0;
                bVar2 = true;
                goto LAB_005c64e2;
              }
              break;
            }
            if (*(int *)(local_14 + iVar5 * 4) != *(int *)(*(int *)(param_1 + 0x6ac) + iVar5 * 4)) {
              bVar2 = false;
            }
            iVar5 = iVar5 + 1;
          } while (bVar2);
        }
      }
    }
  }
  goto LAB_005c655c;
  while( true ) {
    if (*(int *)(local_c + iVar5 * 4) != *(int *)(*(int *)(param_1 + 0x6b4) + iVar5 * 4)) {
      bVar2 = false;
    }
    iVar5 = iVar5 + 1;
    if (!bVar2) break;
LAB_005c64e2:
    if (local_10 <= iVar5) {
      if (bVar2) {
        iVar5 = 0;
        bVar2 = true;
        goto LAB_005c6509;
      }
      break;
    }
  }
  goto LAB_005c655c;
  while( true ) {
    if (*(int *)(local_4 + iVar5 * 4) != *(int *)(*(int *)(param_1 + 0x6bc) + iVar5 * 4)) {
      bVar2 = false;
    }
    iVar5 = iVar5 + 1;
    if (!bVar2) break;
LAB_005c6509:
    if (local_8 <= iVar5) {
      if ((bVar2) && (local_34 = param_1 + 0x584, param_6 != (undefined4 *)0x0)) {
        *param_6 = *(undefined4 *)(param_1 + 0x688);
        param_6[1] = iVar3;
        *param_7 = *(undefined4 *)(param_1 + 0x690);
        param_7[1] = *(undefined4 *)(param_1 + 0x694);
      }
      break;
    }
  }
LAB_005c655c:
  local_28 = &PTR_FUN_0061b9cc;
  FUN_005b7c80();
  return local_34;
}


