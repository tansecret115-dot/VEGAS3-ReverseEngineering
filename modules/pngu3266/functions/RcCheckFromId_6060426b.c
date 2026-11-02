/* Module: pngu3266.dll
   Function: RcCheckFromId
   Address: 6060426b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNCheckedListbox::RcCheckFromId(unsigned int,class CPNxRect &) */

int __thiscall
CPNCheckedListbox::RcCheckFromId(CPNCheckedListbox *this,uint param_1,CPNxRect *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_8;
  
                    /* 0x1426b  1731  ?RcCheckFromId@CPNCheckedListbox@@IAEHIAAVCPNxRect@@@Z */
  iVar3 = RcItemFromId(this,param_1,(CPNxRect *)&local_14);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(this + 200);
    iVar5 = (local_8 - local_10) - iVar3;
    sVar2 = (short)(iVar5 / 2);
    if (sVar2 * 2 < iVar5) {
      sVar2 = sVar2 + 1;
    }
    iVar1 = *(int *)(this + 0xc4);
    iVar4 = (int)sVar2;
    iVar5 = 1;
    *(int *)param_2 = local_14 + iVar4;
    *(int *)(param_2 + 4) = local_10 + iVar4;
    *(int *)(param_2 + 8) = iVar1 + local_14 + iVar4;
    *(int *)(param_2 + 0xc) = local_10 + iVar4 + iVar3;
  }
  return iVar5;
}


