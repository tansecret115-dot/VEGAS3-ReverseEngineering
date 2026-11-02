/* Module: vegas30.exe
   Function: FUN_005f9a20
   Address: 005f9a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005f9a20(int param_1,LPCSTR param_2,undefined4 param_3)

{
  lstrcpynA((LPSTR)(param_1 + 0x24),param_2,0x104);
  *(undefined1 *)(param_1 + 0x127) = 0;
  _SfList_CreateExZ_32((undefined4 *)(param_1 + 0x14),0xc,param_3,0xffffffff,0xc0000004,0,0,0);
  _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_1 + 0x14),param_3,0);
  return;
}


