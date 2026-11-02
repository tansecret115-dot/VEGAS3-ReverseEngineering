/* Module: aviplug.dll
   Function: FUN_5f9567f0
   Address: 5f9567f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9567f0(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  LPSTR pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = param_3;
  for (iVar2 = 0x8e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      param_2 = 0x64737664;
    }
    else {
      param_2 = *(uint *)(param_1 + 4);
    }
  }
  uVar4 = 0;
  *param_3 = param_4;
  uVar3 = 0;
  param_3[1] = 0x63646976;
  param_3[2] = param_2;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0x104;
  if (param_2 < 0x6e766478) {
    if (param_2 == 0x6e766477) {
      uVar4 = 0x41;
      uVar3 = 0x4b;
    }
    else if (param_2 == 0x64737664) {
      uVar4 = 0x45;
      uVar3 = 0x45;
    }
    else if (param_2 == 0x6e76645f) {
      uVar4 = 0x3e;
      uVar3 = 0x49;
    }
  }
  else if (param_2 == 0x7076645f) {
    uVar4 = 0x3f;
    uVar3 = 0x4a;
  }
  else if (param_2 == 0x70766477) {
    uVar4 = 0x42;
    uVar3 = 0x4c;
  }
  pCVar1 = FUN_5f9811c0(DAT_5f9f5978,uVar3);
  MultiByteToWideChar(0,1,pCVar1,-1,(LPWSTR)(param_3 + 6),0x10);
  *(undefined2 *)((int)param_3 + 0x36) = 0;
  pCVar1 = FUN_5f9811c0(DAT_5f9f5978,uVar4);
  MultiByteToWideChar(0,1,pCVar1,-1,(LPWSTR)(param_3 + 0xe),0x80);
  *(undefined2 *)((int)param_3 + 0x136) = 0;
  return 0x238;
}


