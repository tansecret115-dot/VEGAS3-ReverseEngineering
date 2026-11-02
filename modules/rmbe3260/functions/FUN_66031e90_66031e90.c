/* Module: rmbe3260.dll
   Function: FUN_66031e90
   Address: 66031e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66031e90(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = param_2;
  piVar2 = *(int **)((int)this + 4);
  iVar6 = 0;
  uVar3 = param_2 + piVar2[0xb];
  if (*(uint *)(piVar2[0xe] + 0x10) < uVar3) {
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))(&param_2);
  }
  else {
    piVar1 = (int *)(piVar2[0xe] + 0x14);
    *piVar1 = *piVar1 + 1;
    if (param_2 == 0) {
      puVar4 = *(undefined4 **)(piVar2[0xe] + 0xc);
    }
    else {
      puVar4 = (undefined4 *)piVar2[0xb];
      piVar2[0xb] = uVar3;
      piVar2[0xc] = uVar3;
    }
  }
  if ((puVar4 == (undefined4 *)0x0) || (param_2 != uVar5)) {
    iVar6 = -0x7ff8fff2;
  }
  if (iVar6 == 0) {
    puVar7 = puVar4;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *param_1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar6 = (**(code **)(**(int **)((int)this + 4) + 0x30))(puVar4);
  }
  return iVar6;
}


