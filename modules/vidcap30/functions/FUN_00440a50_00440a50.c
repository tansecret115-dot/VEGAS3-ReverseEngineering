/* Module: vidcap30.exe
   Function: FUN_00440a50
   Address: 00440a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00440a50(int param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint local_410 [4];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  int local_3e8 [4];
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  CHAR local_2b4 [259];
  undefined1 local_1b1;
  CHAR local_1b0 [127];
  undefined1 local_131;
  undefined4 local_12c;
  uint local_8;
  
  piVar3 = local_3e8;
  for (iVar2 = 0xfa; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  puVar4 = local_410;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_3e8[0] = 1000;
  lstrcpynA(local_1b0,param_2,0x80);
  local_131 = 0;
  lstrcpynA(local_2b4,param_3,0x104);
  local_410[0] = local_410[0] | 0x3f;
  local_1b1 = 0;
  FUN_0042b900(param_1 + 0xa48,local_410,1);
  if (local_410[1] != 0) {
    if (local_410[1] != -1) {
      local_3e8[2] = local_410[1];
      local_8 = local_8 | 0x19;
      local_3c8 = local_400;
      local_3c0 = local_3f8;
      local_3c4 = local_3fc;
      local_3bc = local_3f4;
    }
    if (-1 < (int)local_410[2]) {
      local_3e8[3] = local_410[2];
      local_8 = local_8 | 2;
    }
    local_8 = local_8 | 0x24;
    local_3d0 = FUN_0045bb80(local_410[3],0);
    local_12c = param_4;
    local_3d8 = param_5;
    local_3d4 = param_6;
    uVar1 = FUN_00440a10(param_1,local_3e8);
    return uVar1;
  }
  return 0;
}


