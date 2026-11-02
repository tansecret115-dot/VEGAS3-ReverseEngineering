/* Module: sfcdi.dll
   Function: cdr_FormatInquiryStrings
   Address: 5bf054f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_FormatInquiryStrings(struct _INQUIRYDATA *,struct _cdinqstrings *) */

long cdr_FormatInquiryStrings(_INQUIRYDATA *param_1,_cdinqstrings *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [20];
  
  puVar2 = local_50;
                    /* 0x54f0  171
                       ?cdr_FormatInquiryStrings@@YGJPAU_INQUIRYDATA@@PAU_cdinqstrings@@@Z */
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50[0] = *(undefined4 *)(param_1 + 8);
  local_50[1] = *(undefined4 *)(param_1 + 0xc);
  lstrcpynA((LPSTR)param_2,(LPCSTR)local_50,10);
  param_2[9] = (_cdinqstrings)0x0;
  puVar2 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50[0] = *(undefined4 *)(param_1 + 0x10);
  local_50[1] = *(undefined4 *)(param_1 + 0x14);
  local_50[2] = *(undefined4 *)(param_1 + 0x18);
  local_50[3] = *(undefined4 *)(param_1 + 0x1c);
  lstrcpynA((LPSTR)(param_2 + 10),(LPCSTR)local_50,0x12);
  param_2[0x1b] = (_cdinqstrings)0x0;
  puVar2 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50[0] = *(undefined4 *)(param_1 + 0x20);
  lstrcpynA((LPSTR)(param_2 + 0x1c),(LPCSTR)local_50,6);
  param_2[0x21] = (_cdinqstrings)0x0;
  return 0;
}


