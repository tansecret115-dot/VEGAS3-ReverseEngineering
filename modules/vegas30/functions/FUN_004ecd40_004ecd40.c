/* Module: vegas30.exe
   Function: FUN_004ecd40
   Address: 004ecd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ecd40(HWND param_1,uint param_2,int param_3)

{
  uint uVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  UINT uPosition;
  undefined4 *puVar5;
  int nPos;
  undefined4 local_218;
  uchar local_214 [260];
  CHAR local_110 [272];
  
  if (DAT_00647afc == 0) {
    _SfBeep_4(1);
    return -0x7fffbffb;
  }
  puVar5 = &local_218;
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  _Size = param_2 * 0x108;
  _mbscpy(local_214,(uchar *)(*(int *)(param_3 + 4) + 4 + _Size));
  local_218 = *(undefined4 *)(*(int *)(param_3 + 4) + _Size);
  iVar3 = FUN_004ec850(local_214,0,0xffffffff);
  if (iVar3 == 0) {
    memmove((void *)((int)*(void **)(param_3 + 4) + 0x108),*(void **)(param_3 + 4),_Size);
    **(undefined4 **)(param_3 + 4) = local_218;
    _mbscpy((uchar *)(*(int *)(param_3 + 4) + 4),local_214);
    iVar3 = FUN_004ec9b0();
    iVar4 = 0;
    uPosition = 0x9cb6;
    do {
      FUN_004ec910(uPosition - 0x9cb5,*(int *)(param_3 + 4) + 4 + iVar4,local_110,0x10e);
      nPos = iVar3;
      pHVar2 = GetMenu(param_1);
      pHVar2 = GetSubMenu(pHVar2,nPos);
      ModifyMenuA(pHVar2,uPosition,0,uPosition,local_110);
      iVar4 = iVar4 + 0x108;
      uVar1 = uPosition - 0x9cb5;
      uPosition = uPosition + 1;
    } while (uVar1 <= param_2);
    return 0;
  }
  FUN_004ecbb0(param_1,local_214,param_3);
  return iVar3;
}


