/* Module: sfpagepeel.dll
   Function: FUN_004213b0
   Address: 004213b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004213b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  
  if ((*(byte *)(param_1 + 0xc) & 0x41) == 0) {
    pt.y = param_3;
    pt.x = param_2;
    BVar2 = PtInRect((RECT *)(param_1 + 0x68),pt);
    if (BVar2 != 0) {
      return 5;
    }
    if ((*(uint *)(param_1 + 0xc) & 0x100) == 0) {
      pt_00.y = param_3;
      pt_00.x = param_2;
      BVar2 = PtInRect((RECT *)(param_1 + 0x90),pt_00);
      if (BVar2 != 0) {
        if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
          iVar1 = ((RECT *)(param_1 + 0x90))->left;
          return (uint)((*(int *)(param_1 + 0x98) - iVar1) / 2 + iVar1 <= param_2);
        }
        return (uint)((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94)) / 2 +
                      *(int *)(param_1 + 0x94) <= param_3);
      }
    }
    pt_01.y = param_3;
    pt_01.x = param_2;
    BVar2 = PtInRect((RECT *)(param_1 + 0x48),pt_01);
    if (BVar2 != 0) {
      if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
        return (((RECT *)(param_1 + 0x68))->left <= param_2) + 2;
      }
      return (*(int *)(param_1 + 0x6c) <= param_3) + 2;
    }
  }
  return 0xffffffff;
}


