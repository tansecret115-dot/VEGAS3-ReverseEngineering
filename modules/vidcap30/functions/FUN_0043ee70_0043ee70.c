/* Module: vidcap30.exe
   Function: FUN_0043ee70
   Address: 0043ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043ee70(int param_1)

{
  if (param_1 != 0) {
    FUN_00460850(*(undefined4 *)(param_1 + 0xd4),2,0,0);
    FUN_0042b300(param_1 + 0xd8,0);
    FUN_004258d0(param_1 + 0xd8);
    FUN_00426360(param_1 + 0xa48);
    FUN_004258d0(param_1 + 0xa48);
    if (*(HGDIOBJ *)(param_1 + 0x13b8) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x13b8));
    }
  }
  return;
}


