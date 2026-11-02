/* Module: erv23260.dll
   Function: FUN_6380d010
   Address: 6380d010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6380d010(void *this,int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  int local_8;
  
  FUN_637fd2d0(*(void **)((int)this + 0x6c4),&local_8,&local_c);
  pbVar1 = *(byte **)((int)this + 0x6d0);
  uVar3 = *(uint *)((int)this + 0x6d4);
  local_8 = local_8 - (int)pbVar1;
  iVar4 = local_c - uVar3;
  if (local_c < uVar3) {
    local_8 = local_8 + -1;
    iVar4 = iVar4 + 8;
  }
  *pbVar1 = *pbVar1 & ~(('\x01' << (8U - (char)uVar3 & 0x1f)) - 1U);
  uVar2 = ((uint)(iVar4 + local_8 * 8) >> 3) + 1;
  puVar5 = (undefined4 *)(*(int *)((int)this + 0x6d0) + 1);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_637fd2b0(*(void **)((int)this + 0x6c4),*(undefined4 *)((int)this + 0x6d0),
               *(undefined4 *)((int)this + 0x6d4));
  FUN_637fb2d0(*(void **)((int)this + 0x6c4),param_1,param_2);
  return 1;
}


