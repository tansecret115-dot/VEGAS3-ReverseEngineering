/* Module: sfnetmedia.dll
   Function: FUN_0040f420
   Address: 0040f420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f420(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xda4) != 0)) && (*(int *)(iVar1 + 0xdac) != 0)) {
    *(undefined1 *)(iVar1 + 0xa2b) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdb4) = 0x80004004;
  }
  SendMessageA(*(HWND *)(param_1 + 4),0x10,0,0);
  return 0;
}


