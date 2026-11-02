/* Module: vfplugs.dll
   Function: FUN_0043f2c0
   Address: 0043f2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f2c0(int *param_1,LPRECT param_2,LPRECT param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPRECT ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  ptVar4 = param_2;
  iVar8 = *param_1;
  iVar7 = param_2->left;
  if ((((iVar7 < iVar8) || (param_1[2] < param_2->right)) || (param_2->top < param_1[1])) ||
     (param_1[3] < param_2->bottom)) {
    iVar5 = param_1[2];
    if (((iVar7 < iVar5) && (iVar1 = param_2->right, iVar8 < iVar1)) &&
       (iVar6 = param_1[3], param_2->top < iVar6)) {
      iVar2 = param_2->bottom;
      iVar3 = param_1[1];
      if (iVar3 < iVar2) {
        param_2 = (LPRECT)0x0;
        param_1 = (int *)0x0;
        if (iVar7 < iVar8) {
          param_2 = (LPRECT)(iVar8 - iVar7);
        }
        if (iVar5 < iVar1) {
          param_1 = (int *)(iVar1 - iVar5);
        }
        iVar7 = param_3->right - param_3->left;
        iVar5 = iVar5 - iVar8;
        if (0 < iVar5) {
          param_3->left = (iVar7 * (int)param_2) / iVar5 + param_3->left;
          iVar8 = ptVar4->left;
          param_3->right = param_3->right - (iVar7 * (int)param_1) / iVar5;
          ptVar4->left = (int)&param_2->left + iVar8;
          ptVar4->right = iVar1 - (int)param_1;
        }
        param_2 = (LPRECT)0x0;
        param_1 = (int *)0x0;
        if (ptVar4->top < iVar3) {
          param_2 = (LPRECT)(iVar3 - ptVar4->top);
        }
        if (iVar6 < iVar2) {
          param_1 = (int *)(iVar2 - iVar6);
        }
        iVar8 = param_3->bottom - param_3->top;
        iVar6 = iVar6 - iVar3;
        if (iVar6 == 0) {
          return;
        }
        param_3->top = (iVar8 * (int)param_2) / iVar6 + param_3->top;
        iVar7 = ptVar4->top;
        param_3->bottom = param_3->bottom - (iVar8 * (int)param_1) / iVar6;
        ptVar4->top = (int)&param_2->left + iVar7;
        ptVar4->bottom = iVar2 - (int)param_1;
        return;
      }
    }
    SetRect(param_2,0,0,0,0);
    SetRect(param_3,0,0,0,0);
  }
  return;
}


