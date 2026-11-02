/* Module: vegas30.exe
   Function: FUN_0058a740
   Address: 0058a740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058a740(int param_1)

{
  BOOL BVar1;
  HGLOBAL pvVar2;
  
  if (*(LPVOID *)(param_1 + 300) != (LPVOID)0x0) {
    BVar1 = VirtualFree(*(LPVOID *)(param_1 + 300),0,0x8000);
    if (BVar1 == 0) {
      return 0x8004e018;
    }
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x130) != (LPVOID)0x0) {
    BVar1 = VirtualFree(*(LPVOID *)(param_1 + 0x130),0,0x8000);
    if (BVar1 == 0) {
      return 0x8004e018;
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x134) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x134));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x134));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return 0;
}


