/* Module: vegas30.exe
   Function: FUN_005625c0
   Address: 005625c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005625c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  HCURSOR pHVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  if (*param_1 == 0) {
    DAT_0064767c = DAT_0064767c | 0x400;
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  pHVar3 = (HCURSOR)_SfGetUICursor_4(0x7f02);
  pHVar3 = SetCursor(pHVar3);
  iVar1 = *(int *)*param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar4 = *(int *)(*param_1 + 8);
    iVar5 = *(int *)(*param_1 + 4) * iVar1;
    uVar2 = *(uint *)(iVar5 + iVar4);
    puVar6 = (uint *)(iVar5 + iVar4);
    if ((uVar2 & 1) == 0) {
      *puVar6 = uVar2 | 0x200;
    }
    else {
      FUN_00562280(puVar6);
      iVar4 = (**(code **)(*(int *)puVar6[0x46] + 0x18))((int *)puVar6[0x46]);
      puVar6[0x5b] = 0;
      *puVar6 = (uint)(iVar4 == 0) << 9 | *puVar6 & 0xfffffdff;
      puVar6[0x5d] = puVar6[0x5d] + 1;
    }
  }
  SetCursor(pHVar3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  DAT_0064767c = DAT_0064767c | 0x400;
  return 1;
}


