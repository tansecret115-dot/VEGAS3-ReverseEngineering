/* Module: erv23260.dll
   Function: FUN_637fd430
   Address: 637fd430
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_637fd430(void *this,int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = *(byte **)((int)this + 4);
  uVar3 = param_1 + *(int *)((int)this + 0xc);
  uVar1 = (uint)*pbVar2;
  if (7 < uVar3) {
    uVar4 = uVar3 >> 3;
    do {
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 8;
      uVar1 = uVar1 << 8 | (uint)*pbVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar1 = uVar1 >> (8U - (char)uVar3 & 0x1f) & *(uint *)(&DAT_638293f0 + param_1 * 4);
  *param_3 = uVar1;
  uVar3 = (uint)*(ushort *)(param_2 + uVar1 * 2);
  uVar1 = (uVar3 & 0xff) + *(int *)((int)this + 0xc);
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (uVar1 >> 3);
  *(uint *)((int)this + 0xc) = uVar1 & 7;
  return uVar3;
}


