/* Module: vfplugs.dll
   Function: FUN_0041b140
   Address: 0041b140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041b140(int param_1,int *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 extraout_ST0;
  HWND pHVar9;
  uint local_78;
  byte local_70;
  byte bStack_6f;
  ushort uStack_6e;
  uint local_68;
  int local_64;
  double local_60;
  double local_58;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  double local_30;
  double local_28;
  double local_20 [4];
  
  FUN_00450210(local_20,(float *)(param_1 + 0x158));
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (iVar3 = FUN_0041a430(param_1,&local_40), iVar3 != 0))
  {
    local_58 = 0.0;
    uVar7 = local_68;
    if ((&stack0x00000000 != (undefined1 *)0x60) &&
       (((int *)(param_1 + 0x188) != (int *)0x0 && (&stack0x00000000 != (undefined1 *)0x68)))) {
      iVar3 = *(int *)(param_1 + 400);
      uVar7 = *(int *)(param_1 + 0x188);
      iVar4 = ftol();
      local_64 = *(int *)(param_1 + 0x18c);
      if (((int)uVar7 <= iVar4) && (iVar3 = iVar3 + -1, uVar7 = iVar4, iVar3 < iVar4)) {
        uVar7 = iVar3;
      }
      if ((!SBORROW4(local_64,local_64)) &&
         (iVar3 = *(int *)(param_1 + 0x194) + -1, iVar3 < local_64)) {
        local_64 = iVar3;
      }
    }
    local_44 = *(int *)(param_1 + 0x194) + 6;
    iVar3 = *param_2;
    if (((((int)(uVar7 + -6) <= iVar3) && (iVar3 <= (int)(uVar7 + 6))) &&
        (*(int *)(param_1 + 0x194) <= param_2[1])) && (param_2[1] <= local_44)) {
      *(undefined4 *)(param_1 + 800) = 0;
      *(uint *)(param_1 + 0x31c) = iVar3 - uVar7;
      *(undefined4 *)(param_1 + 0x13c) = 3;
      return 1;
    }
    local_58 = 0.0;
    if (((&stack0x00000000 != (undefined1 *)0x60) && (param_1 != -0x198)) &&
       (&stack0x00000000 != (undefined1 *)0x68)) {
      iVar4 = *(int *)(param_1 + 0x1a0);
      uVar7 = *(int *)(param_1 + 0x198);
      iVar5 = ftol();
      local_64 = *(int *)(param_1 + 0x19c);
      if (((int)uVar7 <= iVar5) && (iVar4 = iVar4 + -1, uVar7 = iVar5, iVar4 < iVar5)) {
        uVar7 = iVar4;
      }
      if ((!SBORROW4(local_64,local_64)) &&
         (iVar4 = *(int *)(param_1 + 0x1a4) + -1, iVar4 < local_64)) {
        local_64 = iVar4;
      }
    }
    if (((((int)(uVar7 + -6) <= iVar3) && (iVar3 <= (int)(uVar7 + 6))) &&
        (*(int *)(param_1 + 0x1a4) <= param_2[1])) && (param_2[1] <= *(int *)(param_1 + 0x1a4) + 6))
    {
      *(undefined4 *)(param_1 + 800) = 0;
      *(uint *)(param_1 + 0x31c) = iVar3 - uVar7;
      *(undefined4 *)(param_1 + 0x13c) = 4;
      return 1;
    }
    local_60 = (double)local_38;
    local_58 = 0.0;
    iVar4 = local_64;
    if (((&stack0x00000000 != (undefined1 *)0x60) && (param_1 != -0x1a8)) &&
       (&stack0x00000000 != (undefined1 *)0x68)) {
      iVar5 = *(int *)(param_1 + 0x1b0);
      uVar7 = *(int *)(param_1 + 0x1a8);
      iVar6 = ftol();
      iVar4 = *(int *)(param_1 + 0x1ac);
      if (((int)uVar7 <= iVar6) && (iVar5 = iVar5 + -1, uVar7 = iVar6, iVar5 < iVar6)) {
        uVar7 = iVar5;
      }
      if ((!SBORROW4(iVar4,iVar4)) && (iVar5 = *(int *)(param_1 + 0x1b4) + -1, iVar5 < iVar4)) {
        iVar4 = iVar5;
      }
    }
    if (((((int)(uVar7 + -6) <= iVar3) && (iVar3 <= (int)(uVar7 + 6))) &&
        (*(int *)(param_1 + 0x1b4) <= param_2[1])) && (param_2[1] <= *(int *)(param_1 + 0x1b4) + 6))
    {
      *(undefined4 *)(param_1 + 800) = 0;
      *(uint *)(param_1 + 0x31c) = iVar3 - uVar7;
      *(undefined4 *)(param_1 + 0x13c) = 5;
      return 1;
    }
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      local_60 = 0.0;
      local_58 = (double)(_DAT_00487ed4 - local_34);
      if (((&stack0x00000000 != (undefined1 *)0x60) && ((int *)(param_1 + 0x1c8) != (int *)0x0)) &&
         (&stack0x00000000 != (undefined1 *)0x68)) {
        iVar6 = *(int *)(param_1 + 0x1d0);
        uVar7 = *(int *)(param_1 + 0x1c8);
        uVar2 = *(undefined4 *)(param_1 + 0x1d4);
        iVar5 = *(int *)(param_1 + 0x1cc);
        local_70 = (byte)uVar2;
        bStack_6f = (byte)((uint)uVar2 >> 8);
        uStack_6e = (ushort)((uint)uVar2 >> 0x10);
        iVar4 = ftol();
        if ((!SBORROW4(uVar7,uVar7)) && (iVar6 = iVar6 + -1, iVar6 < (int)uVar7)) {
          uVar7 = iVar6;
        }
        if ((iVar4 < iVar5) ||
           (iVar5 = CONCAT22(uStack_6e,CONCAT11(bStack_6f,local_70)) + -1, iVar5 < iVar4)) {
          iVar4 = iVar5;
        }
      }
      local_48 = (float)(*(int *)(param_1 + 0x1d0) + 6);
      if ((((*(int *)(param_1 + 0x1d0) <= iVar3) && (iVar3 <= (int)local_48)) &&
          (iVar4 + -6 <= param_2[1])) && (param_2[1] <= iVar4 + 6)) {
        *(undefined4 *)(param_1 + 0x31c) = 0;
        iVar3 = param_2[1];
        *(undefined4 *)(param_1 + 0x13c) = 6;
        *(int *)(param_1 + 800) = iVar3 - iVar4;
        return 1;
      }
    }
    pfVar1 = (float *)(param_1 + 0x158);
    FUN_00419c40(&local_60,pfVar1);
    fVar8 = (float10)local_60;
    if (((&stack0x00000000 != (undefined1 *)0x60) && (param_1 != -0x1b8)) &&
       (&stack0x00000000 != (undefined1 *)0x68)) {
      iVar3 = *(int *)(param_1 + 0x1c0);
      uVar7 = *(int *)(param_1 + 0x1b8);
      iVar4 = iVar3 - uVar7;
      local_70 = (byte)iVar4;
      bStack_6f = (byte)((uint)iVar4 >> 8);
      uStack_6e = (ushort)((uint)iVar4 >> 0x10);
      iVar6 = ftol();
      iVar5 = *(int *)(param_1 + 0x1bc);
      local_68 = *(int *)(param_1 + 0x1c4);
      iVar4 = local_68 - iVar5;
      local_70 = (byte)iVar4;
      bStack_6f = (byte)((uint)iVar4 >> 8);
      uStack_6e = (ushort)((uint)iVar4 >> 0x10);
      iVar4 = ftol();
      if (((int)uVar7 <= iVar6) && (iVar3 = iVar3 + -1, uVar7 = iVar6, iVar3 < iVar6)) {
        uVar7 = iVar3;
      }
      fVar8 = extraout_ST0;
      if ((iVar4 < iVar5) || (iVar5 = local_68 + -1, iVar5 < iVar4)) {
        iVar4 = iVar5;
      }
    }
    if (fVar8 == (float10)_DAT_00488140) {
      local_50 = *(float *)(param_1 + 0x1b8);
      local_4c = (float)(iVar4 + -6);
      local_44 = iVar4 + 6;
      iVar3 = *(int *)(param_1 + 0x1c0) + 6;
    }
    else {
      local_4c = (float)(iVar4 + -8);
      local_50 = (float)(uVar7 + -8);
      local_44 = iVar4 + 8;
      iVar3 = uVar7 + 8;
    }
    local_78 = (uint)(fVar8 == (float10)_DAT_00488140);
    iVar5 = *param_2;
    if (((((int)local_50 <= iVar5) && (iVar5 <= iVar3)) && ((int)local_4c <= param_2[1])) &&
       (param_2[1] <= local_44)) {
      *(uint *)(param_1 + 0x31c) = iVar5 - uVar7;
      iVar3 = param_2[1];
      *(undefined4 *)(param_1 + 0x13c) = 8;
      *(uint *)(param_1 + 300) = local_78;
      *(int *)(param_1 + 800) = iVar3 - iVar4;
      return 1;
    }
    if (((*(int *)(param_1 + 0x188) <= iVar5) && (iVar5 <= *(int *)(param_1 + 400))) &&
       ((*(int *)(param_1 + 0x18c) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x194))))) {
      FUN_00419e00(param_2,(int *)(param_1 + 0x188),&local_30);
      local_40 = (float)local_30;
      *(float *)(param_1 + 0x168) = *pfVar1;
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
      FUN_0041a050(param_1,&local_40);
      *(undefined4 *)(param_1 + 0x13c) = 3;
      return 1;
    }
    if (((*(int *)(param_1 + 0x198) <= iVar5) && (iVar5 <= *(int *)(param_1 + 0x1a0))) &&
       ((*(int *)(param_1 + 0x19c) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x1a4))))) {
      FUN_00419e00(param_2,(int *)(param_1 + 0x198),&local_30);
      local_3c = (float)local_30;
      *(float *)(param_1 + 0x168) = *pfVar1;
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
      FUN_0041a050(param_1,&local_40);
      *(undefined4 *)(param_1 + 0x13c) = 4;
      return 1;
    }
    if ((((*(int *)(param_1 + 0x1a8) <= iVar5) && (iVar5 <= *(int *)(param_1 + 0x1b0))) &&
        (*(int *)(param_1 + 0x1ac) <= param_2[1])) && (param_2[1] <= *(int *)(param_1 + 0x1b4))) {
      FUN_00419e00(param_2,(int *)(param_1 + 0x1a8),&local_30);
      local_38 = (float)local_30;
      *(float *)(param_1 + 0x168) = *pfVar1;
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
      FUN_0041a050(param_1,&local_40);
      *(undefined4 *)(param_1 + 0x13c) = 5;
      return 1;
    }
    if (((*(int *)(param_1 + 0x1b8) <= iVar5) && (iVar5 <= *(int *)(param_1 + 0x1c0))) &&
       ((*(int *)(param_1 + 0x1bc) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x1c4))))) {
      FUN_00419e00(param_2,(int *)(param_1 + 0x1b8),&local_30);
      *(float *)(param_1 + 0x168) = *pfVar1;
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
      FUN_0041af00(pfVar1,&local_30);
      *(undefined4 *)(param_1 + 0x13c) = 8;
      *(undefined4 *)(param_1 + 300) = 0;
      return 1;
    }
    if (((iVar5 < *(int *)(param_1 + 0x1c8)) || (*(int *)(param_1 + 0x1d0) < iVar5)) ||
       ((param_2[1] < *(int *)(param_1 + 0x1cc) || (*(int *)(param_1 + 0x1d4) < param_2[1])))) {
      if ((((iVar5 < *(int *)(param_1 + 0x1d8)) || (*(int *)(param_1 + 0x1e0) < iVar5)) ||
          (param_2[1] < *(int *)(param_1 + 0x1dc))) || (*(int *)(param_1 + 0x1e4) < param_2[1])) {
        if (((*(int *)(param_1 + 0x1e8) <= iVar5) && (iVar5 <= *(int *)(param_1 + 0x1f0))) &&
           ((*(int *)(param_1 + 0x1ec) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 500))))) {
          iVar3 = FUN_00419820(&local_70,*(HWND *)(param_1 + 8),0,param_1);
          if (iVar3 != 0) {
            local_68 = uStack_6e & 0xff;
            local_50 = (float)local_70 * (float)_DAT_00487e28;
            local_44 = 0x3f800000;
            local_4c = (float)bStack_6f * (float)_DAT_00487e28;
            local_48 = (float)local_68 * (float)_DAT_00487e28;
            FUN_00419f50(&local_50,param_1,0);
            FUN_0041a550(param_1);
            FUN_0041b090(param_1);
            pHVar9 = *(HWND *)(param_1 + 8);
            uVar7 = GetDlgCtrlID(pHVar9);
            PostMessageA(*(HWND *)(param_1 + 0xc),0x111,uVar7 & 0xffff | 0x7000000,(LPARAM)pHVar9);
          }
          *(undefined4 *)(param_1 + 0x140) = 2;
          *(undefined4 *)(param_1 + 0x13c) = 0;
          return 0;
        }
        if (((*(int *)(param_1 + 0x20c) <= iVar5) && (iVar5 <= *(int *)(param_1 + 0x214))) &&
           ((*(int *)(param_1 + 0x210) <= param_2[1] &&
            (((param_2[1] <= *(int *)(param_1 + 0x218) && ((*(byte *)(param_1 + 4) & 0x40) != 0)) &&
             (*(int *)(param_1 + 0x1f8) != 0)))))) {
          FUN_00419f50((undefined4 *)(param_1 + 0x1fc),param_1,0);
          FUN_0041a550(param_1);
          pHVar9 = *(HWND *)(param_1 + 8);
          *(undefined4 *)(param_1 + 0x1f8) = 0;
          *(undefined4 *)(param_1 + 0x140) = 8;
          *(undefined4 *)(param_1 + 0x13c) = 0;
          uVar7 = GetDlgCtrlID(pHVar9);
          PostMessageA(*(HWND *)(param_1 + 0xc),0x111,uVar7 & 0xffff | 0x7000000,(LPARAM)pHVar9);
        }
      }
      else if (*(int *)(param_1 + 0x134) != 0) {
        iVar3 = FUN_00419f40(param_1);
        FUN_00419f10(param_1,(uint)(iVar3 == 0));
        FUN_0041a550(param_1);
        *(undefined4 *)(param_1 + 0x140) = 1;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        return 0;
      }
    }
    else if ((*(byte *)(param_1 + 4) & 2) != 0) {
      FUN_00419e00(param_2,(int *)(param_1 + 0x1c8),&local_30);
      fVar8 = (float10)_DAT_00487590;
      *(float *)(param_1 + 0x168) = *pfVar1;
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x15c);
      local_34 = (float)(fVar8 - (float10)local_28);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
      FUN_0041a050(param_1,&local_40);
      *(undefined4 *)(param_1 + 0x13c) = 6;
      return 1;
    }
  }
  return 0;
}


