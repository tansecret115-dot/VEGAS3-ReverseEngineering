/* Module: vidcap30.exe
   Function: GetSizeMerge
   Address: 005352a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeMerge(__int64 &) */

long CArchive2::GetSizeMerge(__int64 *param_1)

{
  __int64 _Var1;
  __int64 *in_stack_00000008;
  
                    /* 0x1352a0  43  ?GetSizeMerge@CArchive2@@QAGJAA_J@Z */
  _Var1 = GetArchiveSize();
  *in_stack_00000008 = _Var1;
  return 0;
}


