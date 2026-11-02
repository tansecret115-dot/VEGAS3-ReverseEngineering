/* Module: sftrans1.dll
   Function: FUN_0047fc00
   Address: 0047fc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0047fc00(int *param_1,int *param_2,RECT *param_3,int param_4,int *param_5,int *param_6,
            int param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  byte *pbVar6;
  char *pcVar7;
  byte local_18 [6];
  undefined1 local_12;
  RECT local_10;
  
  if (param_5 == (int *)0x0) {
    param_6 = param_2;
    param_7 = param_4;
    param_5 = param_1;
  }
  iVar2 = FUN_004ddb90(param_1);
  iVar3 = FUN_004ddb90(param_5);
  if ((((iVar2 != 0x1d) && (iVar2 != 0x1c)) || ((iVar3 != 0x1d && (iVar3 != 0x1c)))) ||
     ((param_1[1] != param_5[1] ||
      (uVar4 = param_1[2] >> 0x1f, iVar2 = (param_1[2] ^ uVar4) - uVar4, uVar4 = param_5[2] >> 0x1f,
      iVar2 != (param_5[2] ^ uVar4) - uVar4)))) {
    return 0x80004001;
  }
  local_18[0] = ftol();
  local_18[1] = ftol();
  local_18[2] = ftol();
  local_18[4] = ftol();
  local_18[5] = ftol();
  local_12 = ftol();
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = param_1[1];
  local_10.bottom = iVar2;
  iVar2 = 0;
  if (param_3 != (RECT *)0x0) {
    IntersectRect(&local_10,&local_10,param_3);
    iVar2 = local_10.top;
  }
  if (local_10.right == local_10.left) {
    return 0;
  }
  if (local_10.bottom == iVar2) {
    return 0;
  }
  if (param_7 == 0) {
    uVar4 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_7 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  if (param_4 == 0) {
    uVar4 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  if (param_2 == (int *)0x0) {
    if (param_1[4] == 0) {
      if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_0047fdb4;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_1[4] == 3) {
        param_2 = param_1 + 0xd;
        goto LAB_0047fdbe;
      }
LAB_0047fdb4:
      iVar3 = param_1[8];
    }
    param_2 = (int *)(*param_1 + iVar3 * 4 + (int)param_1);
  }
LAB_0047fdbe:
  if (param_6 != (int *)0x0) goto LAB_0047fe06;
  if (param_5[4] == 0) {
    if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0047fdf9;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_5[4] == 3) {
      param_6 = param_5 + 0xd;
      goto LAB_0047fe06;
    }
LAB_0047fdf9:
    iVar3 = param_5[8];
  }
  param_6 = (int *)(*param_5 + iVar3 * 4 + (int)param_5);
LAB_0047fe06:
  param_2 = (int *)(param_4 * iVar2 + (int)param_2);
  param_6 = (int *)(param_7 * iVar2 + (int)param_6);
  for (; iVar2 < local_10.bottom; iVar2 = iVar2 + 1) {
    if (local_10.left < local_10.right) {
      LVar5 = local_10.left;
      pbVar6 = (byte *)((int)param_6 + local_10.left * 4 + 3);
      pcVar7 = (char *)((int)param_2 + local_10.left * 4 + 2);
      do {
        uVar4 = ((int)(LVar5 + (LVar5 >> 0x1f & 7U)) >> 3) +
                ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) & 1;
        iVar3 = (uint)local_18[uVar4 * 4 + 2] * (0xff - (uint)*pbVar6) + 0x7f;
        *pcVar7 = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) +
                  (pcVar7 + 4)[(int)param_6 + (-4 - (int)param_2)];
        iVar3 = (uint)local_18[uVar4 * 4 + 1] * (0xff - (uint)*pbVar6) + 0x7f;
        pcVar7[-1] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + pbVar6[-2];
        iVar3 = (uint)local_18[uVar4 * 4] * (0xff - (uint)*pbVar6) + 0x7f;
        LVar5 = LVar5 + 1;
        pcVar7[-2] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + pbVar6[-3];
        pcVar7[1] = -1;
        pbVar6 = pbVar6 + 4;
        pcVar7 = pcVar7 + 4;
      } while (LVar5 < local_10.right);
    }
    param_2 = (int *)((int)param_2 + param_4);
    param_6 = (int *)((int)param_6 + param_7);
  }
  return 0;
}


