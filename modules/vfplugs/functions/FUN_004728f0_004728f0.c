/* Module: vfplugs.dll
   Function: FUN_004728f0
   Address: 004728f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004728f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_158 [86];
  
  piVar1 = (int *)(param_1 + 0x308);
  FUN_0044c300(*(int **)(param_1 + 0x308));
  *piVar1 = 0;
  iVar2 = FUN_0044c3d0(piVar1,0x158,-1,-1,0x40000004);
  if (-1 < iVar2) {
    local_158[0] = 0;
    local_158[1] = 0x3fe00000;
    local_158[2] = 0;
    local_158[3] = 0x3fe00000;
    FUN_0044ada0((int *)*piVar1,0,local_158,1);
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  }
  return 0;
}


