/* Module: mp3plug.dll
   Function: FUN_5f6dc4a0
   Address: 5f6dc4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6dc4a0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x44);
    iVar7 = param_5 - iVar2;
    iVar6 = param_3 - iVar3;
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      return 2;
    }
    if (iVar6 < iVar7) {
      memmove((void *)(param_4 + iVar2 * 4),(void *)(param_2 + iVar3 * 4),iVar6 * 4);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar6;
      return 2;
    }
    memmove((void *)(param_4 + iVar2 * 4),(void *)(param_2 + iVar3 * 4),iVar7 * 4);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar7;
    return 1;
  }
  do {
    while( true ) {
      uVar4 = *(uint *)(param_1 + 0x44);
      uVar1 = *(uint *)(param_1 + 0x3c) - uVar4;
      if (uVar1 < (uint)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x38))) break;
      FUN_5f6dc750(param_4 + *(int *)(param_1 + 0x48) * 4,*(int *)(param_1 + 0x50) + uVar4 * 4);
      *(int *)(param_1 + 0x44) = local_1c + *(int *)(param_1 + 0x44);
      uVar4 = local_18 + *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = uVar4;
      if (uVar4 == param_5) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        return 1;
      }
    }
    if (param_3 == *(uint *)(param_1 + 0x4c)) {
      if (param_3 != 0) {
        iVar2 = *(int *)(param_1 + 0x54);
LAB_5f6dc6da:
        if ((iVar2 != 0) && (*(uint *)(param_1 + 0x48) < param_5)) {
          puVar5 = (undefined4 *)(param_4 + *(uint *)(param_1 + 0x48) * 4);
          do {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (puVar5 < (undefined4 *)(param_4 + param_5 * 4));
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return 2;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 != 0) goto LAB_5f6dc6da;
    }
    if (uVar4 != 0) {
      if (uVar4 < *(uint *)(param_1 + 0x3c)) {
        iVar2 = 0;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar2 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x50) + (uVar4 + iVar2) * 4);
          uVar4 = *(uint *)(param_1 + 0x44);
          iVar2 = iVar2 + 1;
        } while (uVar4 + iVar2 < *(uint *)(param_1 + 0x3c));
        uVar1 = *(uint *)(param_1 + 0x3c) - uVar4;
      }
      *(uint *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (param_3 == 0) {
      iVar2 = 0;
      uVar4 = *(uint *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x54) = 1;
      if (uVar4 < *(uint *)(param_1 + 0x40)) {
        do {
          iVar3 = uVar4 + iVar2;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4) = 0;
          uVar4 = *(uint *)(param_1 + 0x3c);
        } while (uVar4 + iVar2 < *(uint *)(param_1 + 0x40));
      }
    }
    else {
      iVar2 = 0;
      uVar4 = *(uint *)(param_1 + 0x3c);
      if (uVar4 < *(uint *)(param_1 + 0x40)) {
        do {
          if (param_3 <= (uint)(*(int *)(param_1 + 0x4c) + iVar2)) break;
          iVar6 = uVar4 + iVar2;
          iVar3 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar6 * 4) =
               *(undefined4 *)(param_2 + *(int *)(param_1 + 0x4c) * 4 + iVar3);
          uVar4 = *(uint *)(param_1 + 0x3c);
        } while (uVar4 + iVar2 < *(uint *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar2;
  } while( true );
}


