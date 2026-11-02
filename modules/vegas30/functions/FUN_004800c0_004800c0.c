/* Module: vegas30.exe
   Function: FUN_004800c0
   Address: 004800c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0048022d) */
/* WARNING: Removing unreachable block (ram,0x00480210) */
/* WARNING: Removing unreachable block (ram,0x00480242) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004800c0(HWND param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  tagRECT local_10;
  
  iVar6 = (int)(short)param_6;
  local_10.top = (LONG)(short)((uint)param_6 >> 0x10);
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 < 0x204) {
    if (param_4 != 0x203) {
      if (0x201 < param_4) {
        if (param_4 != 0x202) {
          return 0;
        }
        pHVar3 = GetCapture();
        if (pHVar3 == param_1) {
          if (DAT_0064bfb8 == 1) {
            FUN_00453340(param_7,*(uint *)(param_3 + 0x40) + *(uint *)(param_3 + 0x18),
                         *(int *)(param_3 + 0x44) + *(int *)(param_3 + 0x1c) +
                         (uint)CARRY4(*(uint *)(param_3 + 0x40),*(uint *)(param_3 + 0x18)),0,0,
                         (param_5 & 4) << 2);
          }
          else if (DAT_0064bfb8 == 4) {
            FUN_004ea040(*(undefined4 *)(*(int *)(param_3 + 8) + 8),0);
            puVar1 = (uint *)**(undefined4 **)(*(int *)(param_3 + 8) + 8);
            *puVar1 = *puVar1 | 0x100;
          }
          ReleaseCapture();
          DAT_0064bfb8 = 0;
        }
        InvalidateRect(param_1,(RECT *)(*(int *)(*(int *)(param_3 + 8) + 0x69c) + 0x18),0);
        InvalidateRect(param_1,(RECT *)&DAT_0064bf80,0);
        return 0;
      }
      if (param_4 != 0x201) {
        if (param_4 == 0x1f) {
          if (DAT_0064bfb8 == 4) {
            FUN_004ea040(*(undefined4 *)(*(int *)(param_3 + 8) + 8),1);
            *(undefined4 *)(param_3 + 0x40) = DAT_0064bfb0;
            *(undefined4 *)(param_3 + 0x44) = DAT_0064bfb4;
          }
          pHVar3 = GetCapture();
          if (pHVar3 == param_1) {
            ReleaseCapture();
          }
          DAT_0064bfb8 = 0;
          InvalidateRect(param_1,(RECT *)0x0,0);
          InvalidateRect(param_1,(RECT *)&DAT_0064bf80,1);
          return 0;
        }
        if (param_4 != 0x200) {
          return 0;
        }
        pHVar3 = GetCapture();
        if (pHVar3 != param_1) {
          return 0;
        }
        if (DAT_0064bfb8 == 1) {
          if ((((-1 < iVar6 - DAT_0064bf9c) && (iVar6 - DAT_0064bf9c < 1)) &&
              (-1 < local_10.top - DAT_0064bfa0)) && (local_10.top - DAT_0064bfa0 < 1)) {
            return 0;
          }
          DAT_0064bfb8 = 4;
          DAT_0064bfb0 = *(undefined4 *)(param_3 + 0x40);
          DAT_0064bfb4 = *(undefined4 *)(param_3 + 0x44);
          FUN_004e9f70(*(undefined4 *)(*(int *)(param_3 + 8) + 8),0x2c,0);
          FUN_004ea750(*(undefined4 *)(*(int *)(param_3 + 8) + 8),param_3,2,0);
        }
        else if (DAT_0064bfb8 != 4) {
          return 0;
        }
        if ((DAT_0064bf90 & 2) != 0) {
          return 0;
        }
        lVar7 = FUN_0047f8a0(param_7,param_3,iVar6);
        if ((param_5 & 4) == 0) {
          lVar7 = FUN_00494da0(param_7,lVar7 + *(longlong *)(param_3 + 0x18));
          lVar7 = lVar7 - *(longlong *)(param_3 + 0x18);
          if ((lVar7 < 0x100000000) && (lVar7 < 0)) {
            lVar7 = 0;
          }
          else if (*(longlong *)(param_3 + 0x20) < lVar7) {
            lVar7 = *(longlong *)(param_3 + 0x20);
          }
        }
        uVar4 = DAT_0064bfc4;
        uVar5 = DAT_0064bfc0;
        if ((lVar7 < CONCAT44(DAT_0064bfc4,DAT_0064bfc0)) ||
           (uVar4 = DAT_0064bfcc, uVar5 = DAT_0064bfc8, CONCAT44(DAT_0064bfcc,DAT_0064bfc8) < lVar7)
           ) {
          lVar7 = CONCAT44(uVar4,uVar5);
        }
        *(longlong *)(param_3 + 0x40) = lVar7;
        InvalidateRect(param_1,(RECT *)&DAT_0064bf80,0);
        InvalidateRect(param_1,(RECT *)(*(int *)(*(int *)(param_3 + 8) + 0x69c) + 0x18),0);
        FUN_004eb2b0(*(undefined4 *)(*(int *)(param_3 + 8) + 8));
        UpdateWindow(param_1);
        FUN_00480590(param_1,iVar6,local_10.top,lVar7);
        return 0;
      }
    }
    if ((param_5 & 2) != 0) {
      return 0;
    }
    _DAT_0064bf94 = param_2;
    DAT_0064bf98 = param_1;
    _DAT_0064bfd8 = 0;
    _DAT_0064bfdc = 0;
    DAT_0064bfb8 = 0;
    DAT_0064bfc0 = 0;
    DAT_0064bfc4 = 0;
    DAT_0064bfc8 = *(undefined4 *)(param_3 + 0x20);
    DAT_0064bfcc = *(undefined4 *)(param_3 + 0x24);
    DAT_0064bf90 = (uint)(param_4 == 0x203);
    DAT_0064bf9c = iVar6;
    DAT_0064bfa0 = local_10.top;
    _DAT_0064bfa8 = FUN_0047f8a0(param_7,param_3,iVar6);
    iVar2 = *(int *)(*(int *)(param_3 + 0x218) + 0x1c);
    if ((iVar2 < 0) || ((iVar2 < 1 && (*(int *)(*(int *)(param_3 + 0x218) + 0x18) == 0)))) {
      _DAT_0064bfd8 = 0;
    }
    else {
      _DAT_0064bfd8 = FUN_0047f900(param_7,param_3,_DAT_0064bfa8);
      _DAT_0064bfd8 = _DAT_0064bfd8 - iVar6;
    }
    _DAT_0064bfdc = 2;
    DAT_0064bfb8 = 1;
    SetCapture(param_1);
    iVar6 = *(int *)(*(int *)(param_3 + 8) + 0x69c);
    local_10.left = *(LONG *)(iVar6 + 0x18);
    local_10.top = *(LONG *)(iVar6 + 0x1c);
    local_10.right = *(LONG *)(iVar6 + 0x20);
    local_10.bottom = *(LONG *)(iVar6 + 0x24);
    InflateRect(&local_10,2,2);
    InvalidateRect(param_1,&local_10,0);
    return 0;
  }
  if (param_4 != 0x204) {
    if (param_4 == 0x205) {
      if ((param_5 & 1) != 0) {
        return 0;
      }
      pHVar3 = GetCapture();
      if ((pHVar3 == DAT_0064bf98) && (ReleaseCapture(), DAT_0064bfb8 == 0xc)) {
        FUN_004800a0(param_3,param_1,iVar6,local_10.top);
      }
      DAT_0064bfb8 = 0;
      return 0;
    }
    if (param_4 != 0x206) {
      return 0;
    }
  }
  if (DAT_0064bfb8 != 0) {
    return 0;
  }
  if ((param_5 & 1) != 0) {
    return 0;
  }
  DAT_0064bf90 = DAT_0064bf90 & 0xfffffffe;
  DAT_0064bfb8 = 0xc;
  DAT_0064bf9c = iVar6;
  DAT_0064bfa0 = local_10.top;
  SetCapture(param_1);
  return 0;
}


