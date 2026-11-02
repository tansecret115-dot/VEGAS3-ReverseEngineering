/* Module: vidcap30.exe
   Function: FUN_0044c8f0
   Address: 0044c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044c8f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  SHORT SVar3;
  undefined4 uVar4;
  int iVar5;
  HCURSOR pHVar6;
  int iVar7;
  int local_10;
  int local_8;
  undefined4 local_4;
  
  iVar1 = *param_1;
  local_4 = DAT_005bb79c;
  local_10 = 1;
  local_8 = 0;
  if (iVar1 == 0) {
    return 1;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      if (local_8 != 0) break;
      uVar2 = *(undefined4 *)(param_1[2] + iVar7 * 4);
      uVar4 = FUN_0044c5f0(uVar2);
      iVar5 = FUN_0044cae0(uVar2);
      if (((iVar5 == 5) &&
          ((iVar5 = FUN_0044cae0(uVar4), iVar5 == 4 || (iVar5 = FUN_0044cae0(uVar4), iVar5 == 2))))
         || (iVar5 = FUN_0044cae0(uVar2), iVar5 == 4)) {
        local_8 = 1;
      }
      else {
        local_8 = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  SVar3 = GetKeyState(0x10);
  if (SVar3 < 0) {
    local_4 = 0;
  }
  else {
    local_10 = FUN_0044fc70(DAT_005ba4bc,&local_8);
    RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x181);
    DAT_005bb79c = local_4;
    if (local_10 == 0) {
      return 0;
    }
  }
  pHVar6 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar6 = SetCursor(pHVar6);
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      local_10 = FUN_0044ca40(*(undefined4 *)(param_1[2] + iVar7 * 4),param_2,local_4,param_3,
                              param_4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  SetCursor(pHVar6);
  return local_10;
}


