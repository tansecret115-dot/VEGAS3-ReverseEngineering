/* Module: aviplug.dll
   Function: FUN_5f9530b0
   Address: 5f9530b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f9530b0(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  LPSTR pCVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_238 [6];
  WCHAR local_220 [15];
  undefined2 local_202;
  WCHAR local_200 [127];
  undefined2 local_102;
  
  puVar5 = local_238;
  for (iVar3 = 0x8e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (0x237 < param_3) {
    param_3 = 0x238;
  }
  uVar4 = 0;
  uVar1 = 0;
  local_238[1] = 0x63646976;
  local_238[2] = param_1;
  local_238[3] = 0;
  local_238[4] = 0;
  local_238[5] = 0x104;
  if (param_1 < 0x6e766478) {
    if (param_1 == 0x6e766477) {
      uVar4 = 0x41;
      uVar1 = 0x4b;
    }
    else if (param_1 == 0x64737664) {
      uVar4 = 0x45;
      uVar1 = 0x45;
    }
    else if (param_1 == 0x6e76645f) {
      uVar4 = 0x3e;
      uVar1 = 0x49;
    }
  }
  else if (param_1 == 0x7076645f) {
    uVar4 = 0x3f;
    uVar1 = 0x4a;
  }
  else if (param_1 == 0x70766477) {
    uVar4 = 0x42;
    uVar1 = 0x4c;
  }
  local_238[0] = param_3;
  pCVar2 = FUN_5f9811c0(DAT_5f9f5978,uVar1);
  MultiByteToWideChar(0,1,pCVar2,-1,local_220,0x10);
  local_202 = 0;
  pCVar2 = FUN_5f9811c0(DAT_5f9f5978,uVar4);
  MultiByteToWideChar(0,1,pCVar2,-1,local_200,0x80);
  local_102 = 0;
  puVar5 = local_238;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(char *)param_2 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  }
  return param_3;
}


