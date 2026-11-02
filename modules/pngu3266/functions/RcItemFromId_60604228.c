/* Module: pngu3266.dll
   Function: RcItemFromId
   Address: 60604228
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNCheckedListbox::RcItemFromId(unsigned int,class CPNxRect &) */

int __thiscall
CPNCheckedListbox::RcItemFromId(CPNCheckedListbox *this,uint param_1,CPNxRect *param_2)

{
  LRESULT LVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x14228  1732  ?RcItemFromId@CPNCheckedListbox@@IAEHIAAVCPNxRect@@@Z */
  LVar1 = SendMessageA(*(HWND *)(this + 0xc),0x198,param_1,(LPARAM)&local_14);
  *(undefined4 *)param_2 = local_14;
  *(undefined4 *)(param_2 + 4) = local_10;
  *(undefined4 *)(param_2 + 8) = local_c;
  *(undefined4 *)(param_2 + 0xc) = local_8;
  return (uint)(LVar1 != -1);
}


