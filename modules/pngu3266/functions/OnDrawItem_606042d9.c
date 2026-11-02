/* Module: pngu3266.dll
   Function: OnDrawItem
   Address: 606042d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNCheckedListbox::OnDrawItem(unsigned int,struct tagDRAWITEMSTRUCT *)
    */

void __thiscall
CPNCheckedListbox::OnDrawItem(CPNCheckedListbox *this,uint param_1,tagDRAWITEMSTRUCT *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  CPNBrush *pCVar4;
  HDC pHVar5;
  long lVar6;
  CPNColor *pCVar7;
  int iVar8;
  int iVar9;
  CPNDC local_3f4 [463];
  HDC local_225;
  CPNDC local_214 [463];
  HDC local_45;
  int local_34;
  int local_30;
  int local_24;
  HDC__ *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  HGDIOBJ local_8;
  
                    /* 0x142d9  1598  ?OnDrawItem@CPNCheckedListbox@@IAEXIPAUtagDRAWITEMSTRUCT@@@Z
                        */
  local_20 = *(HDC__ **)(param_2 + 0x18);
  local_8 = *(HGDIOBJ *)(param_2 + 0xc);
  if (*(int *)(param_2 + 8) != -1) {
    puVar2 = FUN_6061a410(*(void **)(this + 0xc0),*(int *)(param_2 + 8));
    piVar3 = (int *)FUN_6061a2e0((int)puVar2);
    local_1c = (char *)*piVar3;
    if ((local_1c != (char *)0x0) &&
       ((local_24 = *(int *)(local_1c + 0x41), local_8 == (HGDIOBJ)0x1 || (local_8 == (HGDIOBJ)0x2))
       )) {
      CPNDC::CPNDC(local_214,local_20);
      local_18 = *(int *)(param_2 + 0x1c);
      local_14 = *(int *)(param_2 + 0x20);
      local_10 = *(int *)(param_2 + 0x24);
      local_c = *(int *)(param_2 + 0x28);
      if (((byte)param_2[0x10] & 1) == 0) {
        pCVar4 = CPNDrawHelper::GetWindowBrush();
      }
      else {
        pCVar4 = CPNDrawHelper::GetHighlightBrush();
      }
      CPNDC::FillRectangle(local_214,(CPNxRect *)&local_18,pCVar4);
      iVar9 = (local_c - local_14) - *(int *)(this + 200);
      sVar1 = (short)(iVar9 / 2);
      if (sVar1 * 2 < iVar9) {
        sVar1 = sVar1 + 1;
      }
      iVar9 = (int)sVar1;
      local_30 = local_14 + iVar9;
      local_34 = local_18 + iVar9;
      iVar8 = local_18 + iVar9 * 2;
      iVar9 = *(int *)(this + 0xc4);
      pHVar5 = CreateCompatibleDC(local_45);
      CPNDC::CPNDC(local_3f4,pHVar5);
      local_8 = SelectObject(local_225,*(HGDIOBJ *)(this + 0xcc));
      lVar6 = 0;
      if (local_24 != 0) {
        lVar6 = *(long *)(this + 0xc4);
      }
      CPNDC::Blit(local_214,local_34,local_30,*(long *)(this + 0xc4),*(long *)(this + 200),local_3f4
                  ,lVar6,0,10);
      if (((byte)param_2[0x10] & 1) == 0) {
        pCVar7 = CPNDrawHelper::GetWindowColor();
        CPNDC::SelectNewTextBgColor(local_214,pCVar7);
        pCVar7 = CPNDrawHelper::GetWindowTextColor();
      }
      else {
        pCVar7 = CPNDrawHelper::GetHighlightColor();
        CPNDC::SelectNewTextBgColor(local_214,pCVar7);
        pCVar7 = CPNDrawHelper::GetHighlightTextColor();
      }
      CPNDC::SelectNewTextFgColor(local_214,pCVar7);
      if (local_8 != (HGDIOBJ)0x0) {
        SelectObject(local_225,local_8);
      }
      CPNDC::Detach(local_3f4);
      local_10 = local_10 + -1;
      local_18 = iVar8 + iVar9;
      CPNDC::DrawTextExA(local_214,local_1c,(CPNxRect *)&local_18,0x12080);
      CPNDC::Detach(local_214);
      CPNDC::~CPNDC(local_3f4);
      CPNDC::~CPNDC(local_214);
    }
  }
  return;
}


