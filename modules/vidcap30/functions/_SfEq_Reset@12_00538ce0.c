/* Module: vidcap30.exe
   Function: _SfEq_Reset@12
   Address: 00538ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfEq_Reset_12(int param_1,undefined4 *param_2,int param_3)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 local_c;
  
                    /* 0x138ce0  366  _SfEq_Reset@12 */
  iVar2 = param_1;
  if ((param_3 != 0) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x10))) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        iVar9 = 0;
        do {
          iVar7 = iVar7 + 1;
          puVar10 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 * 4) + 0x80 + iVar9);
          iVar9 = iVar9 + 0xe0;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        } while (iVar7 < *(int *)(param_1 + 0x14));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar8 = 0;
    *(undefined4 *)(param_1 + 4) = 1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          iVar9 = 0;
          do {
            iVar7 = iVar7 + 1;
            puVar10 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 * 4) + iVar9);
            puVar11 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + iVar8 * 4) + iVar9);
            for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar9 = iVar9 + 0xe0;
          } while (iVar7 < *(int *)(param_1 + 0x14));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x10));
    }
  }
  piVar6 = (int *)(param_1 + 0x14);
  iVar8 = 0;
  param_1 = 0;
  if (0 < *piVar6) {
    piVar6 = param_2 + 6;
    do {
      if (_DAT_00587ad0 <= *(double *)(piVar6 + -2)) {
        local_c = (double)(*(int *)(iVar2 + 8) / 2 + -1);
        if (*(double *)(piVar6 + -2) <= local_c) {
          local_c = *(double *)(piVar6 + -2);
        }
      }
      else {
        local_c = 1.0;
      }
      *(double *)(piVar6 + -2) = local_c / (double)*(int *)(iVar2 + 8);
      dVar1 = _DAT_0059dbb8;
      if ((_DAT_0059dbb8 <= *(double *)(piVar6 + -4)) &&
         (dVar1 = _DAT_0059a448, *(double *)(piVar6 + -4) <= _DAT_0059a448)) {
        dVar1 = *(double *)(piVar6 + -4);
      }
      *(double *)(piVar6 + -4) = dVar1;
      dVar1 = _DAT_0059dba8;
      if ((_DAT_0059dba8 <= *(double *)(piVar6 + -6)) &&
         (dVar1 = _DAT_00593110, *(double *)(piVar6 + -6) <= _DAT_00593110)) {
        dVar1 = *(double *)(piVar6 + -6);
      }
      *(double *)(piVar6 + -6) = dVar1;
      iVar7 = *piVar6;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (2 < iVar7) {
        iVar7 = 2;
      }
      *piVar6 = iVar7;
      puVar10 = param_2;
      puVar11 = *(undefined4 **)(iVar2 + 0x24);
      for (iVar7 = (*(uint *)(iVar2 + 0x14) & 0x7ffffff) << 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      if ((piVar6[1] == 0) || (*(double *)(piVar6 + -6) == _DAT_00589f10)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined4 *)(*(int *)(iVar2 + 0x18) + param_1 * 4) = uVar3;
      if (*(int *)(*(int *)(iVar2 + 0x18) + param_1 * 4) != 0) {
        puVar4 = (undefined1 *)((int)piVar6 + *(int *)(iVar2 + 0x24) + (-0x18 - (int)param_2));
        iVar7 = *(int *)(puVar4 + 0x18);
        if (iVar7 == 0) {
          FUN_00538b80(puVar4,**(int **)(iVar2 + 0x1c) + iVar8);
        }
        else if (iVar7 == 1) {
          FUN_00538060(puVar4,**(int **)(iVar2 + 0x1c) + iVar8);
        }
        else if (iVar7 == 2) {
          FUN_00538c30(puVar4,**(int **)(iVar2 + 0x1c) + iVar8);
        }
        iVar7 = 1;
        if (1 < *(int *)(iVar2 + 0x10)) {
          do {
            iVar9 = iVar7 + 1;
            puVar10 = (undefined4 *)(iVar8 + **(int **)(iVar2 + 0x1c));
            puVar11 = (undefined4 *)((*(int **)(iVar2 + 0x1c))[iVar7] + iVar8);
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar5 = **(int **)(iVar2 + 0x1c);
            iVar7 = (*(int **)(iVar2 + 0x1c))[iVar7];
            *(undefined4 *)(iVar7 + 0xd0 + iVar8) = *(undefined4 *)(iVar5 + 0xd0 + iVar8);
            *(undefined4 *)(iVar7 + 0xd4 + iVar8) = *(undefined4 *)(iVar5 + 0xd4 + iVar8);
            iVar7 = iVar9;
          } while (iVar9 < *(int *)(iVar2 + 0x10));
        }
      }
      piVar6[-2] = (int)local_c;
      piVar6[-1] = local_c._4_4_;
      param_1 = param_1 + 1;
      iVar8 = iVar8 + 0xe0;
      piVar6 = piVar6 + 8;
    } while (param_1 < *(int *)(iVar2 + 0x14));
  }
  return;
}


