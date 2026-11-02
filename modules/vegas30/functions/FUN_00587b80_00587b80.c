/* Module: vegas30.exe
   Function: FUN_00587b80
   Address: 00587b80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00587b80(wchar_t *param_1)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  sVar1 = wcslen(param_1);
  iVar2 = sVar1 << 1;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_006292a0 + (uVar3 & 0xff ^ (uint)(byte)*param_1) * 4);
    param_1 = (wchar_t *)((int)param_1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar3;
}


