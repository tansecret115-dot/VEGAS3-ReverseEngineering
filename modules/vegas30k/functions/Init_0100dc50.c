/* Module: vegas30k.dll
   Function: Init
   Address: 0100dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CSfXSpline::Init(long (__stdcall*)(void *,long),long (__stdcall*)(void
   *,long,long,struct tSFXSPLINEPOINT *),double (__stdcall*)(void *,long,long,double),void *,long)
    */

long __thiscall
CSfXSpline::Init(CSfXSpline *this,_func_long_void_ptr_long *param_1,
                _func_long_void_ptr_long_long_tSFXSPLINEPOINT_ptr *param_2,
                _func_double_void_ptr_long_long_double *param_3,void *param_4,long param_5)

{
                    /* 0xdc50  118
                       ?Init@CSfXSpline@@QAEJP6GJPAXJ@ZP6GJ0JJPAUtSFXSPLINEPOINT@@@ZP6GN0JJN@Z0J@Z
                        */
  *(_func_double_void_ptr_long_long_double **)(this + 8) = param_3;
  *(void **)(this + 0xc) = param_4;
  *(long *)(this + 0x10) = param_5;
  *(_func_long_void_ptr_long **)this = param_1;
  *(_func_long_void_ptr_long_long_tSFXSPLINEPOINT_ptr **)(this + 4) = param_2;
  if ((param_1 != (_func_long_void_ptr_long *)0x0) &&
     (param_2 != (_func_long_void_ptr_long_long_tSFXSPLINEPOINT_ptr *)0x0)) {
    *(undefined4 *)(this + 0x14) = 1;
    return 0;
  }
  return -0x7ff8ffa9;
}


