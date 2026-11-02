/* Module: vegas30.exe
   Function: FUN_00527520
   Address: 00527520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527520(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  HCURSOR hCursor;
  int iVar5;
  int local_130;
  LPARAM local_12c;
  LRESULT local_128;
  HCURSOR local_124;
  undefined4 *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  CHAR local_10c [260];
  uint local_8;
  
  bVar3 = false;
  if (*(int *)(param_1 + 0x84) != 0) {
    hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    local_124 = SetCursor(hCursor);
    _SfList_CreateExZ_32(&local_12c,4,10,0x40,2,0,0,0);
    local_128 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x605,0,local_12c);
    local_130 = 0;
    if (0 < local_128) {
      do {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(local_12c + 8) + local_130 * 4) + 0x20c);
        FUN_00508ba0(uVar1,&local_11c);
        if (((local_8 & 2) == 0) && ((~local_8 >> 2 & ~local_8 & 0x20) != 0)) {
          if ((**(int **)(param_1 + 0x84) == 1) && ((*(int **)(param_1 + 0x84))[1] == 1)) {
            FUN_00527430(param_1);
          }
          piVar2 = *(int **)(param_1 + 0x84);
          if ((*piVar2 == -1) || (piVar2[1] < *piVar2)) {
            _SfList_AllocItem_12(piVar2[2],0x124,&local_120);
            puVar4 = local_120;
            *local_120 = local_11c;
            local_120[1] = local_118;
            local_120[2] = local_114;
            local_120[3] = local_110;
            lstrcpynA((LPSTR)(local_120 + 4),local_10c,0x104);
            *(undefined1 *)((int)puVar4 + 0x113) = 0;
            iVar5 = _SfList_InsertList_16
                              (*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),0xffffffff,0,0xffffffff
                              );
            if (-1 < iVar5) {
              piVar2 = (int *)(*(int *)(param_1 + 0x84) + 4);
              *piVar2 = *piVar2 + 1;
              goto LAB_0052769a;
            }
          }
        }
        else if ((local_128 == 1) &&
                (((local_8 & 2) == 0 && ((~(local_8 >> 5) & local_8 >> 7 & 1) != 0)))) {
          FUN_00526490(param_1,uVar1);
LAB_0052769a:
          bVar3 = true;
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
    }
    _SfList_Destroy_4(local_12c);
    if (bVar3) {
      FUN_00526cc0(param_1);
      FUN_00524880(param_1);
      FUN_00525770(param_1,*(int *)(*(int *)(param_1 + 0x84) + 4) + -1);
      FUN_00524ad0(param_1);
      *(undefined4 *)(param_1 + 0x124) = 1;
    }
    SetCursor(local_124);
  }
  return;
}


