/* Module: erv23260.dll
   Function: FUN_637fd4b0
   Address: 637fd4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __thiscall FUN_637fd4b0(void *this,int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar3 = *(byte **)((int)this + 4);
  uVar4 = param_1 + *(int *)((int)this + 0xc);
  uVar2 = (uint)*pbVar3;
  if (7 < uVar4) {
    uVar5 = uVar4 >> 3;
    do {
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 - 8;
      uVar2 = uVar2 << 8 | (uint)*pbVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar2 = uVar2 >> (8U - (char)uVar4 & 0x1f) & *(uint *)(&DAT_638293f0 + param_1 * 4);
  *param_3 = uVar2;
  bVar1 = *(byte *)(param_2 + uVar2);
  uVar2 = (bVar1 & 0xf) + *(int *)((int)this + 0xc);
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (uVar2 >> 3);
  *(uint *)((int)this + 0xc) = uVar2 & 7;
  return bVar1;
}


