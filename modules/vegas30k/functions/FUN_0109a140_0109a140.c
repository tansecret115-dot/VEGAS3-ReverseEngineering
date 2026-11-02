/* Module: vegas30k.dll
   Function: FUN_0109a140
   Address: 0109a140
   Source: Ghidra pseudocode (Stage 10 batch) */


byte FUN_0109a140(_toc *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  _track *p_Var4;
  uint uVar5;
  
  uVar5 = 0;
  bVar2 = 0;
  bVar1 = false;
  if (param_1 == (_toc *)0x0) {
    return 0;
  }
  uVar3 = cdrtoc_GetTrackCount(param_1);
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 != 0) {
    do {
      p_Var4 = cdrtoc_GetTrack(param_1,uVar5);
      if ((*(uint *)(p_Var4 + 8) & 4) == 0) {
        bVar1 = true;
      }
      else {
        bVar2 = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (bVar1) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


