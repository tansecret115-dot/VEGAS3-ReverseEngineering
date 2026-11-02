/* Module: sfs4rw.dll
   Function: FUN_0043c9d0
   Address: 0043c9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0043c9d0(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0043c400(this,0xaaaaaab0,(uchar *)"FindFirstCentralDirectory",(uchar *)0x0);
    return 0x80004005;
  }
  if (*(int *)((int)this + 0x30) == 0xc054d55) {
    iVar1 = FUN_0043c7f0(this,*(uint *)((int)this + 0x4c) + *(uint *)((int)this + 0x890),
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
  FUN_0043c400(this,0xaaaaaaa5,(uchar *)"FindFirstCentralDirectory",(uchar *)0x0);
  return 0x80004005;
}


