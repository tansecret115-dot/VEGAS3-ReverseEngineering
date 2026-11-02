/* Module: sftrans1.dll
   Function: FUN_004a5160
   Address: 004a5160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a5160(HWND param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  float10 fVar2;
  undefined8 local_38;
  CHAR local_30 [20];
  CHAR local_1c [24];
  
  GetWindowTextA(param_1,local_30,0x14);
  FUN_004c6ae0(local_1c,&DAT_0055e6e4,*param_2,param_2[1]);
  fVar2 = (float10)FUN_004d6ed0(local_30,0);
  local_38 = (double)fVar2;
  if ((float10)(double)CONCAT44(param_4,param_3) <= fVar2) {
    if ((float10)(double)CONCAT44(param_6,param_5) < fVar2) {
      local_38 = (double)CONCAT44(param_6,param_5);
    }
  }
  else {
    local_38 = (double)CONCAT44(param_4,param_3);
  }
  FUN_004c6ae0(local_30,&DAT_0055e6e4,(undefined4)local_38,local_38._4_4_);
  iVar1 = lstrcmpA(local_1c,local_30);
  if (iVar1 != 0) {
    *param_2 = (undefined4)local_38;
    param_2[1] = local_38._4_4_;
    return 1;
  }
  return 0;
}


