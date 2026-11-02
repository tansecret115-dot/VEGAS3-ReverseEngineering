/* Module: rmme3260.dll
   Function: FUN_66219e40
   Address: 66219e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66219e40(void *this,uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    *(short *)((int)this + 0x12) = (short)param_1[1];
    *(ushort *)(param_1 + 2) = (ushort)param_1[2] | 2;
  }
  if (((param_1[2] & 2) == 0) && (param_4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  bVar5 = true;
  if (*(int *)((int)this + 0x48) != 0) {
    bVar5 = *(uint *)(*(int *)((int)this + 0x48) + 2) < *param_1;
  }
  if ((bVar1) && (bVar5)) {
    uVar3 = *(int *)((int)this + 0x28) + 1;
    *(uint *)((int)this + 0x28) = uVar3;
    if ((*(int *)((int)this + 0x1c) == 0) || (0x3f < uVar3)) {
      puVar2 = operator_new(0x380);
      FUN_6624ff10((void *)((int)this + 0x18),*(int *)((int)this + 0x1c),puVar2);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    else {
      puVar2 = (undefined2 *)
               (*(int *)(*(int *)((int)this + 0x18) + -4 + *(int *)((int)this + 0x1c) * 4) +
               uVar3 * 0xe);
    }
    *puVar2 = 0;
    uVar3 = *param_1;
    *(undefined4 *)(puVar2 + 3) = param_2;
    *(uint *)(puVar2 + 1) = uVar3;
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((int)this + 0x2c);
    *(undefined2 **)((int)this + 0x48) = puVar2;
    iVar4 = *(int *)((int)this + 0x30) + 1;
    *(int *)((int)this + 0x30) = iVar4;
    *(int *)((int)this + 0xe) = iVar4;
    *(int *)((int)this + 0x44) = iVar4 * 0xe + 0x14;
  }
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  *(int *)this = *(int *)this + param_3;
  return 0;
}


