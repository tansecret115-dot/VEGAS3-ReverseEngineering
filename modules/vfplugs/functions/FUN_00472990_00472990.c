/* Module: vfplugs.dll
   Function: FUN_00472990
   Address: 00472990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00472990(int param_1)

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
      goto LAB_00472a21;
    }
    iVar5 = iVar5 + 1;
  } while ((float10)iVar5 <= extraout_ST1 * extraout_ST1);
  iVar5 = ftol();
LAB_00472a21:
  dVar2 = _DAT_00487590 / SQRT((double)iVar5);
  dVar3 = dVar2 * _DAT_00487e20;
  local_180 = dVar3;
  if (dVar3 <= _DAT_00487590) {
    do {
      local_178 = dVar3;
      if (dVar3 <= _DAT_00487590) {
        do {
          FUN_00471730(param_1,iVar6,&local_160);
          local_15c = local_180._4_4_;
          local_160 = (undefined4)local_180;
          local_158 = (undefined4)local_178;
          local_154 = local_178._4_4_;
          FUN_00471780(param_1,iVar6,&local_160);
          iVar6 = iVar6 + 1;
          if (iVar1 < iVar6) {
            InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
          }
          local_178 = local_178 + dVar2;
        } while (local_178 <= _DAT_00487590);
      }
      local_180 = local_180 + dVar2;
    } while (local_180 <= _DAT_00487590);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  return 0;
}


