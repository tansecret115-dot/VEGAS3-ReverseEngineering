/* Module: vegas30k.dll
   Function: DtGetLastErrorString
   Address: 010167e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall DtGetLastErrorString(struct tagDIR_TREE *,char *,unsigned int) */

void DtGetLastErrorString(tagDIR_TREE *param_1,char *param_2,uint param_3)

{
                    /* 0x167e0  51  ?DtGetLastErrorString@@YGXPAUtagDIR_TREE@@PADI@Z */
  if (param_1 != (tagDIR_TREE *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x254));
    if (0x1ff < param_3) {
      param_3 = 0x200;
    }
    lstrcpynA(param_2,(LPCSTR)(param_1 + 0x54),param_3);
    param_2[param_3 - 1] = '\0';
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x254));
  }
  return;
}


