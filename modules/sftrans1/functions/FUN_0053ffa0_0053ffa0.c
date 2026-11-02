/* Module: sftrans1.dll
   Function: FUN_0053ffa0
   Address: 0053ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053ffa0(int *param_1,undefined4 *param_2,int *param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  RECT local_20;
  tagRECT local_10;
  
  if (*param_1 == 0) {
    return 0x80004005;
  }
  piVar2 = (int *)param_1[0xc];
  if (piVar2 != (int *)0x0) goto LAB_0054000c;
  if (param_1[5] == 0) {
    if (((param_1[9] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0x12), uVar1 == 0)) || (8 < uVar1)
       ) goto LAB_00540002;
    iVar8 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_1[5] == 3) {
      piVar2 = param_1 + 0xe;
      goto LAB_0054000c;
    }
LAB_00540002:
    iVar8 = param_1[9];
  }
  piVar2 = (int *)(param_1[1] + iVar8 * 4 + (int)(param_1 + 1));
LAB_0054000c:
  uVar3 = (uint)*(ushort *)((int)param_1 + 0x12) * param_1[2] + 0x1f;
  uVar3 = (uint)((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3) >> 2;
  local_20.left = param_2[2] + *param_3;
  local_20.right = param_2[4] + *param_3;
  local_20.bottom = param_2[5] + param_3[1];
  local_20.top = param_2[3] + param_3[1];
  piVar7 = (int *)*param_2;
  iVar8 = (param_2[6] + param_2[4]) - param_2[2];
  BVar4 = IntersectRect(&local_10,&local_20,(RECT *)(param_1 + 0xf));
  if (BVar4 != 0) {
    local_20.left = ((RECT *)(param_1 + 0xf))->left - local_20.left;
    if (local_20.left < 1) {
      piVar2 = piVar2 + -local_20.left;
    }
    else {
      piVar7 = piVar7 + local_20.left;
    }
    local_20.top = param_1[0x10] - local_20.top;
    if (local_20.top < 1) {
      piVar2 = piVar2 + -(local_20.top * uVar3);
    }
    else {
      piVar7 = piVar7 + local_20.top * iVar8;
    }
    param_1 = (int *)(local_10.bottom - local_10.top);
    if (0 < (int)param_1) {
      do {
        piVar9 = piVar2;
        piVar10 = piVar7;
        for (uVar5 = local_10.right - local_10.left & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        piVar2 = piVar2 + uVar3;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(char *)piVar10 = (char)*piVar9;
          piVar9 = (int *)((int)piVar9 + 1);
          piVar10 = (int *)((int)piVar10 + 1);
        }
        piVar7 = piVar7 + iVar8;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
}


