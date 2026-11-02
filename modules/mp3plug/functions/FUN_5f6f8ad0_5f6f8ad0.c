/* Module: mp3plug.dll
   Function: FUN_5f6f8ad0
   Address: 5f6f8ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6f8ad0(size_t *param_1,int param_2)

{
  void *pvVar1;
  size_t _Count;
  
  _Count = (int)(((uint)(param_2 + 0xf >> 3) >> 0x1c) + 0xf + param_2) >> 4;
  *param_1 = _Count;
  pvVar1 = calloc(_Count,2);
  param_1[1] = (size_t)pvVar1;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = 0x10;
  param_1[6] = 0xffffffff;
  return;
}


