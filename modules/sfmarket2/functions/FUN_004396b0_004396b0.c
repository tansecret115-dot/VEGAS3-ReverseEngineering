/* Module: sfmarket2.dll
   Function: FUN_004396b0
   Address: 004396b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004396b0(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004390e0(this,0xaaaaaab0,(uchar *)"FindFirstCentralDirectory",(uchar *)0x0);
    return 0x80004005;
  }
  if (*(int *)((int)this + 0x30) == 0xc054d55) {
    iVar1 = FUN_004394d0(this,*(uint *)((int)this + 0x4c) + *(uint *)((int)this + 0x890),
                         *(int *)((int)this + 0x50) + *(int *)((int)this + 0x894) +
                         (uint)CARRY4(*(uint *)((int)this + 0x4c),*(uint *)((int)this + 0x890)),
                         param_1);
    if (iVar1 != 0) {
      *(uint *)((int)this + 0x670) = *(uint *)((int)this + 0x4c) + *(uint *)((int)this + 0x890);
      *(uint *)((int)this + 0x674) =
           *(int *)((int)this + 0x50) + *(int *)((int)this + 0x894) +
           (uint)CARRY4(*(uint *)((int)this + 0x4c),*(uint *)((int)this + 0x890));
      return 0;
    }
    return 1;
  }
  FUN_004390e0(this,0xaaaaaaa5,(uchar *)"FindFirstCentralDirectory",(uchar *)0x0);
  return 0x80004005;
}


