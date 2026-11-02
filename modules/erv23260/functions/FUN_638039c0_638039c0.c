/* Module: erv23260.dll
   Function: FUN_638039c0
   Address: 638039c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638039c0(void *this,uint param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  
  if (((int)param_1 < 1) || (1 < param_1)) {
    return 10;
  }
  if ((*(int *)((int)this + 0x7b8) != 0) && (1 < (int)param_1)) {
    return 5;
  }
  if ((*(int *)((int)this + 0x14) == 4) && (1 < (int)param_1)) {
    return 1;
  }
  local_c = 0;
  if (0 < (int)param_1) {
    piVar7 = (int *)(param_2 + 0x30);
    do {
      if (piVar7[-0xc] != local_c) {
        return 1;
      }
      iVar3 = piVar7[3];
      if (iVar3 < 0) {
        return 10;
      }
      if (local_c < iVar3) {
        return 10;
      }
      if ((iVar3 == local_c) && (local_c != 0)) {
        return 10;
      }
      if (0x10 < (uint)piVar7[4]) {
        return 10;
      }
      if (piVar7[4] != *(uint *)(param_2 + 0x40)) {
        return 1;
      }
      iVar3 = FUN_63802830((void *)((int)this + -100),piVar7[-0xb],piVar7[-10]);
      if ((iVar3 == 0) ||
         ((0 < local_c &&
          ((((iVar3 = piVar7[-0xb], iVar3 != piVar7[-0x20] ||
             (iVar10 = piVar7[-10], iVar10 != piVar7[-0x1f])) &&
            ((iVar3 != piVar7[-0x20] * 2 || (iVar10 = piVar7[-10], iVar10 != piVar7[-0x1f] * 2))))
           || (((iVar6 = param_2 + piVar7[3] * 0x54,
                iVar3 != *(int *)(param_2 + 4 + piVar7[3] * 0x54) || (iVar10 != *(int *)(iVar6 + 8))
                ) && ((iVar3 != *(int *)(iVar6 + 4) * 2 || (iVar10 != *(int *)(iVar6 + 8) * 2)))))))
          ))) {
        return 7;
      }
      iVar3 = piVar7[-9];
      if (iVar3 == 3) {
        bVar2 = true;
      }
      else if (((piVar7[-8] < 0) || (10000 < piVar7[-8])) ||
              (((iVar3 != 2 && ((iVar3 != 1 || (piVar7[-7] == 0)))) &&
               ((iVar3 != 0 || (((piVar7[-7] == 0 || (piVar7[-6] == 0)) || (piVar7[-5] == 0))))))))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return 10;
      }
      if (iVar3 == 3) {
        return 10;
      }
      if (piVar7[-4] != 0) {
        if (piVar7[-4] != 1) {
          return 10;
        }
        if (piVar7[-3] == 0) {
          return 10;
        }
      }
      iVar3 = piVar7[-2];
      if (iVar3 == 0) {
        return 10;
      }
      if (iVar3 == 3) {
        bVar2 = true;
      }
      else if (((piVar7[-1] < 0) || (10000 < piVar7[-1])) ||
              ((iVar3 != 2 && ((iVar3 != 1 || (*piVar7 == 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return 10;
      }
      uVar4 = piVar7[4];
      iVar3 = 0;
      iVar10 = 0;
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          cVar1 = *(char *)(uVar5 + 0x14 + (int)piVar7);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              iVar10 = iVar10 + 1;
            }
            else {
              if (cVar1 != '\x02') {
                return 3;
              }
              iVar3 = iVar3 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      if (iVar3 == 0) {
        if (iVar10 == 0) {
          return 3;
        }
        if (piVar7[-0xb] != *(int *)(param_2 + 4 + piVar7[3] * 0x54)) {
          return 7;
        }
        if (piVar7[-10] != *(int *)(param_2 + piVar7[3] * 0x54 + 8)) {
          return 7;
        }
      }
      if ((0 < local_c) && (uVar5 = 0, uVar4 != 0)) {
        do {
          if ((*(char *)(uVar5 + 0x14 + (int)piVar7) == '\x02') &&
             (*(char *)(uVar5 + piVar7[3] * 0x54 + 0x44 + param_2) != '\x02')) {
            return 3;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      local_c = local_c + 1;
      piVar7 = piVar7 + 0x15;
    } while (local_c < (int)param_1);
  }
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(uint *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x40);
  iVar3 = 0;
  if (0 < (int)param_1) {
    do {
      if (iVar3 != 0) {
        puVar8 = (undefined4 *)((int)this + iVar3 * 0x77c + -0x75c);
        puVar9 = (undefined4 *)((int)this + iVar3 * 0x77c + 0x20);
        for (iVar10 = 0x2f; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar8 = (undefined4 *)(param_2 + iVar3 * 0x54);
      puVar9 = puVar8;
      puVar11 = (undefined4 *)((int)this + iVar3 * 0x77c + 0x20);
      for (iVar10 = 0x15; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      iVar10 = 0;
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0xdc) = 1;
      }
      else {
        iVar6 = *(int *)((int)this + iVar3 * 0x77c + 0x5c) * 0x77c;
        if ((*(int *)((int)this + iVar3 * 0x77c + 0x24) == *(int *)(iVar6 + 0x24 + (int)this)) &&
           (*(int *)((int)this + iVar3 * 0x77c + 0x28) == *(int *)((int)this + iVar6 + 0x28))) {
          *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 2;
        }
        else {
          *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 3;
        }
      }
      uVar4 = 0;
      local_14 = 0;
      local_18 = 0;
      if (puVar8[0x10] != 0) {
        local_10 = (undefined4 *)((int)this + 0xe0);
        do {
          cVar1 = *(char *)(uVar4 + 0x44 + (int)puVar8);
          if (cVar1 == '\0') {
            *(undefined4 *)((int)this + (iVar3 * 0x1df + uVar4) * 4 + 0xe0) = 7;
          }
          else if (cVar1 == '\x01') {
            iVar10 = iVar10 + 1;
            *(undefined4 *)((int)this + (iVar3 * 0x1df + uVar4) * 4 + 0xe0) = 3;
            iVar6 = *(int *)((int)this + iVar3 * 0x77c + 0xdc);
            local_18 = iVar10;
            if (iVar6 == 1) {
              *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 5;
            }
            else if (iVar6 == 2) {
              *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 6;
            }
            else if (iVar6 == 3) {
              *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 7;
            }
          }
          else {
            if (cVar1 != '\x02') {
              return 3;
            }
            local_14 = local_14 + 1;
            if (iVar3 == 0) {
              *local_10 = 1;
            }
            else {
              *(undefined4 *)((int)this + (iVar3 * 0x1df + uVar4) * 4 + 0xe0) = 5;
            }
          }
          uVar4 = uVar4 + 1;
          local_10 = local_10 + 1;
        } while (uVar4 < (uint)puVar8[0x10]);
      }
      if (local_14 == 0) {
        if (iVar10 == 0) {
          return 3;
        }
        *(undefined4 *)((int)this + iVar3 * 0x77c + 0xdc) = 4;
        *(undefined1 *)((int)this + iVar3 * 0x77c + 0x760) = 0;
      }
      iVar10 = (**(code **)(*(int *)this + 0xc))(iVar3,puVar8 + 3);
      if (iVar10 != 0) {
        return iVar10;
      }
      iVar10 = (**(code **)(*(int *)this + 0x10))(iVar3,puVar8 + 8);
      if (iVar10 != 0) {
        return iVar10;
      }
      iVar10 = iVar3 + 1;
      *(int *)((int)this + iVar3 * 0x77c + 0x774) = local_18;
      iVar3 = iVar10;
    } while (iVar10 < (int)param_1);
  }
  return 0;
}


