/* Module: vegas30.exe
   Function: FUN_004fded0
   Address: 004fded0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fded0(int param_1,LONG param_2,LONG param_3,int *param_4)

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  *param_4 = -1;
  param_4[1] = 0;
  if (*(int **)(param_1 + 0x17c) == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = **(int **)(param_1 + 0x17c);
  }
  iVar4 = 0;
  uVar3 = 0;
  if (0 < local_4) {
    while( true ) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x17c) + 8) + iVar4 * 4);
      pt.y = param_3;
      pt.x = param_2;
      BVar2 = PtInRect((RECT *)(iVar1 + 0x108),pt);
      if (BVar2 != 0) break;
      iVar4 = iVar4 + 1;
      if (local_4 <= iVar4) {
        return 0;
      }
    }
    *param_4 = iVar4;
    param_4[1] = iVar1;
    param_1 = 0x100;
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar2 = PtInRect((RECT *)(iVar1 + 0x120),pt_00);
    if (BVar2 != 0) {
      return 0x101;
    }
    pt_01.y = param_3;
    pt_01.x = param_2;
    BVar2 = PtInRect((RECT *)(iVar1 + 0x130),pt_01);
    if (BVar2 != 0) {
      return 0x102;
    }
    pt_02.y = param_3;
    pt_02.x = param_2;
    BVar2 = PtInRect((RECT *)(iVar1 + 0x140),pt_02);
    uVar3 = param_1;
    if (BVar2 != 0) {
      param_1 = 0x103;
      uVar3 = param_1;
    }
  }
  return uVar3;
}


