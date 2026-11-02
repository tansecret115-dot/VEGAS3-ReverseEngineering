/* Module: vegas30k.dll
   Function: FUN_010866f0
   Address: 010866f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010866f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uchar *_Dest;
  tagDIR_ENTRY *ptVar4;
  int iVar5;
  uchar local_104 [260];
  
  iVar1 = *(int *)(param_2 + 0x34c);
  switch(*(undefined4 *)(iVar1 + 0x14c)) {
  case 2:
    uVar3 = FUN_010865f0(param_1,param_2);
    return uVar3;
  case 4:
    ptVar4 = DtGetLocalDirEntry(*(tagDIR_ENTRY **)(param_2 + 0x21c),"VIDEO_TS.IFO");
    iVar5 = *(int *)(*(int *)(ptVar4 + 0x34c) + 0x150);
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(param_2 + 0x330) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(param_2 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(uint *)(iVar1 + 0x20) =
         (uint)((*(uint *)(iVar5 + 0x18) & 0x7ff) != 0) + (*(uint *)(iVar5 + 0x18) >> 0xb);
    *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) = *(undefined4 *)(iVar5 + 0x18);
    *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) =
         (uint)((*(uint *)(iVar5 + 0x18) & 0x7ff) != 0) + (*(uint *)(iVar5 + 0x18) >> 0xb);
    if ((*(uint *)(ptVar4 + 0x218) & 8) != 0) {
      *(uint *)(param_2 + 0x218) = *(uint *)(param_2 + 0x218) | 8;
      *(undefined4 *)(param_2 + 0x340) = *(undefined4 *)(ptVar4 + 0x340);
    }
    return 0;
  case 5:
    uVar3 = FUN_01086530(param_1,param_2);
    return uVar3;
  case 7:
    _mbscpy(local_104,(uchar *)(param_2 + 0x110));
    _Dest = (uchar *)_SfGetFileNameExtensionPtrA_4(local_104);
    _mbscpy(_Dest,".IFO");
    ptVar4 = DtGetLocalDirEntry(*(tagDIR_ENTRY **)(param_2 + 0x21c),(char *)local_104);
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(*(int *)(ptVar4 + 0x34c) + 0x2c);
    iVar5 = *(int *)(ptVar4 + 0x34c);
    *(undefined4 *)(param_2 + 0x330) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(param_2 + 0x334) = *(undefined4 *)(iVar5 + 0x1c);
    iVar5 = *(int *)(ptVar4 + 0x34c);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
    uVar2 = *(uint *)(iVar1 + 0x18);
    iVar5 = __aullshr();
    *(uint *)(iVar1 + 0x20) = iVar5 + (uint)((uVar2 & 0x7ff) != 0);
    *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) =
         *(undefined4 *)(*(int *)(ptVar4 + 0x34c) + 0x18);
    uVar2 = *(uint *)(iVar1 + 0x18);
    iVar5 = __aullshr();
    *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) = iVar5 + (uint)((uVar2 & 0x7ff) != 0);
    if ((*(uint *)(ptVar4 + 0x218) & 8) != 0) {
      *(uint *)(param_2 + 0x218) = *(uint *)(param_2 + 0x218) | 8;
      *(undefined4 *)(param_2 + 0x340) = *(undefined4 *)(ptVar4 + 0x340);
    }
  }
  return 0;
}


