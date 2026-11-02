/* Module: vegas30k.dll
   Function: FUN_01177a70
   Address: 01177a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01177afc) */

longlong __fastcall FUN_01177a70(int param_1)

{
  int iVar1;
  longlong local_8;
  
  if ((*(byte *)(param_1 + 0x5c) & 2) == 0) {
    local_8 = *(longlong *)(param_1 + 0x188);
  }
  else {
    iVar1 = _SfGetMillisec_0();
    local_8 = __allmul((*(int *)(param_1 + 0x1a4) - *(int *)(param_1 + 0x1a8)) + iVar1,0,10000,0);
    FUN_01191ee0(param_1 + 0xd8,*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),
                 &local_8,*(undefined4 *)(param_1 + 100));
    if ((local_8 < 0x100000000) && (local_8 < 0)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x198) < local_8) {
      return *(longlong *)(param_1 + 0x198);
    }
  }
  return local_8;
}


