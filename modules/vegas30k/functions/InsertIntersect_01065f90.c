/* Module: vegas30k.dll
   Function: InsertIntersect
   Address: 01065f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::InsertIntersect(class CScanlineIntersect *,int,void
   (__stdcall*)(struct tACTIVEREGIONLIST *,struct tSFPIXEL32 *,struct tA_BUFFER_PARAM *),long,long)
    */

void __thiscall
A_Buffer::InsertIntersect
          (A_Buffer *this,CScanlineIntersect *param_1,int param_2,
          _func_void_tACTIVEREGIONLIST_ptr_tSFPIXEL32_ptr_tA_BUFFER_PARAM_ptr *param_3,long param_4,
          long param_5)

{
  int iVar1;
  int iVar2;
  A_Buffer *pAVar3;
  
                    /* 0x65f90  119
                       ?InsertIntersect@A_Buffer@@AAEXPAVCScanlineIntersect@@HP6GXPAUtACTIVEREGIONLIST@@PAUtSFPIXEL32@@PAUtA_BUFFER_PARAM@@@ZJJ@Z
                        */
  iVar2 = ClipIntersect(this,param_1);
  if (iVar2 != 0) {
    *(_func_void_tACTIVEREGIONLIST_ptr_tSFPIXEL32_ptr_tA_BUFFER_PARAM_ptr **)(param_1 + 0x60) =
         param_3;
    *(long *)(param_1 + 0x68) = param_5;
    pAVar3 = this + param_2 * 4;
    *(long *)(param_1 + 100) = param_4;
    if (*(int *)pAVar3 == 0) {
      *(CScanlineIntersect **)pAVar3 = param_1;
      return;
    }
    iVar2 = *(int *)pAVar3;
    while (*(int *)(iVar2 + 0x50) < *(int *)(param_1 + 0x50)) {
      iVar1 = *(int *)(iVar2 + 0x58);
      pAVar3 = (A_Buffer *)(iVar2 + 0x58);
      if (iVar1 == 0) {
        *(CScanlineIntersect **)(iVar2 + 0x58) = param_1;
        return;
      }
      iVar2 = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *(CScanlineIntersect **)pAVar3 = param_1;
    *(int *)(param_1 + 0x58) = iVar2;
  }
  return;
}


