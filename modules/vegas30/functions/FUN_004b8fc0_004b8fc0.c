/* Module: vegas30.exe
   Function: FUN_004b8fc0
   Address: 004b8fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b8fc0(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  HWND pHVar1;
  LONG LVar2;
  UINT UVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  iVar8 = (int)(short)param_5;
  iVar7 = (int)(short)((uint)param_5 >> 0x10);
  if (param_3 < 0x203) {
    if (param_3 == 0x202) {
      if (*(int *)(param_1 + 0xa4) == 0x10) {
        lVar9 = ftol();
        uVar10 = FUN_00495290(param_1,0,lVar9 + *(longlong *)(param_1 + 0xb88));
        if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
          FUN_00453340(param_1,uVar10,0,0,(param_4 & 4) << 2 | 1);
        }
      }
      else if (*(int *)(param_1 + 0xa4) == 0x11) {
        FUN_004b8f80(param_1,param_2,iVar8,iVar7,0);
      }
    }
    else {
      if (param_3 != 0x1f) {
        if (param_3 == 0x200) {
          pHVar1 = GetCapture();
          if (pHVar1 != *(HWND *)(param_1 + 4)) {
            return 0;
          }
          if (*(int *)(param_1 + 0xa4) == 0x10) {
            iVar4 = iVar8 - *(int *)(param_1 + 0x90);
            if ((-*(int *)(param_1 + 200) <= iVar4) && (iVar4 <= *(int *)(param_1 + 200))) {
              return 0;
            }
            FUN_004b8e60(param_1,param_4,*(undefined4 *)(param_1 + 0x90),
                         *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x174));
          }
          else if (*(int *)(param_1 + 0xa4) != 0x11) {
            return 0;
          }
          FUN_004b8f00(param_1,param_2,param_4,iVar8,iVar7);
          return 0;
        }
        if (param_3 != 0x201) {
          return 0;
        }
        goto LAB_004b91b2;
      }
      if (*(int *)(param_1 + 0xa4) == 0x11) {
        FUN_00453e90(param_1);
      }
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    pHVar1 = GetCapture();
    if (pHVar1 == *(HWND *)(param_1 + 4)) {
      ReleaseCapture();
      return 0;
    }
  }
  else {
    if (param_3 != 0x203) {
      if (param_3 != 0x404) {
        return 0;
      }
      pHVar1 = GetCapture();
      if (pHVar1 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      if (*(int *)(param_1 + 0xa4) != 0x11) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0xac0);
      if ((iVar8 < iVar4) || (iVar4 = *(int *)(param_1 + 0xac8), iVar4 < iVar8)) {
        iVar8 = iVar4;
      }
      FUN_00453cb0(param_1,iVar8,iVar7,0);
      return 0;
    }
LAB_004b91b2:
    if (*(int *)(param_1 + 0xa4) == 0) {
      FUN_00453000(param_1);
      *(uint *)(param_1 + 0x18) =
           (uint)(param_3 == 0x203) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfff9ffff;
      if ((param_3 == 0x203) == 0) {
        LVar2 = GetMessageTime();
        UVar3 = GetDoubleClickTime();
        if ((uint)(LVar2 - *(int *)(param_1 + 0xd0)) <= UVar3) {
          iVar4 = GetSystemMetrics(0x24);
          iVar6 = iVar8 - *(int *)(param_1 + 0xd4);
          if ((((-iVar4 <= iVar6) && (iVar6 <= iVar4)) &&
              (iVar6 = iVar7 - *(int *)(param_1 + 0xd8), -iVar4 <= iVar6)) && (iVar6 <= iVar4)) {
            *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000;
          }
        }
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
      else {
        LVar2 = GetMessageTime();
        *(int *)(param_1 + 0xd4) = iVar8;
        *(LONG *)(param_1 + 0xd0) = LVar2;
        *(int *)(param_1 + 0xd8) = iVar7;
      }
      uVar10 = ftol();
      *(int *)(param_1 + 0x90) = iVar8;
      *(uint *)(param_1 + 0x98) = (uint)uVar10 + *(uint *)(param_1 + 0xb88);
      *(int *)(param_1 + 0xa8) = iVar8;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(uint *)(param_1 + 0x9c) =
           (int)((ulonglong)uVar10 >> 0x20) + *(int *)(param_1 + 0xb8c) +
           (uint)CARRY4((uint)uVar10,*(uint *)(param_1 + 0xb88));
      *(int *)(param_1 + 0x94) = iVar7;
      *(int *)(param_1 + 0xac) = iVar7;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      if (((*(uint *)(param_1 + 0x18) & 0x40000) == 0) &&
         ((uVar5 = *(uint *)(param_1 + 0x18) & 0x20000, uVar5 == 0 || ((param_4 & 8) == 0)))) {
        if (uVar5 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x10;
          SetCapture(*(HWND *)(param_1 + 4));
          return 0;
        }
        FUN_004b8e60(param_1,param_4,iVar8,iVar7,*(undefined4 *)(param_1 + 0x174));
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (*(int *)(param_1 + 0xbc8) != 0) {
        uVar10 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
        FUN_00453a50(param_1,0,0,uVar10);
        return 0;
      }
      FUN_00453a50(param_1,0,0,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
    }
  }
  return 0;
}


