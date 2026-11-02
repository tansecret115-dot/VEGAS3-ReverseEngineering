/* Module: pngu3266.dll
   Function: FindSensitiveRect
   Address: 605fa027
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: struct SensitiveInfo * __thiscall CPNWindow::FindSensitiveRect(class CPNxRect const &)
    */

SensitiveInfo * __thiscall CPNWindow::FindSensitiveRect(CPNWindow *this,CPNxRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SensitiveInfo *pSVar7;
  
                    /* 0xa027  1049
                       ?FindSensitiveRect@CPNWindow@@IAEPAUSensitiveInfo@@ABVCPNxRect@@@Z */
  iVar1 = *(int *)param_1;
  iVar5 = *(int *)(this + 0x70);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x10) == 0)) {
LAB_605fa09d:
    pSVar7 = (SensitiveInfo *)0x0;
  }
  else {
    param_1 = *(CPNxRect **)(iVar5 + 4);
    do {
      if (param_1 == (CPNxRect *)0x0) goto LAB_605fa09d;
      piVar6 = (int *)FUN_6061a2c0((int *)&param_1);
      pSVar7 = (SensitiveInfo *)*piVar6;
    } while (((((*(int *)pSVar7 != iVar1) || (*(int *)(pSVar7 + 4) != iVar2)) ||
              (*(int *)(pSVar7 + 8) != iVar3)) || (*(int *)(pSVar7 + 0xc) != iVar4)) &&
            (((iVar3 <= *(int *)pSVar7 || (*(int *)(pSVar7 + 8) <= iVar1)) ||
             ((iVar4 <= *(int *)(pSVar7 + 4) || (*(int *)(pSVar7 + 0xc) <= iVar2))))));
  }
  return pSVar7;
}


