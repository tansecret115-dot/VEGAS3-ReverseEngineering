/* Module: vidpcore.dll
   Function: FUN_5df05810
   Address: 5df05810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5df05810(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  
  iVar6 = 0;
  iVar1 = **(int **)(param_1 + 0x308);
  iVar5 = 0;
  do {
    iVar4 = ftol();
    if ((float10)iVar4 == extraout_ST0) {
      iVar5 = ftol();
      goto LAB_5df058a1;
    }
    iVar5 = iVar5 + 1;
  } while ((float10)iVar5 <= extraout_ST1 * extraout_ST1);
  iVar5 = ftol();
LAB_5df058a1:
  dVar2 = _DAT_5df18830 / SQRT((double)iVar5);
  dVar3 = dVar2 * _DAT_5df1eec0;
  local_180 = dVar3;
  if (dVar3 <= _DAT_5df18830) {
    do {
      local_178 = dVar3;
      if (dVar3 <= _DAT_5df18830) {
        do {
          FUN_5df045b0(param_1,iVar6,&local_160);
          local_15c = local_180._4_4_;
          local_160 = (undefined4)local_180;
          local_158 = (undefined4)local_178;
          local_154 = local_178._4_4_;
          FUN_5df04600(param_1,iVar6,&local_160);
          iVar6 = iVar6 + 1;
          if (iVar1 < iVar6) {
            InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
          }
          local_178 = local_178 + dVar2;
        } while (local_178 <= _DAT_5df18830);
      }
      local_180 = local_180 + dVar2;
    } while (local_180 <= _DAT_5df18830);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  return 0;
}


