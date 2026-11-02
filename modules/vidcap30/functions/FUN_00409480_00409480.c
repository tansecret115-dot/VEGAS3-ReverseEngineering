/* Module: vidcap30.exe
   Function: FUN_00409480
   Address: 00409480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409480(undefined4 *param_1)

{
  WPARAM WVar1;
  uint uVar2;
  uint uVar3;
  WPARAM *pWVar4;
  int iVar5;
  WPARAM *pWVar6;
  uint *puVar7;
  WPARAM WVar8;
  int local_6c;
  int local_68;
  uint local_64;
  WPARAM local_60 [24];
  
  SendMessageA((HWND)*param_1,0x111,0x456,0);
  local_6c = 0;
  pWVar4 = local_60;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pWVar4 = 0;
    pWVar4 = pWVar4 + 1;
  }
  WVar8 = 0;
  pWVar6 = &DAT_005bbb30;
  pWVar4 = local_60 + 2;
  do {
    WVar1 = *pWVar6;
    if ((WVar1 != 0) && (((byte)pWVar6[1] & 3) != 3)) {
      local_6c = local_6c + 1;
      pWVar4[-2] = pWVar6[2] & 0xffffffdf;
      *pWVar4 = WVar8;
      pWVar4[-1] = WVar1;
      pWVar4 = pWVar4 + 3;
    }
    pWVar6 = pWVar6 + 0x10;
    WVar8 = WVar8 + 1;
  } while (pWVar6 < &DAT_005bbcf0);
  local_64 = 0;
  local_68 = 0x10;
  while( true ) {
    do {
      WVar8 = 0;
      puVar7 = &DAT_005bbb38;
      pWVar4 = local_60 + local_6c * 3 + 2;
      do {
        uVar2 = puVar7[-2];
        if ((((uVar2 != 0) && (((byte)puVar7[-1] & 3) == 3)) &&
            (uVar3 = *puVar7, (uVar3 >> 8 & 0xf) == local_64)) &&
           ((uVar3 >> 0xc & 0xf) == local_68 - 1U)) {
          pWVar4[-2] = uVar3;
          *pWVar4 = WVar8;
          pWVar4[-1] = uVar2;
          local_6c = local_6c + 1;
          pWVar4 = pWVar4 + 3;
        }
        puVar7 = puVar7 + 0x10;
        WVar8 = WVar8 + 1;
      } while (puVar7 < &DAT_005bbcf8);
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_64 = local_64 + 1;
    if (0xf < local_64) break;
    local_68 = 0x10;
  }
  if (local_6c != 0) {
    pWVar4 = local_60 + 1;
    iVar5 = local_6c;
    do {
      SendMessageA((HWND)*param_1,0x111,*pWVar4,0);
      pWVar4 = pWVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_6c != 0) {
    pWVar4 = local_60 + 2;
    do {
      if ((pWVar4[-2] & 0x20) != 0) {
        FUN_0040d730(param_1[0xe],*pWVar4);
      }
      pWVar4 = pWVar4 + 3;
      local_6c = local_6c + -1;
    } while (local_6c != 0);
  }
  return;
}


