/* Module: vidcap30.exe
   Function: GetEntryCompressionType
   Address: 00535a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressionType(int,int &) */

long CArchive2::GetEntryCompressionType(int param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [12];
  undefined4 local_354;
  
                    /* 0x135a10  26  ?GetEntryCompressionType@CArchive2@@QAGJHAAH@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_00537610(param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_354;
    return lVar1;
  }
  return 0;
}


