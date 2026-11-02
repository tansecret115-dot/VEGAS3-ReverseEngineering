/* Module: vegas30.exe
   Function: FUN_00598590
   Address: 00598590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00598590(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  
  iVar3 = DAT_0065a06c;
  *(undefined4 *)(DAT_0065a06c + 0x68) = param_1;
  puVar1 = (undefined4 *)(iVar3 + 0x70);
  *puVar1 = *param_2;
  *(undefined4 *)(iVar3 + 0x74) = param_2[1];
  *(undefined4 *)(iVar3 + 0x78) = param_2[2];
  *(undefined4 *)(iVar3 + 0x7c) = param_2[3];
  uVar2 = *(undefined2 *)(param_2 + 4);
  *(undefined4 **)(iVar3 + 0x6c) = puVar1;
  *(undefined2 *)(iVar3 + 0x80) = uVar2;
  *(undefined4 **)(iVar3 + 0x84) = (undefined4 *)(iVar3 + 0x88);
  *(undefined4 *)(iVar3 + 0x88) = *puVar1;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar3 + 0x74);
  *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x7c);
  *(undefined2 *)(iVar3 + 0x98) = *(undefined2 *)(iVar3 + 0x80);
  uVar4 = *(ushort *)(iVar3 + 0x8a);
  *(undefined2 *)(iVar3 + 0x8a) = 1;
  uVar4 = (ushort)((ulonglong)*(ushort *)(iVar3 + 0x94) / (ulonglong)(longlong)(int)(uint)uVar4);
  *(ushort *)(iVar3 + 0x94) = uVar4;
  *(uint *)(iVar3 + 0x90) = *(int *)(iVar3 + 0x8c) * (uint)uVar4;
  return;
}


