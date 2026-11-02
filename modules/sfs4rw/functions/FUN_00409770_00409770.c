/* Module: sfs4rw.dll
   Function: FUN_00409770
   Address: 00409770
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00409770(HWND param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  LONG LVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  uint uVar6;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  uVar6 = 0;
  if (LVar2 == 0) {
    if (param_2 == 0x110) {
      uVar6 = FUN_004096d0(param_1,param_4);
      return uVar6;
    }
  }
  else if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      if ((param_3 & 0xffff) == 0x1bb2) {
        uVar6 = *(int *)(LVar2 + 0x1cc) != 0 | 2;
        WVar8 = 0;
        UVar7 = 0x470;
        pHVar5 = GetParent(param_1);
        PostMessageA(pHVar5,UVar7,WVar8,uVar6);
        FUN_00405c70(0x1bb2,LVar2);
        return 0;
      }
      if ((param_3 & 0xffff) == 0x1bb3) {
        uVar6 = *(int *)(LVar2 + 0x1cc) != 0 | 4;
        WVar8 = 0;
        UVar7 = 0x470;
        pHVar5 = GetParent(param_1);
        PostMessageA(pHVar5,UVar7,WVar8,uVar6);
        FUN_00405c70(0x1bb3,LVar2);
        return 0;
      }
    }
    else {
      if (param_2 == 0xf) {
        FUN_00404860(param_1,LVar2);
        return 0;
      }
      if (param_2 == 0x4e) {
        switch(*(undefined4 *)(param_4 + 8)) {
        case 0xffffff2f:
          iVar3 = FUN_00406ae0(param_1,LVar2);
          SetWindowLongA(param_1,0,(uint)(iVar3 != 6));
          return (uint)(iVar3 != 6);
        case 0xffffff30:
          uVar4 = FUN_00405c90(LVar2);
          FUN_00405c70(uVar4,LVar2);
          if (*(int *)(LVar2 + 0x238) == 0) {
            if (*(int *)(LVar2 + 0x364) == 0) {
              iVar3 = 0;
              *(undefined4 *)(*(int *)(LVar2 + 0x360) + 0x194) = 1;
              piVar1 = (int *)(*(int *)(LVar2 + 0x360) + 0x198);
              *piVar1 = *piVar1 + 1;
              pHVar5 = GetParent(param_1);
              ShowWindow(pHVar5,iVar3);
              FUN_0040fc60((WPARAM)param_1,LVar2);
              FUN_00405c20(param_1,LVar2);
              return 1;
            }
            FUN_004096a0(LVar2);
            return 1;
          }
          if (2 < *(uint *)(*(int *)(LVar2 + 0x360) + 0x198)) {
            iVar3 = 5;
            pHVar5 = GetParent(param_1);
            ShowWindow(pHVar5,iVar3);
            FUN_00405c20(param_1,LVar2);
            uVar6 = *(int *)(LVar2 + 0x1cc) != 0 | 2;
            WVar8 = 0;
            UVar7 = 0x470;
            pHVar5 = GetParent(param_1);
            PostMessageA(pHVar5,UVar7,WVar8,uVar6);
            LVar9 = 0;
            WVar8 = 1;
            UVar7 = 0x471;
            pHVar5 = GetParent(param_1);
            PostMessageA(pHVar5,UVar7,WVar8,LVar9);
            *(undefined4 *)(LVar2 + 0x238) = 0;
            return 1;
          }
          FUN_00406a00(LVar2);
          return 1;
        case 0xffffff31:
          iVar3 = FUN_00405c90(LVar2);
          FUN_00405c70(iVar3,LVar2);
          if (iVar3 == 0x1bb2) {
            FUN_00405b80(param_1,LVar2,0x1f5e);
            return 1;
          }
          if (iVar3 == 0x1bb3) {
            FUN_00405b80(param_1,LVar2,0x1b5b);
            return 1;
          }
          break;
        case 0xffffff32:
          FUN_00405bb0(param_1,LVar2);
          return 1;
        case 0xffffff35:
          FUN_00406a00(LVar2);
          return 1;
        case 0xffffff38:
          uVar6 = *(int *)(LVar2 + 0x1cc) != 0 | 2;
          WVar8 = 0;
          UVar7 = 0x470;
          pHVar5 = GetParent(param_1);
          PostMessageA(pHVar5,UVar7,WVar8,uVar6);
          CheckRadioButton(param_1,0x1bb2,0x1bb3,0x1bb2);
          FUN_00405c70(0x1bb2,LVar2);
          return 0;
        }
      }
    }
  }
  else if (param_2 == 0x6c9) {
    if (param_3 == 1) {
      LVar9 = 0;
      WVar8 = 2;
      UVar7 = 0x471;
      pHVar5 = GetParent(param_1);
      PostMessageA(pHVar5,UVar7,WVar8,LVar9);
      *(undefined4 *)(LVar2 + 0x364) = 1;
      *(undefined4 *)(LVar2 + 0x1e0) = 1;
      *(undefined4 *)(LVar2 + 0x250) = 1;
      uVar6 = 1;
    }
    else {
      if (param_3 == 2) {
        *(undefined4 *)(*(int *)(LVar2 + 0x360) + 0x194) = 1;
        piVar1 = (int *)(*(int *)(LVar2 + 0x360) + 0x198);
        *piVar1 = *piVar1 + 1;
        FUN_0040fc60((WPARAM)param_1,LVar2);
        return 1;
      }
      if (param_3 == 3) {
        LVar9 = 0;
        WVar8 = 2;
        UVar7 = 0x471;
        *(undefined4 *)(LVar2 + 0x238) = 1;
        *(undefined4 *)(LVar2 + 0x364) = 0;
        pHVar5 = GetParent(param_1);
        PostMessageA(pHVar5,UVar7,WVar8,LVar9);
        return 1;
      }
    }
  }
  return uVar6;
}


