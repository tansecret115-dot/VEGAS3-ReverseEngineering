/* Module: vegas30k.dll
   Function: cdr_FormatLBA
   Address: 01099fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_FormatLBA(char *,unsigned long,int) */

int cdr_FormatLBA(char *param_1,ulong param_2,int param_3)

{
  int iVar1;
  
                    /* 0x99fa0  594  ?cdr_FormatLBA@@YGHPADKH@Z */
  if (param_3 != 0) {
    iVar1 = cdr_FormatLBAEx(param_1,param_2,0,1);
    return iVar1;
  }
  iVar1 = cdr_FormatLBAEx(param_1,param_2,0,0);
  return iVar1;
}


