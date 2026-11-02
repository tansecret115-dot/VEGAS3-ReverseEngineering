/* Module: rmme3260.dll
   Function: FUN_662570e0
   Address: 662570e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_662570e0(undefined4 *param_1)

{
  uint _Retval;
  tagMSG local_20;
  
  PeekMessageA(&local_20,(HWND)0x0,0x400,0x400,0);
  param_1[2] = 1;
  _Retval = (*(code *)*param_1)(param_1[1]);
  _endthreadex(_Retval);
  return _Retval;
}


