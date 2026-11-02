/* Module: oggplug.dll
   Function: FUN_00443b70
   Address: 00443b70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00443b70(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int local_30 [4];
  int local_20 [4];
  int local_10;
  uint local_c;
  
  piVar4 = param_1;
  uVar5 = FUN_00443790(param_1,param_2,param_3);
  param_1 = *(int **)(piVar4[0x12] + 0x1c);
  if (-1 < (int)uVar5) {
    piVar1 = piVar4 + 0x1e;
    iVar10 = 0;
    while( true ) {
      while( true ) {
        iVar6 = FUN_00441d10(piVar1,local_20);
        if (iVar6 < 1) break;
        iVar6 = FUN_004324d0(piVar4[0x18] * 0x20 + piVar4[0x12],local_20);
        if (iVar10 != 0) {
          uVar5 = piVar4[0x14];
          uVar7 = iVar10 + iVar6 >> 2;
          piVar4[0x14] = uVar5 + uVar7;
          piVar4[0x15] = piVar4[0x15] + (iVar10 + iVar6 >> 0x1f) + (uint)CARRY4(uVar5,uVar7);
        }
        uVar5 = param_1[1] + iVar6 >> 2;
        iVar10 = (param_1[1] + iVar6 >> 0x1f) + piVar4[0x15] + (uint)CARRY4(uVar5,piVar4[0x14]);
        if ((param_3 < iVar10) || ((param_3 <= iVar10 && (param_2 <= uVar5 + piVar4[0x14]))))
        goto LAB_00443d1c;
        FUN_00441bc0(piVar1,(int *)0x0);
        iVar10 = iVar6;
        if ((-2 < (int)local_c) && (local_c < 0x80000000)) {
          piVar4[0x14] = local_10;
          iVar6 = piVar4[0x18];
          piVar4[0x15] = local_c;
          if (0 < iVar6) {
            puVar8 = (uint *)piVar4[0x11];
            do {
              uVar7 = *puVar8;
              uVar3 = puVar8[1];
              puVar2 = (uint *)(piVar4 + 0x14);
              uVar5 = *puVar2;
              *puVar2 = *puVar2 + uVar7;
              puVar8 = puVar8 + 2;
              iVar6 = iVar6 + -1;
              piVar4[0x15] = piVar4[0x15] + uVar3 + (uint)CARRY4(uVar5,uVar7);
            } while (iVar6 != 0);
          }
        }
      }
      if (((iVar6 < 0) && (iVar6 != -3)) ||
         (uVar5 = FUN_00442990(piVar4,local_30,0xffffffff), (int)uVar5 < 0)) break;
      iVar6 = FUN_00440f10(local_30);
      if (piVar4[0x17] != iVar6) {
        FUN_00443750((int)piVar4);
      }
      if (piVar4[0x16] < 3) {
        iVar6 = FUN_00440f10(local_30);
        iVar10 = piVar4[0xd];
        iVar9 = 0;
        piVar4[0x17] = iVar6;
        if (0 < iVar10) {
          piVar11 = (int *)piVar4[0x10];
          do {
            if (*piVar11 == iVar6) break;
            iVar9 = iVar9 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar9 < iVar10);
        }
        if (iVar9 == iVar10) {
          return 0xffffff77;
        }
        piVar4[0x18] = iVar9;
        FUN_00440fa0(piVar1,iVar6);
        FUN_00441b70((int)piVar1);
        piVar4[0x16] = 3;
        iVar10 = 0;
      }
      FUN_00441860(piVar1,local_30);
    }
LAB_00443d1c:
    FUN_00443dd0((int)piVar4);
    if ((piVar4[0x15] <= param_3) && ((piVar4[0x15] < param_3 || ((uint)piVar4[0x14] < param_2)))) {
      do {
        uVar7 = param_2 - piVar4[0x14];
        uVar5 = FUN_00432040((int)(piVar4 + 0x78),&param_1);
        if ((int)uVar7 < (int)uVar5) {
          uVar5 = uVar7;
        }
        FUN_004320a0((int)(piVar4 + 0x78),uVar5);
        uVar3 = piVar4[0x14];
        piVar4[0x14] = uVar3 + uVar5;
        piVar4[0x15] = piVar4[0x15] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
        if (((int)uVar5 < (int)uVar7) && (iVar10 = FUN_00443e20(piVar4,1), iVar10 < 1)) {
          lVar12 = FUN_004433a0((int)piVar4,-1);
          *(longlong *)(piVar4 + 0x14) = lVar12;
        }
      } while ((piVar4[0x15] < param_3) ||
              ((piVar4[0x15] <= param_3 && ((uint)piVar4[0x14] < param_2))));
    }
    uVar5 = 0;
  }
  return uVar5;
}


