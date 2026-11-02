/* Module: mp3rw.dll
   Function: FUN_00408f80
   Address: 00408f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00408f80(HWND param_1,int param_2,uint param_3,int param_4)

{
  LONG LVar1;
  uint uVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  UINT UVar6;
  WPARAM WVar7;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    if (param_2 == 0x110) {
      uVar2 = FUN_00408d40(param_1,param_4);
      return uVar2;
    }
  }
  else if (param_2 == 0xf) {
    FUN_004048c0(param_1,LVar1);
  }
  else if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff2f:
      iVar5 = FUN_00406b40(param_1,LVar1);
      SetWindowLongA(param_1,0,(uint)(iVar5 != 6));
      return (uint)(iVar5 != 6);
    case 0xffffff30:
      iVar5 = FUN_00405cf0(LVar1);
      FUN_00405cd0(iVar5,LVar1);
      if (iVar5 == 0x1b97) {
        FUN_00409240(param_1,LVar1);
        return 1;
      }
      if (iVar5 == 0x1b98) {
        FUN_00411460(DAT_004a8128,0,0);
        goto switchD_0040905c_caseD_ffffff35;
      }
      break;
    case 0xffffff31:
      iVar5 = FUN_00405cf0(LVar1);
      FUN_00405cd0(iVar5,LVar1);
      if (iVar5 == 0x1b94) {
        FUN_00405be0(param_1,LVar1,0x1f5e);
        return 1;
      }
      if (iVar5 != 0x1b95) {
        if (iVar5 != 0x1b96) {
          FUN_00405c80(param_1,LVar1);
          return 1;
        }
        FUN_00405be0(param_1,LVar1,0x1b5a);
        return 1;
      }
      FUN_00405be0(param_1,LVar1,0x1f72);
      return 1;
    case 0xffffff32:
      FUN_00405c10(param_1,LVar1);
      return 1;
    case 0xffffff35:
switchD_0040905c_caseD_ffffff35:
      FUN_00406a60(LVar1);
      return 1;
    case 0xffffff38:
      iVar5 = *(int *)(LVar1 + 0x1cc);
      uVar2 = 2;
      iVar4 = FUN_00405cf0(LVar1);
      if ((iVar4 == 0x1b97) || (iVar4 == 0x1b98)) {
        uVar2 = 4;
      }
      uVar2 = uVar2 | iVar5 != 0;
      WVar7 = 0;
      UVar6 = 0x470;
      pHVar3 = GetParent(param_1);
      PostMessageA(pHVar3,UVar6,WVar7,uVar2);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    switch(param_3 & 0xffff) {
    case 0x1b94:
    case 0x1b95:
    case 0x1b96:
      uVar2 = *(int *)(LVar1 + 0x1cc) != 0 | 2;
      break;
    case 0x1b97:
    case 0x1b98:
      uVar2 = *(int *)(LVar1 + 0x1cc) != 0 | 4;
      break;
    default:
      goto switchD_00408ff6_default;
    }
    WVar7 = 0;
    UVar6 = 0x470;
    pHVar3 = GetParent(param_1);
    PostMessageA(pHVar3,UVar6,WVar7,uVar2);
    FUN_00405cd0(param_3 & 0xffff,LVar1);
    return 0;
  }
switchD_00408ff6_default:
  return 0;
}


