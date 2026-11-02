/* Module: vidcap30.exe
   Function: _SfAudio_GetTagText@12
   Address: 004b8190
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfAudio_GetTagText_12(uint param_1,LPSTR param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  uint local_48 [3];
  CHAR aCStack_3c [56];
  LPSTR pCStack_4;
  
                    /* 0xb8190  236  _SfAudio_GetTagText@12 */
  if (param_1 < 4) {
    if ((param_1 != 3) && (param_1 != 1)) {
LAB_004b81c5:
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
        pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x103d);
        lstrcpynA(pCStack_4,pCVar1,unaff_retaddr);
        pCStack_4[unaff_retaddr + -1] = '\0';
      }
      return uVar4;
    }
  }
  else if ((param_1 < 0xfe00) || (0xfe02 < param_1)) goto LAB_004b81c5;
  if (param_1 < 0xfe01) {
    if (param_1 == 0xfe00) {
      uVar5 = 0x1039;
      goto LAB_004b82b1;
    }
    if (param_1 == 1) {
      uVar5 = 0x1037;
      goto LAB_004b82b1;
    }
    if (param_1 == 3) {
      uVar5 = 0x1038;
      goto LAB_004b82b1;
    }
  }
  else {
    if (param_1 == 0xfe01) {
      uVar5 = 0x103a;
      goto LAB_004b82b1;
    }
    if (param_1 == 0xfe02) {
      uVar5 = 0x103b;
      goto LAB_004b82b1;
    }
  }
  uVar5 = 0x103c;
LAB_004b82b1:
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,uVar5);
  if (param_2 != (LPSTR)0x0) {
    lstrcpynA(param_2,pCVar1,param_3);
    param_2[param_3 + -1] = '\0';
  }
  return 0;
}


