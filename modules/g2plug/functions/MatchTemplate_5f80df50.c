/* Module: g2plug.dll
   Function: MatchTemplate
   Address: 5f80df50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CG2EncodeWizard::MatchTemplate(struct tSFLIST *,int *) */

long __thiscall CG2EncodeWizard::MatchTemplate(CG2EncodeWizard *this,tSFLIST *param_1,int *param_2)

{
  int iVar1;
  _GUID *p_Var2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int local_678;
  SFG2_PARAMS local_674 [296];
  int local_54c;
  int local_548;
  uint local_53c;
  int local_538;
  int local_534;
  int local_530;
  int local_52c;
  int local_528;
  int local_524;
  int local_520;
  int local_51c;
  int local_518;
  int local_295;
  int local_291;
  int local_28d;
  int local_289;
  
                    /* 0xdf50  15  ?MatchTemplate@CG2EncodeWizard@@UAEJPAUtSFLIST@@PAH@Z */
  local_678 = -1;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffb;
  }
  *param_2 = -1;
  iVar1 = *(int *)param_1;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      p_Var2 = *(_GUID **)(*(int *)(param_1 + 8) + iVar6 * 4);
      if (((((((((p_Var2 != (_GUID *)0x0) &&
                (lVar5 = G2LoadRegistryTemplate(p_Var2,local_674,(SFG2TEMPLATE_DESCRIPTION *)0x0),
                -1 < lVar5)) && (*(int *)(this + 0x140) == local_538)) &&
              ((iVar3 = *(int *)(this + 0x150), iVar3 == local_528 &&
               (*(int *)(this + 0x158) == local_520)))) &&
             ((*(int *)(this + 0x15c) == local_51c &&
              ((*(int *)(this + 0x160) == local_518 && (*(int *)(this + 300) == local_54c)))))) &&
            ((*(int *)(this + 300) == 0 ||
             ((*(int *)(this + 0x144) == local_534 && (*(int *)(this + 0x148) == local_530)))))) &&
           (*(int *)(this + 0x130) == local_548)) &&
          ((*(int *)(this + 0x130) == 0 ||
           (((*(int *)(this + 0x14c) == local_52c && (*(int *)(this + 0x3e3) == local_295)) &&
            ((*(int *)(this + 0x3e3) == 0 ||
             ((*(int *)(this + 999) == local_291 &&
              ((*(int *)(this + 999) != 7 ||
               ((*(int *)(this + 0x3ef) == local_289 && (*(int *)(this + 0x3eb) == local_28d))))))))
            )))))) && ((iVar3 != 1 || (*(int *)(this + 0x154) == local_524)))) {
        uVar4 = *(uint *)(this + 0x13c);
        if (uVar4 == local_53c) {
          *param_2 = iVar6;
          break;
        }
        if ((iVar3 == 1) && ((uVar4 & local_53c) == uVar4)) {
          local_678 = iVar6;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  if (*param_2 == -1) {
    *param_2 = local_678;
  }
  return 0;
}


