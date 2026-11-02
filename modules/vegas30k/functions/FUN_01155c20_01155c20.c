/* Module: vegas30k.dll
   Function: FUN_01155c20
   Address: 01155c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01155c20(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(HDC *)((int)param_1 + 0xe0) != (HDC)0x0) {
      DeleteDC(*(HDC *)((int)param_1 + 0xe0));
    }
    if (*(HGDIOBJ *)((int)param_1 + 0x108) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)param_1 + 0x108));
    }
    if (*(HGDIOBJ *)((int)param_1 + 0x104) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)param_1 + 0x104));
    }
    if (*(int *)((int)param_1 + 0x44) != 0) {
      _SfList_DeleteList_16(*(int *)((int)param_1 + 0x44),0,0xffffffff,0);
      _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x44) = 0;
    }
    FUN_01155cb0(param_1,0);
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


