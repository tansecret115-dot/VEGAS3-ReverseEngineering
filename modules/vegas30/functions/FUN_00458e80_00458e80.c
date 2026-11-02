/* Module: vegas30.exe
   Function: FUN_00458e80
   Address: 00458e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458e80(int param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  HWND pHVar4;
  
  if ((param_2 < 4) && (*(int *)(param_1 + 0xae0 + param_2 * 4) != 0)) {
    if (param_2 != *(uint *)(param_1 + 0xadc)) {
      piVar1 = (int *)(param_1 + 0xab8);
      pcVar2 = *(code **)(*(int *)(param_1 + 0xab8) + 0x18);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,piVar1,1,param_2);
      }
      *(uint *)(param_1 + 0xadc) = param_2;
      iVar3 = *(int *)(param_1 + 0xae0 + param_2 * 4);
      *piVar1 = iVar3;
      pcVar2 = *(code **)(iVar3 + 0x18);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,piVar1,2,param_2);
      }
      pHVar4 = GetCapture();
      if (pHVar4 == (HWND)0x0) {
        FUN_00456c20(param_1);
        FUN_00458f10(param_1);
        FUN_004565c0(param_1,*(undefined4 *)(param_1 + 4),1,0);
      }
    }
    *(undefined4 *)(param_1 + 0xaf0) = 0xffffffff;
  }
  return;
}


