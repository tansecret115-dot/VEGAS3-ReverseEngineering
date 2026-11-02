/* Module: vegas30.exe
   Function: FUN_005bd0a0
   Address: 005bd0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bd0a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_214;
  undefined4 local_200 [8];
  undefined4 local_1e0 [64];
  undefined4 local_e0 [50];
  undefined4 uStack_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  puVar4 = local_200;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_200[1] = *(undefined4 *)(param_1 + 4);
  local_200[2] = *(undefined4 *)(param_1 + 0xc);
  local_10 = *(undefined4 *)(param_1 + 500);
  local_200[0] = 0x200;
  iVar2 = *(int *)(param_1 + 0x1f8);
  puVar4 = (undefined4 *)(param_1 + 0x10);
  puVar5 = local_200 + 3;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uStack_214 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x24);
  puVar5 = local_1e0;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x124);
  puVar5 = local_e0;
  for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_c = *(undefined4 *)(param_1 + 8);
  local_4 = *(int *)(param_1 + 0x5fc);
  local_8 = iVar2;
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_200,0x200);
  iVar2 = local_4;
  if ((-1 < iVar3) && (local_8 != 0)) {
    iVar3 = FUN_005d1590(local_4);
    if (iVar3 == 0) {
      uStack_214 = 0;
    }
    else if (*(int *)(iVar2 + 0x244) == 0) {
      uStack_214 = 0;
      if (*(undefined4 **)(iVar2 + 0x234) != (undefined4 *)0x0) {
        uStack_214 = **(undefined4 **)(iVar2 + 0x234);
      }
    }
    else {
      uStack_214 = FUN_005d0420(iVar2);
    }
    iVar3 = 0;
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_214,4);
    if ((-1 < iVar2) && (iVar2 = 0, 0 < iVar3)) {
      do {
        iVar1 = FUN_005bd210(param_2,uStack_18);
        if (iVar1 < 0) {
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}


