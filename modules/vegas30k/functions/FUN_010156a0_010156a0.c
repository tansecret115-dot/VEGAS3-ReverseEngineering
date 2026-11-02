/* Module: vegas30k.dll
   Function: FUN_010156a0
   Address: 010156a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010156f5) */

void FUN_010156a0(undefined4 param_1,int *param_2,int *param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_20c = 0;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    local_20c = 4;
    for (iVar3 = 0; iVar3 < *param_2; iVar3 = iVar3 + 1) {
      local_20c = local_20c + 8;
      pCVar1 = *(LPCSTR *)(param_2[2] + iVar3 * 4);
      if (pCVar1 != (LPCSTR)0x0) {
        iVar2 = lstrlenA(pCVar1);
        local_20c = local_20c + iVar2 * 2;
      }
    }
    iVar3 = riff_WriteListHeader(param_1,0x74736c66,local_20c);
    if (-1 < iVar3) {
      for (iVar3 = 0; iVar3 < *param_2; iVar3 = iVar3 + 1) {
        pCVar1 = *(LPCSTR *)(param_2[2] + iVar3 * 4);
        MultiByteToWideChar(0,1,pCVar1,-1,local_208,0x104);
        uVar4 = 0;
        local_2 = 0;
        iVar2 = lstrlenA(pCVar1);
        iVar2 = riff_WriteChunk(param_1,0x656c6966,local_208,iVar2 << 1,uVar4);
        if (iVar2 < 0) break;
      }
      local_20c = local_20c + 8;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_20c;
  }
  return;
}


