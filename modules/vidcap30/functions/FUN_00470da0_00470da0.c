/* Module: vidcap30.exe
   Function: FUN_00470da0
   Address: 00470da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00470da0(int param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  FUN_00471310(0,1);
  FUN_004713b0();
  FUN_00470e70();
  pvVar1 = *(LPCVOID *)(param_1 + 0x138);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x13c);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(void **)(param_1 + 0x154) != (void *)0x0) {
    free(*(void **)(param_1 + 0x154));
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0x370),0);
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  return;
}


