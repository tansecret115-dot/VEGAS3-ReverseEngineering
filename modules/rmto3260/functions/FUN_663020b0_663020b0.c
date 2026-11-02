/* Module: rmto3260.dll
   Function: FUN_663020b0
   Address: 663020b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_663020b0(void *this,byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  iVar7 = 0;
  *(undefined1 *)this = 0;
  *(undefined1 *)((int)this + 1) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(uint *)((int)this + 2) = 0;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0xe) = 0x7fff;
  bVar2 = *param_1;
  uVar5 = (uint)(bVar2 >> 6);
  switch(uVar5) {
  case 0:
  case 2:
    bVar3 = param_1[1];
    *(uint *)((int)this + 0xe) = uVar5;
    *(byte *)this = bVar3 & 0x7f;
    *(byte *)((int)this + 1) = (byte)(CONCAT11(bVar2,bVar3) >> 7) & 0x7f;
    iVar7 = FUN_66302270((uint *)((int)this + 0x12),(uint *)((int)this + 2),param_1 + 2);
    iVar8 = FUN_66302270(&local_8,(uint *)((int)this + 6),param_1 + iVar7 + 2);
    iVar8 = iVar7 + 2 + iVar8;
    *(byte *)((int)this + 0x16) = param_1[iVar8];
    return iVar8 + 1;
  case 1:
    *(undefined4 *)((int)this + 0xe) = 1;
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined1 *)this = 1;
    *(byte *)((int)this + 0x16) = param_1[1];
    return 2;
  case 3:
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined1 *)this = 1;
    *(undefined4 *)((int)this + 0xe) = 3;
    iVar7 = FUN_66302270(&local_8,(uint *)((int)this + 2),param_1 + 1);
    iVar8 = iVar7 + 1;
    if (*(int *)((int)this + 0x17) == 0) {
      iVar6 = FUN_66302270(&local_8,(uint *)((int)this + 10),param_1 + iVar8);
    }
    else {
      pbVar1 = param_1 + iVar8;
      iVar6 = FUN_66302270(&local_8,(uint *)((int)this + 10),pbVar1);
      uVar5 = *(uint *)((int)this + 0x1b);
      if ((((0x3fff < uVar5) && (uVar4 = *(uint *)((int)this + 10), uVar4 < uVar5)) &&
          (uVar4 < 0x3fff)) && (60000 < (uVar4 - uVar5) + 0x3fffffff)) {
        *(uint *)((int)this + 10) =
             (uint)CONCAT11(pbVar1[2],pbVar1[3]) |
             ((uint)pbVar1[1] | (uint)(ushort)((*pbVar1 & 0x3f) << 8)) << 0x10;
        *(byte *)((int)this + 0x16) = param_1[iVar7 + 5];
        return iVar7 + 6;
      }
    }
    iVar7 = iVar8 + iVar6 + 1;
    *(byte *)((int)this + 0x16) = param_1[iVar8 + iVar6];
  }
  return iVar7;
}


