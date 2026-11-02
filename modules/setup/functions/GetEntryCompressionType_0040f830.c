/* Module: Setup.exe
   Function: GetEntryCompressionType
   Address: 0040f830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressionType(char const *,int &) */

long CArchive2::GetEntryCompressionType(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [3];
  undefined4 local_354;
  
                    /* 0xf830  23  ?GetEntryCompressionType@CArchive2@@QAGJPBDAAH@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_354;
  }
  return iVar1;
}


