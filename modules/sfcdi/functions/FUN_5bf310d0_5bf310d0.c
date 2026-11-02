/* Module: sfcdi.dll
   Function: FUN_5bf310d0
   Address: 5bf310d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf310d0(uchar *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  
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
  _mbscpy(unaff_retaddr,param_1);
  iVar1 = InternetOpenA(unaff_retaddr,0,0,0,0);
  *(int *)(unaff_retaddr + 0x104) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f14) + 0x8004e0ec;
}


