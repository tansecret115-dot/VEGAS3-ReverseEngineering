/* Module: vegas30k.dll
   Function: GetVolumeComment
   Address: 0106ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetVolumeComment(char *,unsigned int) */

long CArchive2::GetVolumeComment(char *param_1,uint param_2)

{
  uint in_stack_0000000c;
  
                    /* 0x6ef30  106  ?GetVolumeComment@CArchive2@@QAGJPADI@Z */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_01070600(0xaaaaaab0,"GetVolumeComment",0);
    return -0x7fffbffb;
  }
  if (*(int *)(param_1 + 0x30) == 0xc054d55) {
    if ((param_2 != 0) && (*(uint *)(param_1 + 0x5c) <= in_stack_0000000c)) {
      _mbscpy((uchar *)param_2,(uchar *)(param_1 + 0x68));
      return 0;
    }
    FUN_01070600(0xaaaaaaa7,"GetVolumeComment",0);
    return -0x7ffb1fc4;
  }
  FUN_01070600(0xaaaaaaa5,"GetVolumeComment",0);
  return -0x7ffb1f50;
}


