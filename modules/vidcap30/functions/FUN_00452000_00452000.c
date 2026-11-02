/* Module: vidcap30.exe
   Function: FUN_00452000
   Address: 00452000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00452000(undefined4 param_1,int param_2,IStream *param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  if ((param_3 != (IStream *)0x0) && (param_3->lpVtbl != (IStreamVtbl *)0x0)) {
    iVar1 = riff64_PrepareList(param_1,DAT_0058bd68,DAT_0058bd6c,DAT_0058bd70,DAT_0058bd74,&local_8)
    ;
    if (-1 < iVar1) {
      iVar1 = riff64_PrepareChunk(param_1,DAT_0058bd78,DAT_0058bd7c,DAT_0058bd80,DAT_0058bd84,
                                  &local_10);
      if (-1 < iVar1) {
        iVar1 = _summarylisttag::Persist(param_3,param_2);
        if (-1 < iVar1) {
          iVar1 = riff64_CompleteChunk(param_1,local_10,local_c);
          if (-1 < iVar1) {
            iVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
          }
        }
      }
    }
  }
  return iVar1;
}


