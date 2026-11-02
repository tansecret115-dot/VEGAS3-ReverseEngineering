/* Module: vegas30k.dll
   Function: DtGetFileCountAndSize
   Address: 01018890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtGetFileCountAndSize(struct tagDIR_TREE *,char *,unsigned long *,unsigned long
   *,unsigned __int64 *) */

long DtGetFileCountAndSize
               (tagDIR_TREE *param_1,char *param_2,ulong *param_3,ulong *param_4,__uint64 *param_5)

{
  tagDIR_TREE *ptVar1;
  long lVar2;
  
                    /* 0x18890  50  ?DtGetFileCountAndSize@@YGJPAUtagDIR_TREE@@PADPAK2PA_K@Z */
  ptVar1 = param_1;
  FUN_01016830(param_1,0);
  lVar2 = DtGetDirEntry(ptVar1,param_2,0,(tagDIR_ENTRY **)&param_1);
  if (-1 < lVar2) {
    lVar2 = FUN_010187f0(param_1,param_3,param_4,param_5);
  }
  return lVar2;
}


