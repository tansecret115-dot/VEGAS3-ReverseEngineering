/* Module: vegas30.exe
   Function: FUN_005516f0
   Address: 005516f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005516f0(LPVOID param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  tagRECT local_10;
  
  *(LPVOID *)(DAT_0064762c + 0x7c) = param_1;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined1 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0x191;
  hMem = GlobalAlloc(0x42,0x644);
  puVar1 = GlobalLock(hMem);
  *(undefined4 **)((int)param_1 + 0xb0) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    for (uVar2 = *(uint *)((int)param_1 + 0xac) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(undefined1 *)((int)param_1 + 0xa4) = 1;
    GetClientRect(*(HWND *)((int)param_1 + 8),&local_10);
    CreateWindowExA(0x10000,"Vegas.MediaPoolParent",(LPCSTR)0x0,0x52000000,0,0,
                    local_10.right - local_10.left,local_10.bottom - local_10.top,
                    *(HWND *)((int)param_1 + 8),(HMENU)0x0,DAT_006471fc,param_1);
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  return 1;
}


