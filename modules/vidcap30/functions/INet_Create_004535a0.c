/* Module: vidcap30.exe
   Function: INet_Create
   Address: 004535a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall INet_Create(struct inetsession_tag *,char *) */

long INet_Create(inetsession_tag *param_1,char *param_2)

{
  int iVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  
                    /* 0x535a0  47  ?INet_Create@@YGJPAUinetsession_tag@@PAD@Z */
  iVar1 = InternetAttemptConnect(0);
  if (iVar1 != 0) {
    return -0x7ffb1f14;
  }
  puVar2 = unaff_retaddr;
  for (iVar1 = 0x85; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = puVar2 + 4;
  }
  _mbscpy(unaff_retaddr,(uchar *)param_1);
  iVar1 = InternetOpenA(unaff_retaddr,0,0,0,0);
  *(int *)(unaff_retaddr + 0x104) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f14) + 0x8004e0ec;
}


