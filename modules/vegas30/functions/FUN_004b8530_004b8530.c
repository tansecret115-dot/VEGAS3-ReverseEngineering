/* Module: vegas30.exe
   Function: FUN_004b8530
   Address: 004b8530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8530(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(param_2 + 8) <= param_3) && (param_3 <= *(int *)(param_2 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x90) - param_3;
    if (iVar1 < -0x4000) {
      iVar1 = -0x4000;
    }
    else if (0x4000 < iVar1) {
      iVar1 = 0x4000;
    }
    if ((*(int *)(param_1 + 0xb98) != 0) && (iVar1 != 0)) {
      floor(((double)*(longlong *)(param_1 + 0xb90) * (double)iVar1) /
            (double)*(int *)(param_1 + 0xb98) + _DAT_00610560);
      lVar2 = ftol();
      if (lVar2 != 0) {
        FUN_00458ac0(param_1,lVar2,0);
      }
    }
    *(int *)(param_1 + 0x90) = param_3;
    *(undefined4 *)(param_1 + 0x94) = param_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if ((DAT_0064cb71 & 1) == 0) {
    DAT_0064cb71 = DAT_0064cb71 | 1;
    _DAT_0064cb7c = *(undefined4 *)(param_2 + 0x1c);
    _DAT_0064cb80 = 0;
    _DAT_0064cb84 = *(undefined4 *)(param_2 + 0x1c);
  }
  FUN_00454f60(param_1,param_3,param_4,(int *)(param_2 + 8),&DAT_0064cb78,0x11);
  return;
}


