/* Module: vegas30k.dll
   Function: FUN_0113a250
   Address: 0113a250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a250(HWND param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  undefined4 *_Memory;
  
  LVar2 = GetWindowLongA(param_1,8);
  uVar1 = *(undefined4 *)(LVar2 + 4);
  _Memory = calloc(1,0xc);
  *_Memory = 0;
  _Memory[1] = uVar1;
  _SfDialogBoxParam_20(DAT_0120e5c8,0xa9,param_1,&LAB_01165b50,_Memory);
  free(_Memory);
  return;
}


