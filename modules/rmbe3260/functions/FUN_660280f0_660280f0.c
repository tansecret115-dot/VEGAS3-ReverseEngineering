/* Module: rmbe3260.dll
   Function: FUN_660280f0
   Address: 660280f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660280f0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  uint uVar3;
  
  iVar1 = param_1;
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  if (*(int *)((int)this + 0x34) == 0) {
    *(undefined4 *)((int)this + 0x30) = uVar2;
    *(undefined4 *)((int)this + 0x34) = 1;
    *(undefined4 *)((int)this + 0x84) = uVar2;
  }
  uVar3 = (uint)(*(int *)((int)this + 0x1e0) != 0);
  if (*(int *)((int)this + 0x1e4) != 0) {
    uVar3 = uVar3 | 2;
  }
  if ((DAT_66075194 != 0) &&
     ((DAT_660751b8 != 0 ||
      (DAT_660751b8 = FUN_6604f070(&DAT_66075190,s_InputVideoConvert_6606de78), DAT_660751b8 != 0)))
     ) {
    FUN_6604eef0(DAT_660751b8);
  }
  this_00 = (void *)((int)this + 0x14c);
  FUN_6602b5a0(this_00,*(undefined4 *)(iVar1 + 0xc),uVar3);
  if ((DAT_66075194 != 0) && (DAT_660751b8 != 0)) {
    FUN_6604ef20(DAT_660751b8);
  }
  uVar2 = FUN_6602b860((int)this_00);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  FUN_6602b4a0(this_00,&param_1);
  *(int *)(iVar1 + 0x10) = param_1;
  return 0;
}


