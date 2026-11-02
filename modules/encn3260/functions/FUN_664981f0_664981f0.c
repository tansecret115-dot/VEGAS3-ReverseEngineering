/* Module: encn3260.dll
   Function: FUN_664981f0
   Address: 664981f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664981f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x22);
  iVar2 = puVar1[3];
  iVar3 = puVar1[2];
  if (iVar2 - iVar3 < 0) {
    uVar5 = (uint)*(ushort *)(puVar1 + 5);
  }
  else {
    uVar5 = 0;
  }
  uVar4 = (**(code **)*puVar1)();
  if ((short)((ulonglong)((iVar2 - iVar3) + uVar5 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar4)
      == 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10),0);
    return 0;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
  return 0;
}


