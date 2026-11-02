/* Module: vegas30.exe
   Function: FUN_0049db20
   Address: 0049db20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049dc56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049db20(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  HCURSOR hCursor;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  undefined8 local_28;
  tagPOINT local_1c;
  uint local_14 [4];
  
  bVar1 = false;
  if (*(int *)(param_1 + 0xa4) == 0x18) {
    if (DAT_0064aeb8 == 0) {
      _SfWheel_AutoScrollSetCursor_4(param_1 + 0xe8);
    }
    GetCursorPos(&local_1c);
    ScreenToClient(*(HWND *)(param_1 + 4),&local_1c);
    if (((local_1c.x <= *(int *)(param_1 + 0x124)) && (*(int *)(param_1 + 0x11c) <= local_1c.x)) &&
       (DAT_0064aeb8 == 0)) {
      bVar1 = true;
    }
    local_28 = 0.0;
    if (!bVar1) {
      if (DAT_0064aeb8 == 0) {
        iVar5 = (local_1c.x - *(int *)(param_1 + 0xf0)) * 0xf;
        if (iVar5 < -0x600) {
          iVar5 = -0x600;
        }
        else if (0x600 < iVar5) {
          iVar5 = 0x600;
        }
        fVar7 = (float10)FUN_004cdfb0(iVar5);
        local_28 = (double)fVar7;
      }
      else {
        if ((DAT_0064ca6c & 1) == 0) {
          DAT_0064ca6c = DAT_0064ca6c | 1;
          DAT_0064ca68 = local_1c.x;
        }
        if ((int)(local_1c.x - DAT_0064ca68) < 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c.x != DAT_0064ca68 && -1 < (int)(local_1c.x - DAT_0064ca68));
        }
        DAT_0064ca68 = local_1c.x;
        local_14[0] = *(uint *)(param_1 + 0xb90);
        local_14[1] = *(int *)(param_1 + 0xb94);
        if (local_14[0] == 0 && local_14[1] == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          lVar8 = ftol();
          uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
          uVar4 = (uint)uVar2;
          if ((uVar2 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar4)))) {
            if (0x3fff < (longlong)uVar2) {
              uVar4 = 0x3fff;
            }
          }
          else {
            uVar4 = 0xffffc000;
          }
        }
        if ((int)(local_1c.x - uVar4) < 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c.x != uVar4 && -1 < (int)(local_1c.x - uVar4));
        }
        uVar3 = DAT_0064ca70;
        if (uVar6 != 0) {
          uVar3 = uVar6;
        }
        if (uVar3 != uVar4) {
          uVar4 = 0;
        }
        local_28 = (double)(int)uVar4;
        local_14[0] = 0x2a;
        local_14[1] = 0x30;
        local_14[2] = 0x28;
        hCursor = (HCURSOR)_SfLoadCursor_8(0,local_14[uVar4 + 1] & 0xffff);
        SetCursor(hCursor);
        if (uVar6 != 0) {
          DAT_0064ca70 = uVar6;
        }
      }
    }
    if ((double)CONCAT44(_DAT_0064ca7c,_DAT_0064ca78) != local_28) {
      _DAT_0064ca78 = (undefined4)local_28;
      _DAT_0064ca7c = local_28._4_4_;
      FUN_004ce070(param_1,(undefined4)local_28,local_28._4_4_);
      if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
        FUN_004583a0(param_1,0);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
      }
      FUN_005fb0e0((undefined4)local_28,local_28._4_4_,0);
    }
  }
  return;
}


