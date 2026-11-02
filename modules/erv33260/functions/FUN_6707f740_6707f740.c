/* Module: erv33260.dll
   Function: FUN_6707f740
   Address: 6707f740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707f740(void *this,char *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar3 = FUN_6707f820(this,param_2 == 0);
  if (bVar3) {
    FUN_6707d6b0(*(void **)((int)this + 4),(undefined4 *)((int)this + 0x130),
                 (undefined4 *)((int)this + 0x134));
    *param_1 = '\0';
    return;
  }
  if (*param_1 != '\0') {
    FUN_6707d6b0(*(void **)((int)this + 4),(undefined4 *)((int)this + 0x130),
                 (undefined4 *)((int)this + 0x134));
    *param_1 = '\0';
    return;
  }
  FUN_6707f880(this,param_2,param_3);
  *param_1 = '\x01';
  *(byte *)(*(int *)((int)this + 0x8c) + 5 + param_2 * 0xc) =
       *(byte *)(*(int *)((int)this + 0x8c) + 5 + param_2 * 0xc) & 0xfa;
  uVar4 = *(int *)((int)this + 0xa4) * *(int *)((int)this + 0xa0);
  uVar6 = *(int *)((int)this + 0xa0) + param_2;
  if (uVar6 < uVar4) {
    uVar4 = uVar6;
  }
  uVar6 = param_2 + 1;
  if (uVar6 < uVar4) {
    iVar7 = uVar6 * 0xc;
    iVar5 = uVar4 - uVar6;
    do {
      pbVar1 = (byte *)(*(int *)((int)this + 0x8c) + 5 + iVar7);
      pbVar2 = (byte *)(*(int *)((int)this + 0x8c) + 5 + iVar7);
      iVar7 = iVar7 + 0xc;
      iVar5 = iVar5 + -1;
      *pbVar2 = *pbVar1 & 0xfb;
    } while (iVar5 != 0);
  }
  return;
}


