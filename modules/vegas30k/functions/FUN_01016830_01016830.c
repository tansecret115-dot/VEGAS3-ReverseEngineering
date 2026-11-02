/* Module: vegas30k.dll
   Function: FUN_01016830
   Address: 01016830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01016830(int param_1,LPCSTR param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x254);
    EnterCriticalSection(lpCriticalSection);
    if (param_2 == (LPCSTR)0x0) {
      puVar2 = (undefined4 *)(param_1 + 0x54);
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    lstrcpynA((LPSTR)(param_1 + 0x54),param_2,0x200);
    *(undefined1 *)(param_1 + 0x253) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}


