/* Module: vegas30k.dll
   Function: cdrtrack_SetIndex
   Address: 0109a050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtrack_SetIndex(struct _track *,unsigned int,unsigned long) */

long cdrtrack_SetIndex(_track *param_1,uint param_2,ulong param_3)

{
  _indexlist *p_Var1;
  uint uVar2;
  ulong *puVar3;
  
                    /* 0x9a050  626  ?cdrtrack_SetIndex@@YGJPAU_track@@IK@Z */
  uVar2 = cdrtrack_GetIndexCount(param_1);
  if (uVar2 <= param_2) {
    p_Var1 = (_indexlist *)(param_1 + 0x40);
    *(uint *)p_Var1 = param_2 + 1;
    if (uVar2 == 0) {
      cdrtoc_AllocIndexList(p_Var1);
      puVar3 = cdrtrack_GetIndex(param_1,param_2);
      *puVar3 = param_3;
      return 0;
    }
    cdrtoc_ReAllocIndexList(p_Var1);
  }
  puVar3 = cdrtrack_GetIndex(param_1,param_2);
  *puVar3 = param_3;
  return 0;
}


