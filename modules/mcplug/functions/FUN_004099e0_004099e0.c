/* Module: mcplug.dll
   Function: FUN_004099e0
   Address: 004099e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_004099e0(int param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1[2] != 0) {
    sVar4 = fwrite((void *)puVar1[1],1,puVar1[2],(FILE *)*puVar1);
    sVar5 = puVar1[2];
    puVar1[2] = 0;
    if (sVar4 != sVar5) {
      return 0;
    }
  }
  sVar5 = fwrite(param_2,1,param_3,(FILE *)*puVar1);
  iVar2 = *(int *)(param_1 + 0x34);
  uVar3 = *(uint *)(iVar2 + 0x18);
  *(uint *)(iVar2 + 0x18) = uVar3 + sVar5;
  *(uint *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (uint)CARRY4(uVar3,sVar5);
  return (sVar5 != param_3) - 1 & param_3;
}


