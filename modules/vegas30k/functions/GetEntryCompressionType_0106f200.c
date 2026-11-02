/* Module: vegas30k.dll
   Function: GetEntryCompressionType
   Address: 0106f200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressionType(char const *,int &) */

long CArchive2::GetEntryCompressionType(char *param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [12];
  undefined4 local_354;
  
                    /* 0x6f200  86  ?GetEntryCompressionType@CArchive2@@QAGJPBDAAH@Z */
  lVar1 = FUN_01070e10(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_354;
  }
  return lVar1;
}


