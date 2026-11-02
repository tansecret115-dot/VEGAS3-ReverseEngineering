/* Module: vegas30.exe
   Function: FUN_0055f733
   Address: 0055f733
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0055f733(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  LPCSTR pCStack00000014;
  int iStack00000018;
  HWND in_stack_0000002c;
  LPCSTR in_stack_00000034;
  
  puVar2 = (undefined4 *)register0x00000010;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  pCStack00000014 = in_stack_00000034;
  iStack00000018 = 0x104;
  uStack00000008 = 1;
  uStack00000004 = param_2;
  SendMessageA(in_stack_0000002c,0x1005,0,(LPARAM)&stack0x00000000);
  _SfAddSlashToPathName_8(in_stack_00000034,0x104);
  iStack00000018 = lstrlenA(in_stack_00000034);
  pCStack00000014 = pCStack00000014 + iStack00000018;
  iStack00000018 = 0x104 - iStack00000018;
  uStack00000008 = 0;
  SendMessageA(in_stack_0000002c,0x1005,0,(LPARAM)&stack0x00000000);
  return 1;
}


