/* Module: erv33260.dll
   Function: FUN_6707f880
   Address: 6707f880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707f880(void *this,int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  int local_8;
  
  FUN_6707d6b0(*(void **)((int)this + 4),&local_8,&local_c);
  pbVar1 = *(byte **)((int)this + 0x130);
  uVar3 = *(uint *)((int)this + 0x134);
  local_8 = local_8 - (int)pbVar1;
  iVar4 = local_c - uVar3;
  if (local_c < uVar3) {
    local_8 = local_8 + -1;
    iVar4 = iVar4 + 8;
  }
  *pbVar1 = *pbVar1 & ~(('\x01' << (8U - (char)uVar3 & 0x1f)) - 1U);
  uVar2 = ((uint)(iVar4 + local_8 * 8) >> 3) + 1;
  puVar5 = (undefined4 *)(*(int *)((int)this + 0x130) + 1);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_6707d690(*(void **)((int)this + 4),*(undefined4 *)((int)this + 0x130),
               *(undefined4 *)((int)this + 0x134));
  FUN_6707b060(*(void **)((int)this + 4),param_1,param_2);
  return;
}


