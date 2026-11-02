/* Module: vegas30.exe
   Function: FUN_006019b0
   Address: 006019b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_006019b0(int param_1,undefined4 *param_2,uint *param_3,uint param_4,uint *param_5,
            undefined4 *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_4;
  
  local_4 = 0;
  *param_2 = 0;
  iVar2 = FUN_005ffc40(param_4,&local_4);
  if (iVar2 != -0x7ffb1ed3) {
    uVar1 = FUN_005ff450(param_4);
    uVar4 = (uint)uVar1;
    if (uVar4 == 0) {
      iVar2 = -0x7ffb1ec0;
      if (param_5 != (uint *)0x0) {
        *param_5 = 0;
      }
    }
    else if (param_5 != (uint *)0x0) {
      uVar3 = FUN_005ff4b0(param_4);
      *param_5 = uVar3 & 0xffff;
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    param_4 = uVar4;
    if (iVar2 == 0x4e135) {
      local_4 = 0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      if (*(int *)(param_1 + 0x680) == 0) {
        if ((*(int *)(param_1 + 0x7f4) == 0) || (*(int *)(param_1 + 0x7f0) == 0)) {
          iVar2 = -0x7ffb1eb2;
        }
        else {
          iVar2 = 0x4e137;
        }
      }
      else {
        iVar2 = 0x4e136;
      }
    }
  }
  *param_2 = local_4;
  *param_3 = param_4;
  return iVar2;
}


