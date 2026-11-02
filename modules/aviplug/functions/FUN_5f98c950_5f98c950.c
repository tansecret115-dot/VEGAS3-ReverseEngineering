/* Module: aviplug.dll
   Function: FUN_5f98c950
   Address: 5f98c950
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f98c950(uint param_1,LPSTR param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_retaddr;
  uint local_48 [3];
  CHAR aCStack_3c [56];
  LPSTR pCStack_4;
  
  if (param_1 < 4) {
    if ((param_1 != 3) && (param_1 != 1)) {
LAB_5f98c985:
      puVar3 = local_48;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_48[0] = 0x48;
      local_48[2] = param_1;
      iVar2 = acmFormatTagDetailsA(0,local_48,1);
      if ((iVar2 == 0) && (pCStack_4 != (LPSTR)0x0)) {
        lstrcpynA(pCStack_4,aCStack_3c,unaff_retaddr);
        pCStack_4[unaff_retaddr + -1] = '\0';
      }
      uVar4 = -(uint)(iVar2 != 0) & 0x80004005;
      if ((uVar4 != 0) && (pCStack_4 != (LPSTR)0x0)) {
        pCVar1 = FUN_5f981f60(DAT_5f9f5978,0x103d);
        lstrcpynA(pCStack_4,pCVar1,unaff_retaddr);
        pCStack_4[unaff_retaddr + -1] = '\0';
      }
      return uVar4;
    }
  }
  else if ((param_1 < 0xfe00) || (0xfe02 < param_1)) goto LAB_5f98c985;
  if (param_1 < 0xfe01) {
    if (param_1 == 0xfe00) {
      uVar4 = 0x1039;
      goto LAB_5f98ca71;
    }
    if (param_1 == 1) {
      uVar4 = 0x1037;
      goto LAB_5f98ca71;
    }
    if (param_1 == 3) {
      uVar4 = 0x1038;
      goto LAB_5f98ca71;
    }
  }
  else {
    if (param_1 == 0xfe01) {
      uVar4 = 0x103a;
      goto LAB_5f98ca71;
    }
    if (param_1 == 0xfe02) {
      uVar4 = 0x103b;
      goto LAB_5f98ca71;
    }
  }
  uVar4 = 0x103c;
LAB_5f98ca71:
  pCVar1 = FUN_5f981f60(DAT_5f9f5978,uVar4);
  if (param_2 != (LPSTR)0x0) {
    lstrcpynA(param_2,pCVar1,param_3);
    param_2[param_3 + -1] = '\0';
  }
  return 0;
}


