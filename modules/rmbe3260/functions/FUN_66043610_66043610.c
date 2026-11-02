/* Module: rmbe3260.dll
   Function: FUN_66043610
   Address: 66043610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66043610(void *this,char *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  switch(*(undefined4 *)((int)this + 0xe)) {
  case 0:
  case 2:
    bVar1 = *(byte *)this;
    iVar4 = ((uint)*(byte *)((int)this + 1) | (uint)(ushort)(*(short *)((int)this + 0xe) << 7)) << 7
    ;
    *param_1 = (char)((uint)iVar4 >> 8);
    param_1[1] = (byte)iVar4 | bVar1;
    iVar4 = FUN_660436f0(*(int *)((int)this + 0x12),*(uint *)((int)this + 2),(byte *)(param_1 + 2));
    uVar2 = *(uint *)((int)this + 6);
    iVar4 = iVar4 + 2;
    break;
  case 1:
    *param_1 = *(char *)((int)this + 0xe) << 6;
    param_1[1] = *(char *)((int)this + 0x16);
    return 2;
  case 3:
    *param_1 = *(char *)((int)this + 0xe) << 6;
    iVar4 = FUN_660436f0(0,*(uint *)((int)this + 2),(byte *)(param_1 + 1));
    uVar2 = *(uint *)((int)this + 10);
    iVar4 = iVar4 + 1;
    break;
  default:
    goto switchD_66043626_default;
  }
  iVar3 = FUN_660436f0(0,uVar2,(byte *)(param_1 + iVar4));
  param_1[iVar4 + iVar3] = *(char *)((int)this + 0x16);
  iVar4 = iVar4 + iVar3 + 1;
switchD_66043626_default:
  return iVar4;
}


