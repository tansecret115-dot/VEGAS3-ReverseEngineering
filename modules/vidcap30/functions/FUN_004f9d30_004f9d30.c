/* Module: vidcap30.exe
   Function: FUN_004f9d30
   Address: 004f9d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f9d30(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  CHAR CVar1;
  LPCSTR lpsz;
  int iVar2;
  uint uVar3;
  LPCSTR pCVar4;
  undefined1 **ppuVar5;
  CHAR *pCVar6;
  undefined1 *local_128 [4];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  CHAR *local_108;
  undefined1 local_104 [260];
  
  pCVar4 = (LPCSTR)(param_4 + 0x14);
  ppuVar5 = local_128;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar5 = (undefined1 *)0x0;
    ppuVar5 = ppuVar5 + 1;
  }
  local_128[0] = (undefined1 *)0x10000037;
  CVar1 = *pCVar4;
  lpsz = pCVar4;
  while ((CVar1 != '\0' && (CVar1 != '\t'))) {
    lpsz = CharNextA(lpsz);
    CVar1 = *lpsz;
  }
  local_108 = calloc(1,(size_t)(lpsz + (-0x13 - param_4)));
  if (local_108 != (CHAR *)0x0) {
    pCVar6 = local_108;
    for (uVar3 = (uint)(lpsz + (-0x14 - param_4)) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
      pCVar4 = pCVar4 + 4;
      pCVar6 = pCVar6 + 4;
    }
    for (uVar3 = (uint)(lpsz + (-0x14 - param_4)) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar6 = *pCVar4;
      pCVar4 = pCVar4 + 1;
      pCVar6 = pCVar6 + 1;
    }
    FUN_00497a90(param_4,local_104);
    local_128[2] = local_104;
    local_128[1] = (undefined1 *)param_2;
    local_118 = *(undefined4 *)(param_4 + 4);
    local_10c = param_3;
    local_114 = *(undefined4 *)(param_4 + 8);
    SendMessageA(param_1,0x401,0,(LPARAM)local_128);
  }
  return;
}


