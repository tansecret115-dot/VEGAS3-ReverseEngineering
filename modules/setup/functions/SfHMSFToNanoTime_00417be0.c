/* Module: Setup.exe
   Function: SfHMSFToNanoTime
   Address: 00417be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SfHMSFToNanoTime(struct _smpteval *,double) */

__int64 SfHMSFToNanoTime(_smpteval *param_1,double param_2)

{
  __int64 _Var1;
  
                    /* 0x17be0  56  ?SfHMSFToNanoTime@@YG_JPAU_smpteval@@N@Z */
  if ((*(uint *)param_1 != 0) && (*(uint *)param_1 < 6)) {
    _Var1 = _SFSMPTE_SMPTEToNanos_4((undefined4 *)param_1);
    return _Var1;
  }
  _Var1 = ftol();
  return _Var1;
}


