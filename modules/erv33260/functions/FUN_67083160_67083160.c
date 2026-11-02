/* Module: erv33260.dll
   Function: FUN_67083160
   Address: 67083160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_67083160(byte *param_1,char *param_2,uint *param_3,uint param_4)

{
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  iVar15 = (int)param_2 * 0xc;
  uVar12 = (uint)*(byte *)(iVar15 + 4 + *(int *)(param_1 + 0x30));
  if (DAT_6718e2f8 == 0) {
    FUN_67083100();
    DAT_6718e2f8 = 1;
  }
  if (*(int *)(param_1 + 0x6c) == 2) {
    iVar6 = *(int *)(param_1 + 0x4c);
    local_8 = (int *)(*(int *)(param_1 + 0x34) + (int)param_2 * 0x10);
    bVar9 = true;
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x1c) + local_8[2] * 2);
    local_10 = *(int *)(param_1 + 0x2c) + iVar15;
    bVar2 = *(byte *)(local_10 + 6);
    bVar3 = *(byte *)(iVar15 + 4 + *(int *)(param_1 + 0x30));
    if (bVar2 < 2) {
      (**(code **)(param_1 + 0x9c))
                (*(undefined4 *)(param_1 + 0x20),*(int *)(*(int *)(param_1 + 4) + 4) + *local_8,
                 *(int *)(*(int *)(param_1 + 8) + 4) + *local_8,*(undefined4 *)(param_1 + 0x40),0,
                 *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    }
    else if (bVar2 == 2) {
      uVar4 = *(undefined2 *)(*(int *)(param_1 + 0x18) + local_8[2] * 2);
      if (((char)uVar4 == '\0') && ((char)((ushort)uVar4 >> 8) == '\0')) {
        (**(code **)(param_1 + 0x9c))
                  (*(undefined4 *)(param_1 + 0x20),*(int *)(*(int *)(param_1 + 4) + 4) + *local_8,
                   *(int *)(*(int *)(param_1 + 8) + 4) + *local_8,*(undefined4 *)(param_1 + 0x40),
                   *(char *)(local_10 + 7) == '\0',*(undefined4 *)(param_1 + 0x5c),
                   *(undefined4 *)(param_1 + 0x60));
        bVar9 = false;
      }
      else {
        FUN_67085530((int)param_1,local_8[2]);
      }
    }
    else if (bVar2 == 3) {
      FUN_67085270((int)param_1,local_8[2]);
    }
    else {
      FUN_67084fb0((int)param_1,local_8[2]);
    }
    uVar10 = (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x40));
    *(int *)(*(int *)(param_1 + 0x30) + iVar15) =
         (-(uint)(uVar10 < *(uint *)(&DAT_67091308 +
                                    (uint)*(byte *)((int *)(*(int *)(param_1 + 0x30) + iVar15) + 1)
                                    * 4)) & 0xffff0001) + 0xffffff;
    if ((uint)(byte)(&DAT_67091278)[bVar3] * 8 + 10 <= uVar10) {
      uVar10 = uVar10 + (uint)(byte)(&DAT_67091278)[bVar3] * -8 + -10;
    }
    uVar7 = *(undefined4 *)(iVar15 + *(int *)(param_1 + 0x30));
    local_c = 0x7fffffff;
    local_10 = 0x7fffffff;
    *param_3 = 0x7fffffff;
    if ((bVar9) && (*(uint *)(&DAT_67091d08 + uVar12 * 4) <= uVar10)) {
      uVar4 = puVar1[2];
      FUN_67083490(param_1,param_2,(int *)&local_c,param_4,*(int *)(param_1 + 4),1);
      iVar13 = *(int *)(param_1 + 0x30);
      uVar5 = *puVar1;
      uVar8 = *(undefined4 *)(iVar15 + iVar13);
      local_8._2_2_ = uVar5;
      if (local_c < *(uint *)(&DAT_67091d08 + uVar12 * 4)) {
        uVar4 = param_3._2_2_;
      }
      else {
        *puVar1 = uVar4;
        FUN_67083490(param_1,param_2,(int *)&local_10,param_4,*(int *)(param_1 + 8),1);
        iVar13 = *(int *)(param_1 + 0x30);
        param_2 = *(char **)(iVar15 + iVar13);
        uVar4 = *puVar1;
      }
      if (local_10 < local_c) {
        *(undefined1 *)(iVar15 + iVar13 + 6) = 6;
        *(char **)(iVar15 + *(int *)(param_1 + 0x30)) = param_2;
        *param_3 = local_10;
        local_8._2_2_ = uVar4;
      }
      else {
        *(undefined1 *)(iVar15 + iVar13 + 6) = 5;
        *(undefined4 *)(iVar15 + *(int *)(param_1 + 0x30)) = uVar8;
        *param_3 = local_c;
      }
      *puVar1 = local_8._2_2_;
    }
    if (uVar10 < *param_3) {
      *(undefined1 *)(iVar15 + 6 + *(int *)(param_1 + 0x30)) = 8;
      *(undefined4 *)(iVar15 + *(int *)(param_1 + 0x30)) = uVar7;
      *param_3 = uVar10;
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((int)puVar1 + 1) = 0;
    }
    iVar15 = 4;
    puVar14 = puVar1;
    do {
      iVar13 = 4;
      puVar11 = puVar14;
      do {
        *puVar11 = *puVar1;
        puVar11 = puVar11 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      puVar14 = puVar14 + iVar6;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    return;
  }
  FUN_67083490(param_1,param_2,(int *)param_3,param_4,*(int *)(param_1 + 4),0);
  return;
}


