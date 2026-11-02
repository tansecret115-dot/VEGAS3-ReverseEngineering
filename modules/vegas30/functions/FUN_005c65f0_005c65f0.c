/* Module: vegas30.exe
   Function: FUN_005c65f0
   Address: 005c65f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c65f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,LPCSTR param_6)

{
  lstrcpynA((LPSTR)(param_1 + 0x584),param_6,0x104);
  *(undefined1 *)(param_1 + 0x687) = 0;
  *(undefined4 *)(param_1 + 0x688) = param_2;
  *(undefined4 *)(param_1 + 0x690) = param_4;
  *(undefined4 *)(param_1 + 0x68c) = param_3;
  *(undefined4 *)(param_1 + 0x694) = param_5;
  FUN_005b8630(param_1);
  FUN_005b4c00(param_1 + 0x698);
  return;
}


