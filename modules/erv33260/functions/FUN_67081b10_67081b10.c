/* Module: erv33260.dll
   Function: FUN_67081b10
   Address: 67081b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67081b10(void *this,uint param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte local_20;
  byte local_1c;
  byte local_18;
  byte local_14;
  byte local_10;
  byte local_c;
  
  uVar4 = *(uint *)(*(int *)((int)this + 0x8c) + param_1 * 0xc);
  iVar1 = *(int *)((int)this + 0x8c) + param_1 * 0xc;
  bVar3 = *(byte *)(iVar1 + 6);
  bVar5 = (byte)(uVar4 >> 0xf);
  local_c = (byte)(uVar4 >> 0xc);
  local_1c = (byte)(uVar4 >> 5);
  local_20 = (byte)(uVar4 >> 1);
  local_18 = (byte)(uVar4 >> 6);
  local_10 = (byte)(uVar4 >> 0xb);
  local_14 = (byte)(uVar4 >> 7);
  bVar5 = ((byte)(uVar4 >> 0x12) | (byte)(uVar4 >> 0x11) | (byte)(uVar4 >> 0x10) | bVar5) & 0x20 |
          ((byte)(uVar4 >> 0xe) | (byte)(uVar4 >> 0xd) | bVar5 | local_c) & 0x10 |
          ((byte)(uVar4 >> 2) | local_1c | local_20 | local_18) & 2 |
          ((byte)(uVar4 >> 8) | local_10 | local_c | local_14) & 8 |
          ((byte)(uVar4 >> 10) | local_10 | local_14 | local_18) & 4 |
          ((byte)(uVar4 >> 4) | (byte)uVar4 | local_1c | local_20) & 1;
  *(byte *)(iVar1 + 7) = bVar5;
  if (*(int *)((int)this + 0x10) == 0) {
    if (bVar3 == 1) {
      FUN_6707d6f0(*(int *)((int)this + 4),1,1);
      FUN_670830d0(this,param_1);
    }
    else {
      FUN_6707d6f0(*(int *)((int)this + 4),0,1);
      FUN_67082ed0(this,param_1);
    }
    uVar6 = (uint)(bVar3 == 0);
    if (bVar3 == 1) {
      uVar6 = 2;
    }
    FUN_6707b240(*(void **)((int)this + 4),uVar4,uVar6,param_2);
    return 0;
  }
  pcVar2 = (char *)(*(int *)((int)this + 0x78) +
                   *(int *)(*(int *)((int)this + 0x90) + 8 + param_1 * 0x10) * 2);
  if ((bVar5 == 0) && ((((bVar3 == 2 && (*pcVar2 == '\0')) && (pcVar2[1] == '\0')) || (bVar3 == 8)))
     ) {
    FUN_6707d6f0(*(int *)((int)this + 4),1,1);
    return 0;
  }
  if (bVar3 < 2) {
    FUN_67081dc0(this,param_1);
    if (bVar3 == 1) {
      FUN_670830d0(this,param_1);
    }
    else {
      FUN_67082ed0(this,param_1);
    }
    uVar6 = (uint)(bVar3 == 0);
    if (bVar3 == 1) {
      uVar6 = 2;
    }
    FUN_6707b240(*(void **)((int)this + 4),uVar4,uVar6,param_2);
    return 0;
  }
  FUN_67081dc0(this,param_1);
  FUN_6707b240(*(void **)((int)this + 4),uVar4,0,param_2);
  return 0;
}


