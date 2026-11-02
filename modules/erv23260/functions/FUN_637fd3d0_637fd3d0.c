/* Module: erv23260.dll
   Function: FUN_637fd3d0
   Address: 637fd3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_637fd3d0(void *this,int param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 + *(int *)((int)this + 0xc);
  uVar1 = (uint)**(byte **)((int)this + 4);
  if (7 < uVar3) {
    uVar4 = uVar3 >> 3;
    do {
      pbVar2 = (byte *)(*(int *)((int)this + 4) + 1);
      uVar3 = uVar3 - 8;
      *(byte **)((int)this + 4) = pbVar2;
      uVar1 = uVar1 << 8 | (uint)*pbVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = *(uint *)(&DAT_638293f0 + param_1 * 4);
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar1 >> (8U - (char)uVar3 & 0x1f) & uVar4;
}


