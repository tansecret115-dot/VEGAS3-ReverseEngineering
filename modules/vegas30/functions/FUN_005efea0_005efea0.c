/* Module: vegas30.exe
   Function: FUN_005efea0
   Address: 005efea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005efea0(int param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  FUN_005f1080(0,1);
  FUN_005f1120();
  FUN_005eff70();
  pvVar1 = *(LPCVOID *)(param_1 + 0x150);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x154);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (*(void **)(param_1 + 0x16c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  return;
}


