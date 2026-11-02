/* Module: vegas30.exe
   Function: FUN_005c9cc0
   Address: 005c9cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c9cc0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Memory;
  int iVar3;
  undefined4 *puVar4;
  void *local_224;
  undefined4 local_220 [6];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  
  FUN_005b83b0(param_2,1);
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  if (param_4 == *(int *)(param_3 + 4)) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    puVar4 = local_220;
    for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_204 = param_6;
    local_208 = param_5;
    local_200 = param_8;
    local_1fc = param_9;
    uVar2 = FUN_005c8b90(param_3,local_220);
    _Memory = calloc(1,0x308);
    if (_Memory == (void *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      local_224 = _Memory;
      iVar3 = _SfList_InsertList_16(uVar1,uVar2,&local_224,1);
      if (iVar3 < 0) {
        free(_Memory);
      }
      else {
        iVar3 = FUN_005c9b60(_Memory,param_2,param_3,param_4,param_5,param_6,param_7);
        if (-1 < iVar3) {
          if (param_1 != (undefined4 *)0x0) {
            *param_1 = _Memory;
          }
          *(uint *)*param_2 = *(uint *)*param_2 | 0x20;
          if (((*(uint *)((int)_Memory + 0x10) & 0x400) != 0) ||
             ((*(uint *)(param_3 + 0x10) & 0x200) != 0)) {
            *(uint *)*param_2 = *(uint *)*param_2 | 0x400;
          }
        }
      }
    }
  }
  else {
    iVar3 = -0x7fffbffb;
  }
  FUN_005b84d0(param_2,1);
  return iVar3;
}


