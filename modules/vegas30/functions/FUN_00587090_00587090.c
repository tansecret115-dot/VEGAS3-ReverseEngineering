/* Module: vegas30.exe
   Function: FUN_00587090
   Address: 00587090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00587090(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 == (undefined4 *)0x0) && (param_3 == 0)) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    wcsncpy((wchar_t *)(param_1 + 8),L"",0x40);
    *(undefined2 *)(param_1 + 0x86) = 0;
    wcsncpy((wchar_t *)(param_1 + 0x88),L"",0x40);
    *(undefined2 *)(param_1 + 0x106) = 0;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
    return 0;
  }
  if (param_3 != 0x104) {
    return 0x80004005;
  }
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  return 0;
}


