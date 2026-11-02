/* Module: rv203260.dll
   Function: FUN_638a9950
   Address: 638a9950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a9950(void *this,int param_1)

{
  FILE *pFVar1;
  void *this_00;
  int iVar2;
  
  if (*(int *)((int)this + 0x231) != 0) {
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0x231) = 1;
  iVar2 = 1;
  if ((*(uint *)((int)this + 0x32) & 0xf0000000) != 0) {
    iVar2 = param_1;
  }
  if (iVar2 == 1) {
    pFVar1 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar1 != (FILE *)0x0) {
      fprintf(pFVar1,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4b24,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
    }
    *(undefined4 *)((int)this + 0x10a) = 1;
    *(undefined4 *)((int)this + 0x106) = 1;
    FUN_638a19b0(*(int *)((int)this + 0xd6));
    *(undefined4 *)((int)this + 599) = 0;
    *(undefined4 *)((int)this + 0x2a8) = 0;
    *(undefined4 *)((int)this + 0x247) = 0;
    *(undefined4 *)((int)this + 0x24b) = 0;
    *(undefined4 *)((int)this + 0x253) = 1;
    *(undefined4 *)((int)this + 0x25b) = 0;
    if ((*(uint *)((int)this + 0xe2) != (uint)*(ushort *)((int)this + 0x9e)) ||
       (*(uint *)((int)this + 0xe6) != (uint)*(ushort *)((int)this + 0xa0))) {
      iVar2 = FUN_638a1630(*(void **)((int)this + 0xd6),(uint)*(ushort *)((int)this + 0x9e),
                           (uint)*(ushort *)((int)this + 0xa0));
      if (iVar2 != 0) {
        return 0x80004005;
      }
      *(undefined4 *)((int)this + 0x209) = 0;
    }
  }
  else {
    pFVar1 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar1 != (FILE *)0x0) {
      fprintf(pFVar1,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4ae0,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
    }
    *(undefined4 *)((int)this + 0x10a) = 2;
    *(undefined4 *)((int)this + 0x106) = 2;
    FUN_638a19b0(*(int *)((int)this + 0xd6));
    this_00 = *(void **)((int)this + 0xd6);
    *(undefined4 *)((int)this + 599) = 0;
    *(undefined4 *)((int)this + 0x2a8) = 1;
    iVar2 = FUN_638a1760(this_00,*(uint *)((int)this_00 + 0xf6),*(uint *)((int)this_00 + 0xfa),
                         (uint)*(ushort *)((int)this + 0x9e),(uint)*(ushort *)((int)this + 0xa0));
    if (iVar2 != 0) {
      return 0x80004005;
    }
  }
  *(undefined4 *)((int)this + 599) = *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x2d2);
  return 0;
}


