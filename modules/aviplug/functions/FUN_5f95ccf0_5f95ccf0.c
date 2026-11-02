/* Module: aviplug.dll
   Function: FUN_5f95ccf0
   Address: 5f95ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_5f95ccf0(void *this,int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x424);
  bVar4 = iVar1 != 0;
  if ((param_1 != 0) && (iVar1 == 0)) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                      (*(int **)((int)this + 0x30),0x42,0x42);
    *(undefined4 *)(*(int *)((int)this + 0x34) + 0x424) = uVar3;
    iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x424);
    if (iVar1 != 0) {
      bVar4 = true;
      *(undefined4 *)(iVar1 + 0x12) = 1;
      puVar2 = *(undefined2 **)(*(int *)((int)this + 0x34) + 0x424);
      *puVar2 = 1;
      puVar2[1] = 2;
      *(undefined4 *)(puVar2 + 2) = 0xac44;
      puVar2[7] = 0x10;
      puVar2[6] = 4;
      *(undefined4 *)(puVar2 + 4) = 0x2b110;
      puVar2[8] = 0;
      FUN_5f95cf40(this);
    }
  }
  return bVar4;
}


