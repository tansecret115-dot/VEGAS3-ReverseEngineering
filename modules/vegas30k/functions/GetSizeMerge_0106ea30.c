/* Module: vegas30k.dll
   Function: GetSizeMerge
   Address: 0106ea30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeMerge(__int64 &) */

long CArchive2::GetSizeMerge(__int64 *param_1)

{
  __int64 _Var1;
  __int64 *in_stack_00000008;
  
                    /* 0x6ea30  103  ?GetSizeMerge@CArchive2@@QAGJAA_J@Z */
  _Var1 = GetArchiveSize();
  *in_stack_00000008 = _Var1;
  return 0;
}


