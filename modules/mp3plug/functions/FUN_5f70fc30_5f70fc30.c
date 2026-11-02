/* Module: mp3plug.dll
   Function: FUN_5f70fc30
   Address: 5f70fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f70fc30(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *this;
  uint uVar5;
  uint local_2c;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f70ff40;
  local_10 = ExceptionList;
  if (*param_1 != 0x28) {
    return 10;
  }
  if ((param_1[8] != 0x10) && (param_1[8] != 8)) {
    return 8;
  }
  if ((param_1[2] == 1) && (param_1[6] == 2)) {
    return 8;
  }
  uVar5 = param_1[7];
  uVar1 = param_1[3];
  if (((uVar5 != uVar1) && (uVar5 != (int)(uVar1 + (0x7fffffff < uVar1)) >> 1)) &&
     (uVar5 != (int)(uVar1 + ((uint)((int)uVar1 >> 1) >> 0x1e)) >> 2)) {
    return 8;
  }
  if (param_2 != 0) {
    return 0;
  }
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)FUN_5f681b80(0xc);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[2] = 0;
    *puVar4 = 0xc;
    param_1[9] = (int)puVar4;
    if (param_1[3] < 0x5dc1) {
      uVar5 = 0x240;
    }
    else {
      uVar5 = 0x480;
    }
    puVar4[1] = (int)((longlong)(ulonglong)uVar5 / (longlong)(param_1[3] / param_1[7])) * param_1[6]
                * ((int)(((uint)(param_1[8] >> 2) >> 0x1d) + param_1[8]) >> 3);
    iVar2 = param_1[3];
    iVar3 = param_1[7];
    local_2c = (uint)(param_1[8] == 8);
    if ((param_1[2] == 2) && (param_1[6] == 1)) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
    this = (void *)FUN_5f681b80(0xca40);
    if (this == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      local_8 = 0;
      FUN_5f711d90(this,iVar2 / iVar3 >> 1,local_2c,local_24);
    }
    puVar4[2] = this;
    local_8 = 0xffffffff;
    if (this != (void *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    FUN_5f681ba0(puVar4);
    param_1[9] = 0;
    ExceptionList = local_10;
    return 3;
  }
  param_1[9] = 0;
  ExceptionList = local_10;
  return 3;
}


