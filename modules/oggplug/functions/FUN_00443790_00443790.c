/* Module: oggplug.dll
   Function: FUN_00443790
   Address: 00443790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004437f8) */
/* WARNING: Removing unreachable block (ram,0x00443b27) */

uint __cdecl FUN_00443790(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined3 extraout_var;
  int *piVar7;
  int iVar8;
  int extraout_EDX;
  int iVar9;
  uint extraout_EDX_00;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  int *local_64;
  undefined8 local_60;
  int *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40 [4];
  int local_30 [4];
  int local_20 [4];
  uint local_10;
  uint local_c;
  
  piVar1 = param_1;
  lVar15 = FUN_004433a0((int)param_1,-1);
  if (1 < param_1[0x16]) {
    if (param_1[1] == 0) {
      return 0xffffff76;
    }
    if ((-1 < param_3) && (CONCAT44(param_3,param_2) <= lVar15)) {
      iVar12 = param_1[0xd] + -1;
      local_60 = lVar15;
      if (-1 < iVar12) {
        puVar10 = (uint *)(param_1[0x11] + iVar12 * 8);
        do {
          uVar4 = (uint)lVar15 - *puVar10;
          iVar8 = ((int)((ulonglong)lVar15 >> 0x20) - puVar10[1]) - (uint)((uint)lVar15 < *puVar10);
          lVar15 = lVar15 - *(longlong *)puVar10;
          if ((iVar8 < param_3) || ((iVar8 <= param_3 && (uVar4 <= param_2)))) break;
          iVar12 = iVar12 + -1;
          puVar10 = puVar10 + -2;
        } while (-1 < iVar12);
        local_60 = CONCAT44(iVar8,uVar4);
      }
      piVar7 = (int *)(param_2 - (uint)lVar15);
      iVar8 = (param_3 - (int)((ulonglong)lVar15 >> 0x20)) - (uint)(param_2 < (uint)lVar15);
      piVar13 = *(int **)(param_1[0xe] + 8 + iVar12 * 8);
      piVar11 = *(int **)(param_1[0xe] + iVar12 * 8);
      local_48 = *(int **)(param_1[0x11] + iVar12 * 8);
      local_44 = *(int *)(param_1[0x11] + 4 + iVar12 * 8);
      local_50 = (int *)0x0;
      local_4c = 0;
      param_1 = piVar13;
      local_64 = piVar11;
      if ((int)piVar11 < (int)piVar13) {
        do {
          uVar4 = (int)param_1 - (int)piVar11;
          piVar13 = piVar11;
          if (0x2133 < (int)uVar4) {
            lVar15 = __allmul((int)piVar7 - (int)local_50,
                              (iVar8 - local_4c) - (uint)(piVar7 < local_50),uVar4,
                              (int)uVar4 >> 0x1f);
            uVar16 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),
                              (int)local_48 - (int)local_50,
                              (local_44 - local_4c) - (uint)(local_48 < local_50));
            piVar13 = (int *)((int)uVar16 + -0x2134 + (int)piVar11);
            if ((int)piVar13 <= (int)piVar11) {
              piVar13 = (int *)((int)piVar11 + 1);
            }
          }
          FUN_00442cc0(piVar1,(int)piVar13);
LAB_004438f7:
          piVar5 = (int *)FUN_00442990(piVar1,local_30,(int)param_1 - (int)piVar13);
          if (piVar5 == (int *)0xffffff80) goto LAB_00443b3f;
          if ((int)piVar5 < 0) {
            if ((int)piVar13 <= (int)((int)piVar11 + 1U)) break;
            if (piVar13 == (int *)0x0) goto LAB_00443b3f;
            piVar5 = piVar13 + -0x84d;
            if ((int)(piVar13 + -0x84d) <= (int)piVar11) {
              piVar5 = (int *)((int)piVar11 + 1U);
            }
LAB_004439b6:
            FUN_00442cc0(piVar1,(int)piVar5);
            piVar13 = piVar5;
LAB_004439c0:
            if ((int)param_1 <= (int)piVar11) break;
            goto LAB_004438f7;
          }
          piVar6 = (int *)FUN_00440e30(local_30);
          if ((extraout_EDX <= iVar8) && ((extraout_EDX < iVar8 || (piVar6 < piVar7)))) {
            piVar11 = (int *)piVar1[2];
            uVar4 = iVar8 - ((int)piVar11 >> 0x1f);
            bVar14 = -1 < (int)(uVar4 - (piVar7 < piVar11));
            local_64 = piVar5;
            local_50 = piVar6;
            local_4c = extraout_EDX;
            piVar6 = local_48;
            iVar2 = local_44;
            if ((uVar4 != piVar7 < piVar11 && bVar14) ||
               ((piVar13 = piVar11, bVar14 && (0xac44 < (uint)((int)piVar7 - (int)piVar11)))))
            goto LAB_004439db;
            goto LAB_004439c0;
          }
          if ((int)piVar13 <= (int)((int)piVar11 + 1U)) break;
          iVar9 = (int)param_1 >> 0x1f;
          bVar14 = param_1 == (int *)piVar1[2];
          param_1 = piVar5;
          iVar2 = extraout_EDX;
          if ((bVar14) && (iVar2 = extraout_EDX, iVar9 == piVar1[3])) {
            piVar5 = piVar13 + -0x84d;
            if ((int)piVar5 <= (int)piVar11) {
              piVar5 = (int *)((int)piVar11 + 1);
            }
            goto LAB_004439b6;
          }
LAB_004439db:
          local_44 = iVar2;
          local_48 = piVar6;
        } while ((int)piVar11 < (int)param_1);
      }
      FUN_00443750((int)piVar1);
      FUN_00442cc0(piVar1,(int)local_64);
      uVar4 = FUN_00442990(piVar1,local_40,0xffffffff);
      if ((int)uVar4 < 0) {
        return 0xfffffffe;
      }
      iVar8 = FUN_00440f10(local_40);
      piVar13 = piVar1 + 0x1e;
      piVar1[0x17] = iVar8;
      piVar1[0x18] = iVar12;
      FUN_00440fa0(piVar13,iVar8);
      FUN_00441b70((int)piVar13);
      piVar1[0x16] = 3;
      FUN_00441860(piVar13,local_40);
      do {
        piVar5 = (int *)FUN_00441d10(piVar13,local_20);
        if (piVar5 == (int *)0x0) {
          while (piVar5 = (int *)FUN_00442be0(piVar1,local_40), -1 < (int)piVar5) {
            FUN_00440e30(local_40);
            if ((extraout_EDX_00 < 0x80000000) ||
               (bVar3 = FUN_00440e00(local_40), CONCAT31(extraout_var,bVar3) == 0)) {
              uVar4 = FUN_004434a0(piVar1,(uint)piVar5);
              return uVar4;
            }
            piVar1[2] = (int)piVar5;
            piVar1[3] = (int)piVar5 >> 0x1f;
          }
LAB_00443b3f:
          piVar1[0x14] = -1;
          piVar1[0x15] = -1;
          FUN_00443750((int)piVar1);
          return (uint)piVar5;
        }
        if ((int)piVar5 < 0) goto LAB_00443b3f;
        if ((local_10 & local_c) != 0xffffffff) {
          iVar12 = local_c + local_60._4_4_ + (uint)CARRY4(local_10,(uint)local_60);
          piVar1[0x14] = local_10 + (uint)local_60;
          piVar1[0x15] = iVar12;
          if ((iVar12 <= param_3) &&
             (((iVar12 < param_3 || ((uint)piVar1[0x14] <= param_2)) &&
              (lVar15 = FUN_004433a0((int)piVar1,-1), CONCAT44(param_3,param_2) <= lVar15)))) {
            return 0;
          }
          piVar5 = (int *)0xffffff7f;
          goto LAB_00443b3f;
        }
        FUN_00441bc0(piVar13,(int *)0x0);
      } while( true );
    }
  }
  return 0xffffff7d;
}


