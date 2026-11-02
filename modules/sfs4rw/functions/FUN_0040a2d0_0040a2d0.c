/* Module: sfs4rw.dll
   Function: FUN_0040a2d0
   Address: 0040a2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040a2d0(HWND param_1,int param_2,uint param_3,int param_4)

{
  LONG LVar1;
  uint uVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  UINT UVar8;
  WPARAM WVar9;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_00409f50(param_1,param_4);
      return uVar2;
    }
  }
  else if (param_2 == 0xf) {
    FUN_00404860(param_1,LVar1);
  }
  else {
    if (param_2 == 0x4e) {
      switch(*(undefined4 *)(param_4 + 8)) {
      case 0xffffff2f:
        iVar4 = FUN_00406ae0(param_1,LVar1);
        SetWindowLongA(param_1,0,(uint)(iVar4 != 6));
        return (uint)(iVar4 != 6);
      case 0xffffff30:
        iVar4 = FUN_00405c90(LVar1);
        FUN_00405c70(iVar4,LVar1);
        if (iVar4 == 0x1b97) {
          FUN_004091e0(param_1,LVar1);
        }
        else if (iVar4 == 0x1b9e) {
          FUN_00407b20(param_1,LVar1);
          iVar4 = FUN_00406430(&param_2,&param_4,0);
          if (iVar4 != 0) {
            *(int *)(LVar1 + 0x170) = param_2;
            *(int *)(LVar1 + 0x174) = param_4;
            return 1;
          }
        }
        return 1;
      case 0xffffff31:
        uVar6 = FUN_00405c90(LVar1);
        FUN_00405c70(uVar6,LVar1);
        switch(uVar6) {
        case 0x1b94:
          goto switchD_0040a464_caseD_1b94;
        case 0x1b95:
          FUN_00405b80(param_1,LVar1,0x1f72);
          return 1;
        case 0x1b96:
          FUN_00405b80(param_1,LVar1,0x1b5a);
          return 1;
        default:
          FUN_00405c20(param_1,LVar1);
          return 1;
        case 0x1b9e:
          FUN_00405b80(param_1,LVar1,0x1b81);
          return 1;
        }
      case 0xffffff32:
        FUN_00405bb0(param_1,LVar1);
        return 1;
      default:
        goto switchD_0040a352_caseD_1b98;
      case 0xffffff35:
        FUN_00406a00(LVar1);
        return 1;
      case 0xffffff38:
        goto switchD_0040a3dc_caseD_ffffff38;
      }
    }
    if (param_2 == 0x111) {
      uVar2 = param_3 & 0xffff;
      switch(uVar2) {
      case 0x1b94:
      case 0x1b95:
      case 0x1b96:
        uVar7 = *(int *)(LVar1 + 0x1cc) != 0 | 2;
        break;
      case 0x1b97:
        uVar7 = *(int *)(LVar1 + 0x1cc) != 0 | 4;
        break;
      default:
        goto switchD_0040a352_caseD_1b98;
      case 0x1b9e:
        uVar7 = (uint)(*(int *)(LVar1 + 0x1cc) != 0);
        iVar4 = FUN_004063f0();
        if (iVar4 < 2) {
          uVar7 = uVar7 | 4;
        }
        else {
          uVar7 = uVar7 | 2;
        }
      }
      WVar9 = 0;
      UVar8 = 0x470;
      pHVar3 = GetParent(param_1);
      PostMessageA(pHVar3,UVar8,WVar9,uVar7);
      FUN_00405c70(uVar2,LVar1);
      return 0;
    }
  }
switchD_0040a352_caseD_1b98:
  return 0;
switchD_0040a464_caseD_1b94:
  if ((*(byte *)(LVar1 + 0x1d8) & 0x40) != 0) {
    FUN_00405b80(param_1,LVar1,0x1f68);
    return 1;
  }
  FUN_00405b80(param_1,LVar1,0x1f5e);
  return 1;
switchD_0040a3dc_caseD_ffffff38:
  iVar4 = *(int *)(LVar1 + 0x1cc);
  uVar2 = 2;
  iVar5 = FUN_00405c90(LVar1);
  if (iVar5 == 0x1b9e) {
    iVar5 = FUN_004063f0();
    if (iVar5 != 1) goto LAB_0040a41b;
  }
  else if (iVar5 != 0x1b97) goto LAB_0040a41b;
  uVar2 = 4;
LAB_0040a41b:
  uVar2 = uVar2 | iVar4 != 0;
  WVar9 = 0;
  UVar8 = 0x470;
  pHVar3 = GetParent(param_1);
  PostMessageA(pHVar3,UVar8,WVar9,uVar2);
  return 0;
}


