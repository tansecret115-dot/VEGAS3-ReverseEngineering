/* Module: vegas30k.dll
   Function: FUN_011aec80
   Address: 011aec80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011aec80(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x83c) == (LPCVOID)0x0) {
    return 0x8000ffff;
  }
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x83c));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x83c));
  GlobalFree(pvVar1);
  *(undefined4 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x83c) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x844) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
  return 0;
}


