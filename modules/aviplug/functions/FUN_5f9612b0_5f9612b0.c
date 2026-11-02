/* Module: aviplug.dll
   Function: FUN_5f9612b0
   Address: 5f9612b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9612b0(int param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  SIZE_T local_124;
  int local_120;
  int local_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int *local_10c;
  short sStack_108;
  short sStack_106;
  int iStack_104;
  undefined4 uStack_fc;
  undefined1 auStack_f4 [4];
  int iStack_f0;
  int iStack_ec;
  int local_cc;
  int iStack_c8;
  uint uStack_b8;
  uint uStack_b4;
  
  iVar7 = 0;
  local_118 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x25c) + 0x14);
  local_124 = iVar3 * 0x90;
  local_11c = iVar3;
  hMem = GlobalAlloc(0x42,local_124);
  pvVar2 = GlobalLock(hMem);
  *(LPVOID *)(*(int *)(param_1 + 0x25c) + 0xc4) = pvVar2;
  if (*(int *)(*(int *)(param_1 + 0x25c) + 0xc4) != 0) {
    if (0 < iVar3) {
      local_120 = 0;
      do {
        piVar6 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) + iVar7 * 4);
        piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x25c) + 0xc4) + local_120);
        *piVar5 = 0;
        (**(code **)(*piVar6 + 0x10))(piVar6,&local_cc,0xcc);
        if (local_cc == 0x73646976) {
          if ((iStack_c8 == 0x64737664) &&
             (((uStack_b4 == 30000 && (uStack_b8 == 0x3e9)) || (uStack_b4 / uStack_b8 == 0x19)))) {
            local_124 = 0x28;
            (**(code **)(*piVar6 + 0x18))(piVar6,0,auStack_f4,&local_124);
            if (uStack_b4 == 30000) {
              if ((iStack_f0 == 0x2d0) && (iStack_ec == 0x1e0)) {
LAB_5f9613ea:
                *piVar5 = local_cc;
              }
            }
            else if ((iStack_f0 == 0x2d0) && (iStack_ec == 0x240)) goto LAB_5f9613ea;
          }
        }
        else if (local_cc == 0x73647561) {
          local_124 = 0x12;
          (**(code **)(*piVar6 + 0x18))(piVar6,0,&sStack_108,&local_124);
          if ((((sStack_108 == 1) && (uStack_fc._2_2_ == 0x10)) &&
              ((sStack_106 == 1 || (sStack_106 == 2)))) &&
             (((iStack_104 == 48000 || (iStack_104 == 0xac44)) || (iStack_104 == 32000))))
          goto LAB_5f9613ea;
        }
        iVar7 = iVar7 + 1;
        local_120 = local_120 + 0x90;
      } while (iVar7 < iVar3);
    }
    local_120 = -1;
    piVar6 = local_10c;
LAB_5f96141a:
    iVar7 = local_120 + 1;
    if (iVar7 < iVar3) {
      piVar5 = (int *)(iVar7 * 0x90 + *(int *)(*(int *)(param_1 + 0x25c) + 0xc4));
      do {
        if (*piVar5 == 0x73646976) break;
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 0x24;
      } while (iVar7 < iVar3);
    }
    if (iVar7 != iVar3) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x25c) + 0xc4) + iVar7 * 0x90;
      piVar5 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) + iVar7 * 4);
      local_124 = 0x28;
      local_120 = iVar7;
      (**(code **)(*piVar5 + 0x18))(piVar5,0,auStack_f4,&local_124);
      iVar7 = FUN_5f94ccb0((int)auStack_f4,0,(undefined4 *)(iVar8 + 0xc));
      if (-1 < iVar7) {
        iStack_114 = -1;
LAB_5f9614ab:
        iVar7 = iStack_114 + 1;
        if (iVar7 < iVar3) {
          piVar5 = (int *)(iVar7 * 0x90 + *(int *)(*(int *)(param_1 + 0x25c) + 0xc4));
          do {
            piVar6 = piVar5;
            if ((*piVar6 == 0x73647561) && (piVar6[4] == 0)) break;
            iVar7 = iVar7 + 1;
            piVar5 = piVar6 + 0x24;
          } while (iVar7 < iVar3);
        }
        if (iVar7 != iVar3) {
          piVar5 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) + iVar7 * 4);
          local_124 = 0x12;
          iStack_114 = iVar7;
          (**(code **)(*piVar5 + 0x18))(piVar5,0,&sStack_108,&local_124);
          iVar3 = FUN_5f94ce70(*(int **)(iVar8 + 0xc),&sStack_108,iStack_104 == 32000,&iStack_110);
          if (iVar3 == 0) {
            (**(code **)(*piVar5 + 0x10))(piVar5,&local_cc,0xcc);
            iVar3 = FUN_5f94d270(*(int *)(iVar8 + 0xc));
            puVar4 = FUN_5f943000((undefined4 *)0x0,(uStack_fc & 0xffff) * iVar3 * 9,0,0,
                                  (SIZE_T *)&local_10c,(SIZE_T *)0x0);
            piVar6[0x1d] = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) {
              FUN_5f962180((int)piVar6);
              iVar3 = local_11c;
            }
            else {
              piVar6[0x1e] = (int)local_10c;
              piVar6[0x23] = uStack_fc & 0xffff;
              iVar3 = *(int *)(iVar8 + 0x10);
              *(int *)(iVar8 + 0x10) = iVar3 + 1;
              iVar1 = piVar6[4];
              piVar5 = (int *)(iVar8 + 0x14 + iVar3 * 0x18);
              piVar6[4] = iVar1 + 1;
              *piVar5 = iStack_110;
              piVar5[5] = iVar7;
              (piVar6 + iVar1 * 6 + 5)[5] = local_120;
              piVar6[iVar1 * 6 + 5] = iStack_110;
              iVar3 = local_11c;
            }
          }
          else {
            *(undefined4 *)(iVar7 * 0x90 + *(int *)(*(int *)(param_1 + 0x25c) + 0xc4)) = 0;
            iVar3 = local_11c;
          }
          goto LAB_5f9614ab;
        }
        if (*(int *)(iVar8 + 0x10) == 0) {
          FUN_5f962180(iVar8);
        }
        else {
          local_118 = local_118 + 1;
        }
      }
      goto LAB_5f96141a;
    }
    if (local_118 != 0) {
      return;
    }
  }
  FUN_5f9621f0(*(int *)(param_1 + 0x25c));
  return;
}


