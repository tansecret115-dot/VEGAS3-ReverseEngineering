/* Module: aviplug.dll
   Function: FUN_5f940070
   Address: 5f940070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f940070(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4) * param_2;
  iVar2 = *(int *)(iVar5 + 0x14 + iVar4);
  iVar5 = iVar5 + iVar4;
  if ((*(int *)(iVar2 + 0x14) == 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x7c);
  }
  piVar1 = (int *)(*(int *)(iVar5 + 0x14) + 0x20 + *(int *)(*(int *)(iVar5 + 0x14) + 0xc) * 8);
  piVar1[1] = param_4;
  if (param_5 == 0) {
    piVar1[1] = param_4 | 0x80000000;
  }
  *piVar1 = (*(int *)(param_1 + 0x78) - *(int *)(*(int *)(iVar5 + 0x14) + 0x14)) + 8;
  *(int *)(*(int *)(iVar5 + 0x14) + 0xc) = *(int *)(*(int *)(iVar5 + 0x14) + 0xc) + 1;
  uVar3 = *(uint *)(iVar5 + 0x40);
  *(uint *)(iVar5 + 0x40) = uVar3 + param_3;
  *(uint *)(iVar5 + 0x44) =
       *(int *)(iVar5 + 0x44) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar3,param_3);
  iVar4 = (*(int *)(*(int *)(iVar5 + 0xc) + 0xc) + 1) * 0x10 + *(int *)(iVar5 + 0xc);
  *(uint *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + param_3;
  *(undefined4 *)(iVar5 + 0x1c) = 1;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 5;
  return;
}


