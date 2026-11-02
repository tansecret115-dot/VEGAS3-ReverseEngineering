/* Module: vegas30.exe
   Function: FUN_004a53d0
   Address: 004a53d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a53d0(int param_1,uint param_2)

{
  HWND pHVar1;
  int iVar2;
  
  FUN_0045ecf0(param_1,0);
  FUN_00427a70(2,0);
  FUN_00439930();
  if ((*(int *)(DAT_0064762c + 0xa4) != 0) &&
     (pHVar1 = *(HWND *)(*(int *)(DAT_0064762c + 0xa4) + 8), pHVar1 != (HWND)0x0)) {
    SendMessageA(pHVar1,0x705,0,param_1 + 0xb70);
  }
  if ((*(int *)(DAT_0064762c + 0xa0) != 0) &&
     (pHVar1 = *(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8), pHVar1 != (HWND)0x0)) {
    SendMessageA(pHVar1,0x670,0,param_1 + 0xb70);
  }
  if ((param_2 & 0x100) == 0) {
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  if ((-1 < *(int *)(param_1 + 0xb74)) && (iVar2 = Transport_IsAnyPlaying(), iVar2 == 0)) {
    FUN_005fb010(*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74));
  }
  FUN_00472480(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74));
  if (*(int *)(param_1 + 0xadc) == 1) {
    FUN_0052c050(param_1,param_2);
  }
  return;
}


