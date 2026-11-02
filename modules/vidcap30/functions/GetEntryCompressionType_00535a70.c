/* Module: vidcap30.exe
   Function: GetEntryCompressionType
   Address: 00535a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressionType(char const *,int &) */

long CArchive2::GetEntryCompressionType(char *param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [12];
  undefined4 local_354;
  
                    /* 0x135a70  27  ?GetEntryCompressionType@CArchive2@@QAGJPBDAAH@Z */
  lVar1 = FUN_00537680(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_354;
  }
  return lVar1;
}


