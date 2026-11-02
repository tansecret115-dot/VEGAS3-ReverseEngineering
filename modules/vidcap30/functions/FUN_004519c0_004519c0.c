/* Module: vidcap30.exe
   Function: FUN_004519c0
   Address: 004519c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004519c0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  int *piVar4;
  undefined4 *puVar5;
  int local_118 [4];
  int local_108;
  undefined4 local_f8 [10];
  undefined4 local_d0 [16];
  undefined4 local_90 [16];
  undefined4 local_50 [14];
  undefined4 uStack_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar4 = local_118;
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_118[0] = 0x118;
  local_118[1] = 0x30000;
  iVar2 = lstrlenA((LPCSTR)(param_1 + 0xbc));
  local_118[2] = iVar2 * 2 + 2;
  iVar2 = lstrlenA((LPCSTR)(param_1 + 0x1e0));
  local_118[3] = iVar2 * 2 + 2;
  iVar2 = lstrlenA((LPCSTR)(param_1 + 0x2e4));
  local_108 = iVar2 * 2 + 2;
  uVar1 = *(undefined4 *)(param_1 + 0x518);
  puVar3 = (undefined4 *)(param_1 + 0x3f0);
  puVar5 = local_f8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_c = *(undefined4 *)(param_1 + 0x51c);
  local_10 = uVar1;
  iVar2 = lstrlenA((LPCSTR)(param_1 + 0x528));
  local_8 = iVar2 * 2 + 2;
  puVar3 = (undefined4 *)(param_1 + 0x418);
  puVar5 = local_d0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x458);
  puVar5 = local_90;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x498);
  puVar5 = local_50;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,local_118,0x118,0);
  if (-1 < iVar2) {
    iVar2 = FUN_00451fa0(param_2,unaff_ESI,(LPCSTR)(param_1 + 0x528));
    if (-1 < iVar2) {
      iVar2 = FUN_00451fa0(param_2,unaff_EBX,(LPCSTR)(param_1 + 0x1e0));
      if (-1 < iVar2) {
        iVar2 = FUN_00451fa0(param_2,unaff_EDI,local_118[0]);
        if (-1 < iVar2) {
          FUN_00451fa0(param_2,unaff_EBP,uStack_18);
        }
      }
    }
  }
  return;
}


